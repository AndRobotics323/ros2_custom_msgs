# ros2_custom_msgs

usage: 자신의 컴퓨터로 git clone 을 한 후 build/server_to_fms/ 를 확인했을 때

CMakeCache.txt 파일이 있다면 이를 먼저 삭제해야 colcon build가 정상적으로 진행됨

다음은 터미널에서 install/setup.bash 를 진행해야 해당 custom msg 를 사용할 수 있다.

바깥의 service_server_example.py 는 ros2 service의 server 쪽 예시에 해당하는데

상단의 'from server_to_fms.srv import TryOnRequest' 와 같은 방식으로 custom msg를

불러올 수 있다.
