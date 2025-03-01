
# Optimus-Pi Mrk-I

[YouTube - Mrk-I Build](https://www.youtube.com/playlist?list=PLiymVw0QSna0sIXzzXjwf6gSb4iDrXdEi)

*Hello World!*\
In this iteration of Optimus Pi, I will focus on a very basic build.  Using ROS and Python I will build an RC tank.  I will use a Raspberry Pi, PS4 controller, and XiaoR Geek Tank Chassis.  In the Youtube series above you can watch the full build from loading Ubuntu to feild test.  It's not a tutorial, but it does show building a simple bot start to finish.

What this iterartions main fuction is to receive commands from a PS4 controller via bluetooth and then drive the motors.  Its very basic but would be a great first build, open to endless amount of personalization.

To get more information on setting up a Pi with Ubuntu, ROS2, and everything needed to create your own turtle bot check out my other repo [Jazzy Basics](https://github.com/ImposterCoder42/ROS2-Jazzy-Basics)


### After Set up 
After setting the Pi you should be able to clone, build, launch the project.\
**In the home directory:**
- ```mkdir optimus_ws```
- ```cd optimus_ws```
- ```git clone "https://github.com/ImposterCoder42/ROS2-Jazzy-Basics.git"```
- ```echo source ~/optimus_ws/install/local_setup.bash >> ~/.bashrc```
- ```colcon build```
- ```ros2 launch optimus_bringup optimus_mrk_I.launch.xml```

### PARTS LIST
Chassis: 
https://www.xiaorgeek.net/collections/chassis-series

Raspberry Pi 4:
https://vilros.com/products/raspberry-pi-4-model-b-1?variant=40809478750302

PS4 Controller:
https://www.walmart.com/ip/SonyPlayStation-4-DualShock-4-Wireless-Controller-BLUE/13593551052

Motor Drivers:
https://www.amazon.com/DC50A-Double-Stepper-Driver-H-Bridge/dp/B098JYKGJ4

Battery:  ( this can be found cheaper on eBay or Amazon )
https://us.ovonicshop.com/products/ovonic-100c-22-2v-1550mah-6s1p-xt60-lipo-battery?_pos=6&_fid=ca6c5583a&_ss=c

LM25996 Step Down Buck Converter:
https://www.ebay.com/itm/234250361981?var=533855637792

---
\
Just remember if we shutdown as of now I have to re run the commands:\
```sudo grep gpio /etc/group```\
```sudo chown root:gpio /dev/gpiomem```\
```sudo chmod g+rw /dev/gpiomem```\
```sudo service apache2 restart```


# Happy Coding!