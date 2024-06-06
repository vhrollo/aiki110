#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import Int8
from car_sign.msg import MotorTilstand
from time import sleep
import RPi.GPIO as GPIO


class MotorNode(Node):
    def __init__(self):
        super().__init__('motor_node')
        self.setup()
        self.subscription = self.create_subscription(
            MotorTilstand,
            'motor',
            self.callback,
            10
        )

    def tets(self):
        pass


    def setup(self):
        print('setting up')
        self.pin_1 = 5
        self.pin_2 = 6
        self.pin_3 = 13
        self.pin_4 = 19
        GPIO.setwarnings(False)
        GPIO.setmode(GPIO.BCM)
        GPIO.setup(self.pin_1, GPIO.OUT)
        GPIO.setup(self.pin_2, GPIO.OUT)
        GPIO.setup(self.pin_3, GPIO.OUT)
        GPIO.setup(self.pin_4, GPIO.OUT)
        self.PWM_1 = GPIO.PWM(self.pin_1, 100)
        self.PWM_2 = GPIO.PWM(self.pin_2, 100)
        self.PWM_3 = GPIO.PWM(self.pin_3, 100)
        self.PWM_4 = GPIO.PWM(self.pin_4, 100)
        self.PWM_1.start(0)
        self.PWM_2.start(0)
        self.PWM_3.start(0)
        self.PWM_4.start(0)
        
    def control_motors(self, left_speed, right_speed):
        self.get_logger().info(f'{left_speed} | {right_speed}')
        if left_speed > 0:
            self.PWM_1.ChangeDutyCycle(abs(left_speed))
            self.PWM_2.ChangeDutyCycle(0)
        else:
            self.PWM_1.ChangeDutyCycle(0)
            self.PWM_2.ChangeDutyCycle(abs(left_speed))

        if right_speed > 0:
            self.PWM_4.ChangeDutyCycle(abs(right_speed))
            self.PWM_3.ChangeDutyCycle(0)
        else:
            self.PWM_4.ChangeDutyCycle(0)
            self.PWM_3.ChangeDutyCycle(abs(right_speed))



    def callback(self, msg):
        left_speed = msg.left
        right_speed = msg.right
        self.control_motors(left_speed, right_speed)   

def main():
    try:
        rclpy.init()
        motor_node = MotorNode()
        rclpy.spin(motor_node)
    except KeyboardInterrupt:
        print('\nStoppa av brukaren.')
    finally:
        motor_node.destroy_node()
        GPIO.cleanup()  # Clean up GPIO
        if rclpy.ok(): 
            rclpy.shutdown()


if __name__ == '__main__':
    main()

