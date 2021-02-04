# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rcl_interfaces:msg/ParameterType.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ParameterType(type):
    """Metaclass of message 'ParameterType'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'PARAMETER_NOT_SET': 0,
        'PARAMETER_BOOL': 1,
        'PARAMETER_INTEGER': 2,
        'PARAMETER_DOUBLE': 3,
        'PARAMETER_STRING': 4,
        'PARAMETER_BYTE_ARRAY': 5,
        'PARAMETER_BOOL_ARRAY': 6,
        'PARAMETER_INTEGER_ARRAY': 7,
        'PARAMETER_DOUBLE_ARRAY': 8,
        'PARAMETER_STRING_ARRAY': 9,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rcl_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rcl_interfaces.msg.ParameterType')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__parameter_type
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__parameter_type
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__parameter_type
            cls._TYPE_SUPPORT = module.type_support_msg__msg__parameter_type
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__parameter_type

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'PARAMETER_NOT_SET': cls.__constants['PARAMETER_NOT_SET'],
            'PARAMETER_BOOL': cls.__constants['PARAMETER_BOOL'],
            'PARAMETER_INTEGER': cls.__constants['PARAMETER_INTEGER'],
            'PARAMETER_DOUBLE': cls.__constants['PARAMETER_DOUBLE'],
            'PARAMETER_STRING': cls.__constants['PARAMETER_STRING'],
            'PARAMETER_BYTE_ARRAY': cls.__constants['PARAMETER_BYTE_ARRAY'],
            'PARAMETER_BOOL_ARRAY': cls.__constants['PARAMETER_BOOL_ARRAY'],
            'PARAMETER_INTEGER_ARRAY': cls.__constants['PARAMETER_INTEGER_ARRAY'],
            'PARAMETER_DOUBLE_ARRAY': cls.__constants['PARAMETER_DOUBLE_ARRAY'],
            'PARAMETER_STRING_ARRAY': cls.__constants['PARAMETER_STRING_ARRAY'],
        }

    @property
    def PARAMETER_NOT_SET(self):
        """Message constant 'PARAMETER_NOT_SET'."""
        return Metaclass_ParameterType.__constants['PARAMETER_NOT_SET']

    @property
    def PARAMETER_BOOL(self):
        """Message constant 'PARAMETER_BOOL'."""
        return Metaclass_ParameterType.__constants['PARAMETER_BOOL']

    @property
    def PARAMETER_INTEGER(self):
        """Message constant 'PARAMETER_INTEGER'."""
        return Metaclass_ParameterType.__constants['PARAMETER_INTEGER']

    @property
    def PARAMETER_DOUBLE(self):
        """Message constant 'PARAMETER_DOUBLE'."""
        return Metaclass_ParameterType.__constants['PARAMETER_DOUBLE']

    @property
    def PARAMETER_STRING(self):
        """Message constant 'PARAMETER_STRING'."""
        return Metaclass_ParameterType.__constants['PARAMETER_STRING']

    @property
    def PARAMETER_BYTE_ARRAY(self):
        """Message constant 'PARAMETER_BYTE_ARRAY'."""
        return Metaclass_ParameterType.__constants['PARAMETER_BYTE_ARRAY']

    @property
    def PARAMETER_BOOL_ARRAY(self):
        """Message constant 'PARAMETER_BOOL_ARRAY'."""
        return Metaclass_ParameterType.__constants['PARAMETER_BOOL_ARRAY']

    @property
    def PARAMETER_INTEGER_ARRAY(self):
        """Message constant 'PARAMETER_INTEGER_ARRAY'."""
        return Metaclass_ParameterType.__constants['PARAMETER_INTEGER_ARRAY']

    @property
    def PARAMETER_DOUBLE_ARRAY(self):
        """Message constant 'PARAMETER_DOUBLE_ARRAY'."""
        return Metaclass_ParameterType.__constants['PARAMETER_DOUBLE_ARRAY']

    @property
    def PARAMETER_STRING_ARRAY(self):
        """Message constant 'PARAMETER_STRING_ARRAY'."""
        return Metaclass_ParameterType.__constants['PARAMETER_STRING_ARRAY']


class ParameterType(metaclass=Metaclass_ParameterType):
    """
    Message class 'ParameterType'.

    Constants:
      PARAMETER_NOT_SET
      PARAMETER_BOOL
      PARAMETER_INTEGER
      PARAMETER_DOUBLE
      PARAMETER_STRING
      PARAMETER_BYTE_ARRAY
      PARAMETER_BOOL_ARRAY
      PARAMETER_INTEGER_ARRAY
      PARAMETER_DOUBLE_ARRAY
      PARAMETER_STRING_ARRAY
    """

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)
