# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rcl_interfaces:msg/FloatingPointRange.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FloatingPointRange(type):
    """Metaclass of message 'FloatingPointRange'."""

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
                'rcl_interfaces.msg.FloatingPointRange')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__floating_point_range
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__floating_point_range
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__floating_point_range
            cls._TYPE_SUPPORT = module.type_support_msg__msg__floating_point_range
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__floating_point_range

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FloatingPointRange(metaclass=Metaclass_FloatingPointRange):
    """Message class 'FloatingPointRange'."""

    __slots__ = [
        '_from_value',
        '_to_value',
        '_step',
    ]

    _fields_and_field_types = {
        'from_value': 'double',
        'to_value': 'double',
        'step': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.from_value = kwargs.get('from_value', float())
        self.to_value = kwargs.get('to_value', float())
        self.step = kwargs.get('step', float())

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
        if self.from_value != other.from_value:
            return False
        if self.to_value != other.to_value:
            return False
        if self.step != other.step:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def from_value(self):
        """Message field 'from_value'."""
        return self._from_value

    @from_value.setter
    def from_value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'from_value' field must be of type 'float'"
        self._from_value = value

    @property
    def to_value(self):
        """Message field 'to_value'."""
        return self._to_value

    @to_value.setter
    def to_value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'to_value' field must be of type 'float'"
        self._to_value = value

    @property
    def step(self):
        """Message field 'step'."""
        return self._step

    @step.setter
    def step(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'step' field must be of type 'float'"
        self._step = value
