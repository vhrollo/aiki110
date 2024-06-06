from setuptools import find_packages
from setuptools import setup

setup(
    name='car_sign',
    version='0.0.0',
    packages=find_packages(
        include=('car_sign', 'car_sign.*')),
)
