# generated from rosidl_generator_py/resource/_idl.py.em
# with input from car_sign:srv/CarBrytertilstand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CarBrytertilstand_Request(type):
    """Metaclass of message 'CarBrytertilstand_Request'."""

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
                'car_sign.srv.CarBrytertilstand_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__car_brytertilstand__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__car_brytertilstand__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__car_brytertilstand__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__car_brytertilstand__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__car_brytertilstand__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CarBrytertilstand_Request(metaclass=Metaclass_CarBrytertilstand_Request):
    """Message class 'CarBrytertilstand_Request'."""

    __slots__ = [
        '_bryter_id',
    ]

    _fields_and_field_types = {
        'bryter_id': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.bryter_id = kwargs.get('bryter_id', int())

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
        if self.bryter_id != other.bryter_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def bryter_id(self):
        """Message field 'bryter_id'."""
        return self._bryter_id

    @bryter_id.setter
    def bryter_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bryter_id' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'bryter_id' field must be an integer in [-128, 127]"
        self._bryter_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_CarBrytertilstand_Response(type):
    """Metaclass of message 'CarBrytertilstand_Response'."""

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
                'car_sign.srv.CarBrytertilstand_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__car_brytertilstand__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__car_brytertilstand__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__car_brytertilstand__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__car_brytertilstand__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__car_brytertilstand__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CarBrytertilstand_Response(metaclass=Metaclass_CarBrytertilstand_Response):
    """Message class 'CarBrytertilstand_Response'."""

    __slots__ = [
        '_bryter_tilstand',
    ]

    _fields_and_field_types = {
        'bryter_tilstand': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.bryter_tilstand = kwargs.get('bryter_tilstand', int())

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
        if self.bryter_tilstand != other.bryter_tilstand:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def bryter_tilstand(self):
        """Message field 'bryter_tilstand'."""
        return self._bryter_tilstand

    @bryter_tilstand.setter
    def bryter_tilstand(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bryter_tilstand' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'bryter_tilstand' field must be an integer in [-128, 127]"
        self._bryter_tilstand = value


class Metaclass_CarBrytertilstand(type):
    """Metaclass of service 'CarBrytertilstand'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('car_sign')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'car_sign.srv.CarBrytertilstand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__car_brytertilstand

            from car_sign.srv import _car_brytertilstand
            if _car_brytertilstand.Metaclass_CarBrytertilstand_Request._TYPE_SUPPORT is None:
                _car_brytertilstand.Metaclass_CarBrytertilstand_Request.__import_type_support__()
            if _car_brytertilstand.Metaclass_CarBrytertilstand_Response._TYPE_SUPPORT is None:
                _car_brytertilstand.Metaclass_CarBrytertilstand_Response.__import_type_support__()


class CarBrytertilstand(metaclass=Metaclass_CarBrytertilstand):
    from car_sign.srv._car_brytertilstand import CarBrytertilstand_Request as Request
    from car_sign.srv._car_brytertilstand import CarBrytertilstand_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
