# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rcl_interfaces:msg/ParameterValue.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'integer_array_value'
# Member 'double_array_value'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ParameterValue(type):
    """Metaclass of message 'ParameterValue'."""

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
            module = import_type_support('rcl_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rcl_interfaces.msg.ParameterValue')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__parameter_value
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__parameter_value
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__parameter_value
            cls._TYPE_SUPPORT = module.type_support_msg__msg__parameter_value
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__parameter_value

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ParameterValue(metaclass=Metaclass_ParameterValue):
    """Message class 'ParameterValue'."""

    __slots__ = [
        '_type',
        '_bool_value',
        '_integer_value',
        '_double_value',
        '_string_value',
        '_byte_array_value',
        '_bool_array_value',
        '_integer_array_value',
        '_double_array_value',
        '_string_array_value',
    ]

    _fields_and_field_types = {
        'type': 'uint8',
        'bool_value': 'boolean',
        'integer_value': 'int64',
        'double_value': 'double',
        'string_value': 'string',
        'byte_array_value': 'sequence<octet>',
        'bool_array_value': 'sequence<boolean>',
        'integer_array_value': 'sequence<int64>',
        'double_array_value': 'sequence<double>',
        'string_array_value': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('octet')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.type = kwargs.get('type', int())
        self.bool_value = kwargs.get('bool_value', bool())
        self.integer_value = kwargs.get('integer_value', int())
        self.double_value = kwargs.get('double_value', float())
        self.string_value = kwargs.get('string_value', str())
        self.byte_array_value = kwargs.get('byte_array_value', [])
        self.bool_array_value = kwargs.get('bool_array_value', [])
        self.integer_array_value = array.array('q', kwargs.get('integer_array_value', []))
        self.double_array_value = array.array('d', kwargs.get('double_array_value', []))
        self.string_array_value = kwargs.get('string_array_value', [])

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
        if self.type != other.type:
            return False
        if self.bool_value != other.bool_value:
            return False
        if self.integer_value != other.integer_value:
            return False
        if self.double_value != other.double_value:
            return False
        if self.string_value != other.string_value:
            return False
        if self.byte_array_value != other.byte_array_value:
            return False
        if self.bool_array_value != other.bool_array_value:
            return False
        if self.integer_array_value != other.integer_array_value:
            return False
        if self.double_array_value != other.double_array_value:
            return False
        if self.string_array_value != other.string_array_value:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'type' field must be an unsigned integer in [0, 255]"
        self._type = value

    @property
    def bool_value(self):
        """Message field 'bool_value'."""
        return self._bool_value

    @bool_value.setter
    def bool_value(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bool_value' field must be of type 'bool'"
        self._bool_value = value

    @property
    def integer_value(self):
        """Message field 'integer_value'."""
        return self._integer_value

    @integer_value.setter
    def integer_value(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'integer_value' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'integer_value' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._integer_value = value

    @property
    def double_value(self):
        """Message field 'double_value'."""
        return self._double_value

    @double_value.setter
    def double_value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'double_value' field must be of type 'float'"
        self._double_value = value

    @property
    def string_value(self):
        """Message field 'string_value'."""
        return self._string_value

    @string_value.setter
    def string_value(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'string_value' field must be of type 'str'"
        self._string_value = value

    @property
    def byte_array_value(self):
        """Message field 'byte_array_value'."""
        return self._byte_array_value

    @byte_array_value.setter
    def byte_array_value(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, bytes) for v in value) and
                 True), \
                "The 'byte_array_value' field must be a set or sequence and each value of type 'bytes'"
        self._byte_array_value = value

    @property
    def bool_array_value(self):
        """Message field 'bool_array_value'."""
        return self._bool_array_value

    @bool_array_value.setter
    def bool_array_value(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'bool_array_value' field must be a set or sequence and each value of type 'bool'"
        self._bool_array_value = value

    @property
    def integer_array_value(self):
        """Message field 'integer_array_value'."""
        return self._integer_array_value

    @integer_array_value.setter
    def integer_array_value(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'q', \
                "The 'integer_array_value' array.array() must have the type code of 'q'"
            self._integer_array_value = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -9223372036854775808 and val < 9223372036854775808 for val in value)), \
                "The 'integer_array_value' field must be a set or sequence and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._integer_array_value = array.array('q', value)

    @property
    def double_array_value(self):
        """Message field 'double_array_value'."""
        return self._double_array_value

    @double_array_value.setter
    def double_array_value(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'double_array_value' array.array() must have the type code of 'd'"
            self._double_array_value = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'double_array_value' field must be a set or sequence and each value of type 'float'"
        self._double_array_value = array.array('d', value)

    @property
    def string_array_value(self):
        """Message field 'string_array_value'."""
        return self._string_array_value

    @string_array_value.setter
    def string_array_value(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'string_array_value' field must be a set or sequence and each value of type 'str'"
        self._string_array_value = value
