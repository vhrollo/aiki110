#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import Int8
from time import sleep
import RPi.GPIO as GPIO


class LightNode(Node):
    def __init__(self):
        super().__init__('light_node')
        self.setup()
        self.subscription = self.create_subscription(
            Int8,
            'buss',
            self.callback,
            10
        )
        self.light(1)
        sleep(0.1)
        self.light(0)

    def callback(self, msg):
        self.light(msg.data)

        if msg.data == 1:
            print("Light: On")
        elif msg.data == -1:
            print("Light: Off")

    def setup(self):
        self.pin_out = 26
        GPIO.setwarnings(False)
        GPIO.setmode(GPIO.BCM)
        GPIO.setup(self.pin_out, GPIO.OUT)
        GPIO.output(self.pin_out, GPIO.LOW)

    def light(self, state):
        if state == 1:
            GPIO.output(self.pin_out, GPIO.HIGH)  
        else:
            GPIO.output(self.pin_out, GPIO.LOW)


def main():
    try:
        rclpy.init()
        light_node = LightNode()
        rclpy.spin(light_node)
    except KeyboardInterrupt:
        print('\nStoppa av brukaren.')
    finally:
        light_node.destroy_node()
        GPIO.cleanup()
        if rclpy.ok(): 
            rclpy.shutdown()


if __name__ == '__main__':
    main()
