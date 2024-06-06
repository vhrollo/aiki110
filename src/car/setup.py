from setuptools import setup

package_name = 'car'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='hal',
    maintainer_email='hal@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'tjeneste = car.bryter_tjeneste:main', 
            'klient = car.bryter_klient:main',
            'lys = car.lys_node:main',
            'bevegelse = car.bevegelse_node:main',
            'motor = car.motor_node:main'
        ],
    },
)
