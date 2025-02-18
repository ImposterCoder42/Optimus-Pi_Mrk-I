import rclpy
from rclpy.node import Node
from pyPS4Controller.controller import Controller

from optimus_interfaces.msg import MotorInputs


class PS4Controller(Node, Controller):
    def __init__(self, **kwargs):
        Controller.__init__(self, **kwargs)
        super().__init__('ps4_controller')
        self.publisher_ = self.create_publisher(MotorInputs, 'motor_inputs', 10)
        self.left_joystick_value = 0
        self.right_joystick_value = 0



        self.get_logger().info('My Name is Optimus Pi, and I am alive!')
    
    def publish_motor_inputs(self):
        msg = MotorInputs()
        msg.left_motor = self.left_joystick_value
        msg.right_motor = self.right_joystick_value
        self.publisher_.publish(msg)

    def on_L3_up(self, value): # down is positive and up is negative
        self.left_joystick_value = value
        self.publish_motor_inputs()
    def on_R3_up(self, value):
        self.right_joystick_value = value
        self.publish_motor_inputs()
    def on_L3_down(self, value):
        self.left_joystick_value = value
        self.publish_motor_inputs()
    def on_R3_down(self, value):
        self.right_joystick_value = value
        self.publish_motor_inputs()


    def on_x_press(self):
            self.get_logger().info("Hello World?")
    def on_x_release(self):
            self.get_logger().info("Goodbye World!")
    

class ControllerNode(Node):
    def __init__(self):
        super().__init__('controller_node')
        self.controller_ = PS4Controller(interface='/dev/input/js0', connecting_using_ds4drv=False)
        self.controller_.listen(timeout=60)




def main(args=None):
    rclpy.init(args=args)

    node = ControllerNode()

    rclpy.spin(node)

    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()