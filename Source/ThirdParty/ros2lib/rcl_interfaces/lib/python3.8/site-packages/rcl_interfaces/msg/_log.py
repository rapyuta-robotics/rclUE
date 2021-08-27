# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rcl_interfaces:msg/Log.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Log(type):
    """Metaclass of message 'Log'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'DEBUG': b'\n',
        'INFO': b'\x14',
        'WARN': b'\x1e',
        'ERROR': b'(',
        'FATAL': b'2',
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
                'rcl_interfaces.msg.Log')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__log
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__log
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__log
            cls._TYPE_SUPPORT = module.type_support_msg__msg__log
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__log

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'DEBUG': cls.__constants['DEBUG'],
            'INFO': cls.__constants['INFO'],
            'WARN': cls.__constants['WARN'],
            'ERROR': cls.__constants['ERROR'],
            'FATAL': cls.__constants['FATAL'],
        }

    @property
    def DEBUG(self):
        """Message constant 'DEBUG'."""
        return Metaclass_Log.__constants['DEBUG']

    @property
    def INFO(self):
        """Message constant 'INFO'."""
        return Metaclass_Log.__constants['INFO']

    @property
    def WARN(self):
        """Message constant 'WARN'."""
        return Metaclass_Log.__constants['WARN']

    @property
    def ERROR(self):
        """Message constant 'ERROR'."""
        return Metaclass_Log.__constants['ERROR']

    @property
    def FATAL(self):
        """Message constant 'FATAL'."""
        return Metaclass_Log.__constants['FATAL']


class Log(metaclass=Metaclass_Log):
    """
    Message class 'Log'.

    Constants:
      DEBUG
      INFO
      WARN
      ERROR
      FATAL
    """

    __slots__ = [
        '_stamp',
        '_level',
        '_name',
        '_msg',
        '_file',
        '_function',
        '_line',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'level': 'uint8',
        'name': 'string',
        'msg': 'string',
        'file': 'string',
        'function': 'string',
        'line': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.level = kwargs.get('level', int())
        self.name = kwargs.get('name', str())
        self.msg = kwargs.get('msg', str())
        self.file = kwargs.get('file', str())
        self.function = kwargs.get('function', str())
        self.line = kwargs.get('line', int())

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
        if self.stamp != other.stamp:
            return False
        if self.level != other.level:
            return False
        if self.name != other.name:
            return False
        if self.msg != other.msg:
            return False
        if self.file != other.file:
            return False
        if self.function != other.function:
            return False
        if self.line != other.line:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value

    @property
    def level(self):
        """Message field 'level'."""
        return self._level

    @level.setter
    def level(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'level' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'level' field must be an unsigned integer in [0, 255]"
        self._level = value

    @property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @property
    def msg(self):
        """Message field 'msg'."""
        return self._msg

    @msg.setter
    def msg(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'msg' field must be of type 'str'"
        self._msg = value

    @property
    def file(self):
        """Message field 'file'."""
        return self._file

    @file.setter
    def file(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'file' field must be of type 'str'"
        self._file = value

    @property
    def function(self):
        """Message field 'function'."""
        return self._function

    @function.setter
    def function(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'function' field must be of type 'str'"
        self._function = value

    @property
    def line(self):
        """Message field 'line'."""
        return self._line

    @line.setter
    def line(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'line' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'line' field must be an unsigned integer in [0, 4294967295]"
        self._line = value
