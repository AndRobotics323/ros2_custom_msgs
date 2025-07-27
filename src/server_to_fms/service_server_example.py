import rclpy
from rclpy.node import Node
from server_to_fms.srv import TryOnRequest

import time

class TryOnService(Node):
    def __init__(self):
        super().__init__('try_on_service')
        self.srv = self.create_service(TryOnRequest, 'try_on_service', self.handle_request)

    def handle_request(self, request, response):
        self.get_logger().info(f"받은 요청: {request.customer_id}, {request.shoe_name}")
        response.success = True
        response.estimated_mins = 3
        # response.message = f"{request.shoe_name} 준비 완료"

        time.sleep(3)

        return response

def main(args=None):
    rclpy.init(args=args)
    node = TryOnService()
    rclpy.spin(node)
    rclpy.shutdown()



if __name__ == '__main__':
    main()