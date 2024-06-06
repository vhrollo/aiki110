#!/usr/bin/env python3
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='car',
            executable='klient',
            name='bryter_klient',
            output='screen',
        ),
        Node(
            package='car',
            executable='tjeneste',
            name='bryter_tjeneste',
            output='screen',
        ),
        Node(
            package='car',
            executable='lys',
            name='light',
            output='screen',
        ),
        Node(
            package='car',
            executable='motor',
            name='motor_node',
            output='screen',
        ),
        Node(
            package='car',
            executable='bevegelse',
            name='bevegelse_node',
            output='screen',
        )
    ])