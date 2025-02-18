from setuptools import find_packages, setup

package_name = 'optimus_hardware'

setup(
    name=package_name,
    version='0.0.1',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='optimus',
    maintainer_email='optimus@todo.todo',
    description='TODO: Package description',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "controller_node = optimus_hardware.controller_node:main",
            "motor_driver_node = optimus_hardware.motor_driver_node:main",
        ],
    },
)
