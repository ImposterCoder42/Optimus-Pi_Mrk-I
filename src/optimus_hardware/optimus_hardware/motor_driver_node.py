import rclpy
from rclpy.node import Node

from optimus_interfaces.msg import MotorInputs

import RPi.GPIO as GPIO

# Define Pins
right_motor_pin1 = 37
right_motor_pin2 = 36
left_motor_pin1 = 40
left_motor_pin2 = 38


# Setup the GPIO
def setup():
    GPIO.setmode(GPIO.BOARD) 
    GPIO.setup(right_motor_pin1, GPIO.OUT)
    GPIO.setup(right_motor_pin2, GPIO.OUT)
    GPIO.setup(left_motor_pin1, GPIO.OUT)
    GPIO.setup(left_motor_pin2, GPIO.OUT)

    # Make PWM pins Global so other class / functions can use them
    global right_motor_pwm1, right_motor_pwm2, left_motor_pwm1, left_motor_pwm2

    right_motor_pwm1 = GPIO.PWM(right_motor_pin1, 1000)
    right_motor_pwm1.start(0)
    right_motor_pwm2 = GPIO.PWM(right_motor_pin2, 1000)
    right_motor_pwm2.start(0)
    left_motor_pwm1 = GPIO.PWM(left_motor_pin1, 1000)
    left_motor_pwm1.start(0)
    left_motor_pwm2 = GPIO.PWM(left_motor_pin2, 1000)
    left_motor_pwm2.start(0)



class MotorDriverNode(Node):
    def __init__(self):
        super().__init__('motor_driver_node')
        self.subscriber_ = self.create_subscription(MotorInputs, 'motor_inputs', self.motor_input_cb, 10)

        self.get_logger().info('Motor Node is Running...')


    def motor_input_cb(self, msg):
        # NOTE pos nums are down and neg is up
        # NOTE Duty cycle needs to be in a range of 0 - 100
        # NOTE 32767 is the max Value of a joystick
        lt_motor_1, lt_motor_2 = self.convert_controller_data_to_pwm(msg.left_motor)
        rt_motor_1, rt_motor_2 = self.convert_controller_data_to_pwm(msg.right_motor)
        
        if any([lt_motor_1, lt_motor_2, rt_motor_1, rt_motor_2]):
            self.get_logger().info(f'''
            left motor: {lt_motor_1}% / {lt_motor_2}% || right motor: {rt_motor_1}% / {rt_motor_2}%
            ''')

        left_motor_pwm1.ChangeDutyCycle(lt_motor_1)
        left_motor_pwm2.ChangeDutyCycle(lt_motor_2)
        right_motor_pwm1.ChangeDutyCycle(rt_motor_1)
        right_motor_pwm2.ChangeDutyCycle(rt_motor_2)




    def convert_controller_data_to_pwm(self, data):
        if data < -15*327.67: return [abs(data) / 327.76, 0]
        elif data > 15*327.67: return [0, data / 327.76]
        return [0, 0]


def main(args=None):
    setup() 
    try:
        rclpy.init(args=args)
        node = MotorDriverNode()
        rclpy.spin(node)
        node.destroy_node()
        rclpy.shutdown()
    except KeyboardInterrupt:
        GPIO.cleanup()

if __name__ == '__main__':
    main()