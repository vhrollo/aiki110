#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import Int8
from car_sign.msg import MotorTilstand
from time import sleep
import RPi.GPIO as GPIO


class MovementNode(Node):
    def __init__(self):
        super().__init__('bevegelse_node')
        self.bryter = 0
        self.subscription = self.create_subscription(
            Int8,
            'buss',
            self.callback,
            10
        )

        self.publisher = self.create_publisher(
            MotorTilstand,
            "motor",
            10
        )

    def callback(self, msg):
        if msg.data == 1:
            self.bryter = 1
        elif msg.data == -1:
            self.bryter = 0

        if self.bryter:
            self.priuette()
        print(f'bryter bevegelse {self.bryter}')

    def priuette(self):
        self.send_instruction(1,  0,  0)
        sleep(1)
        self.send_instruction(2, -53, 53)
        sleep(1)
        self.send_instruction(3,  0,  0)
        

    def send_instruction(self, instruks_id, left, right):
        instruction = MotorTilstand()
        instruction.instruks_id = instruks_id
        instruction.left = left
        instruction.right = right
        self.publisher.publish(instruction)

def main():
    try:
        rclpy.init()
        bevegelse_node = MovementNode()
        rclpy.spin(bevegelse_node)
    except KeyboardInterrupt:
        print('\nStoppa av brukaren.')
    finally:
        bevegelse_node.destroy_node()
        if rclpy.ok(): 
            rclpy.shutdown()


if __name__ == '__main__':
    main()
