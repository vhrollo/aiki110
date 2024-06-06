#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from car_sign.srv import CarBrytertilstand
from std_msgs.msg import Int8
from time import sleep


class KlientNode(Node):
    def __init__(self):
        super().__init__('klient_node')
        self.cli = self.create_client(CarBrytertilstand, 'test')

        while not self.cli.wait_for_service(timeout_sec=1.0):
            print('Tjeneste utilgjengelig, venter...')

        self.publisher = self.create_publisher(
            Int8,
            "buss",
            10
        )

        self.previous_state = None

    def send_request(self):
        request = CarBrytertilstand.Request()
        request.bryter_id = 1

        self.future = self.cli.call_async(request)
        rclpy.spin_until_future_complete(self, self.future)
        result = self.future.result()

        self.check_change(result.bryter_tilstand)

        self.previous_state = result.bryter_tilstand


    def check_change(self, current_state):
        if self.previous_state == None:
            return
        val = current_state - self.previous_state
        if val:
            print(val)
            self.publish_msg(val)

    def publish_msg(self, state):
        msg = Int8()
        msg.data = state
        self.publisher.publish(msg)



def main():
    try:
        rclpy.init()
        klient = KlientNode()
        
        while rclpy.ok():
            klient.send_request()
            sleep(1) # 1 hz
    except KeyboardInterrupt:
        print('\nStoppa av brukaren.')
    finally:
        klient.destroy_node()
        if rclpy.ok(): 
            rclpy.shutdown()


if __name__ == '__main__':
    main()