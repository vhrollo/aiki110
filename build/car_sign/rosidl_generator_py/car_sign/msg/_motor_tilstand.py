# generated from rosidl_generator_py/resource/_idl.py.em
# with input from car_sign:msg/MotorTilstand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotorTilstand(type):
    """Metaclass of message 'MotorTilstand'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('car_sign')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'car_sign.msg.MotorTilstand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motor_tilstand
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motor_tilstand
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motor_tilstand
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motor_tilstand
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motor_tilstand

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotorTilstand(metaclass=Metaclass_MotorTilstand):
    """Message class 'MotorTilstand'."""

    __slots__ = [
        '_instruks_id',
        '_left',
        '_right',
    ]

    _fields_and_field_types = {
        'instruks_id': 'int8',
        'left': 'int8',
        'right': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.instruks_id = kwargs.get('instruks_id', int())
        self.left = kwargs.get('left', int())
        self.right = kwargs.get('right', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.instruks_id != other.instruks_id:
            return False
        if self.left != other.left:
            return False
        if self.right != other.right:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def instruks_id(self):
        """Message field 'instruks_id'."""
        return self._instruks_id

    @instruks_id.setter
    def instruks_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'instruks_id' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'instruks_id' field must be an integer in [-128, 127]"
        self._instruks_id = value

    @builtins.property
    def left(self):
        """Message field 'left'."""
        return self._left

    @left.setter
    def left(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'left' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'left' field must be an integer in [-128, 127]"
        self._left = value

    @builtins.property
    def right(self):
        """Message field 'right'."""
        return self._right

    @right.setter
    def right(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'right' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'right' field must be an integer in [-128, 127]"
        self._right = value
