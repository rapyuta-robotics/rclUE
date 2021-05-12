# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rcl_interfaces:msg/ParameterDescriptor.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ParameterDescriptor(type):
    """Metaclass of message 'ParameterDescriptor'."""

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
                'rcl_interfaces.msg.ParameterDescriptor')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__parameter_descriptor
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__parameter_descriptor
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__parameter_descriptor
            cls._TYPE_SUPPORT = module.type_support_msg__msg__parameter_descriptor
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__parameter_descriptor

            from rcl_interfaces.msg import FloatingPointRange
            if FloatingPointRange.__class__._TYPE_SUPPORT is None:
                FloatingPointRange.__class__.__import_type_support__()

            from rcl_interfaces.msg import IntegerRange
            if IntegerRange.__class__._TYPE_SUPPORT is None:
                IntegerRange.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'READ_ONLY__DEFAULT': False,
        }

    @property
    def READ_ONLY__DEFAULT(cls):
        """Return default value for message field 'read_only'."""
        return False


class ParameterDescriptor(metaclass=Metaclass_ParameterDescriptor):
    """Message class 'ParameterDescriptor'."""

    __slots__ = [
        '_name',
        '_type',
        '_description',
        '_additional_constraints',
        '_read_only',
        '_floating_point_range',
        '_integer_range',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'type': 'uint8',
        'description': 'string',
        'additional_constraints': 'string',
        'read_only': 'boolean',
        'floating_point_range': 'sequence<rcl_interfaces/FloatingPointRange, 1>',
        'integer_range': 'sequence<rcl_interfaces/IntegerRange, 1>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['rcl_interfaces', 'msg'], 'FloatingPointRange'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['rcl_interfaces', 'msg'], 'IntegerRange'), 1),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.type = kwargs.get('type', int())
        self.description = kwargs.get('description', str())
        self.additional_constraints = kwargs.get('additional_constraints', str())
        self.read_only = kwargs.get(
            'read_only', ParameterDescriptor.READ_ONLY__DEFAULT)
        self.floating_point_range = kwargs.get('floating_point_range', [])
        self.integer_range = kwargs.get('integer_range', [])

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
        if self.name != other.name:
            return False
        if self.type != other.type:
            return False
        if self.description != other.description:
            return False
        if self.additional_constraints != other.additional_constraints:
            return False
        if self.read_only != other.read_only:
            return False
        if self.floating_point_range != other.floating_point_range:
            return False
        if self.integer_range != other.integer_range:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
    def description(self):
        """Message field 'description'."""
        return self._description

    @description.setter
    def description(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'description' field must be of type 'str'"
        self._description = value

    @property
    def additional_constraints(self):
        """Message field 'additional_constraints'."""
        return self._additional_constraints

    @additional_constraints.setter
    def additional_constraints(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'additional_constraints' field must be of type 'str'"
        self._additional_constraints = value

    @property
    def read_only(self):
        """Message field 'read_only'."""
        return self._read_only

    @read_only.setter
    def read_only(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'read_only' field must be of type 'bool'"
        self._read_only = value

    @property
    def floating_point_range(self):
        """Message field 'floating_point_range'."""
        return self._floating_point_range

    @floating_point_range.setter
    def floating_point_range(self, value):
        if __debug__:
            from rcl_interfaces.msg import FloatingPointRange
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
                 len(value) <= 1 and
                 all(isinstance(v, FloatingPointRange) for v in value) and
                 True), \
                "The 'floating_point_range' field must be a set or sequence with length <= 1 and each value of type 'FloatingPointRange'"
        self._floating_point_range = value

    @property
    def integer_range(self):
        """Message field 'integer_range'."""
        return self._integer_range

    @integer_range.setter
    def integer_range(self, value):
        if __debug__:
            from rcl_interfaces.msg import IntegerRange
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
                 len(value) <= 1 and
                 all(isinstance(v, IntegerRange) for v in value) and
                 True), \
                "The 'integer_range' field must be a set or sequence with length <= 1 and each value of type 'IntegerRange'"
        self._integer_range = value
