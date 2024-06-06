#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from car_sign.srv import CarBrytertilstand
import RPi.GPIO as GPIO


class TjenesteNode(Node):
    def __init__(self):
        super().__init__('tjeneste_node')
        self.setup()
        self.srv = self.create_service(CarBrytertilstand,
                                       'test',
                                       self.handle_TjenesteTest)

    def handle_TjenesteTest(self, request, response):
        response.bryter_tilstand = self.status()
        return response
    
    def setup(self):
        self.pin_out = 23
        self.pin_in = 24
        GPIO.setwarnings(False)
        GPIO.setmode(GPIO.BCM)
        GPIO.setup(self.pin_out, GPIO.OUT)
        GPIO.setup(self.pin_in, GPIO.IN, pull_up_down=GPIO.PUD_DOWN)
        GPIO.output(self.pin_out, GPIO.HIGH)


    def status(self):
        return int(GPIO.input(self.pin_in) == GPIO.HIGH)
        


def main():
    try: 
        rclpy.init()
        tjeneste = TjenesteNode()
        rclpy.spin(tjeneste)
    except KeyboardInterrupt:
        print('\nStoppa av brukaren.')
    finally:
        GPIO.cleanup()
        tjeneste.destroy_node()
        if rclpy.ok(): 
            rclpy.shutdown()
