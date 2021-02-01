# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rcl_interfaces:msg/ParameterEventDescriptors.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ParameterEventDescriptors(type):
    """Metaclass of message 'ParameterEventDescriptors'."""

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
                'rcl_interfaces.msg.ParameterEventDescriptors')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__parameter_event_descriptors
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__parameter_event_descriptors
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__parameter_event_descriptors
            cls._TYPE_SUPPORT = module.type_support_msg__msg__parameter_event_descriptors
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__parameter_event_descriptors

            from rcl_interfaces.msg import ParameterDescriptor
            if ParameterDescriptor.__class__._TYPE_SUPPORT is None:
                ParameterDescriptor.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ParameterEventDescriptors(metaclass=Metaclass_ParameterEventDescriptors):
    """Message class 'ParameterEventDescriptors'."""

    __slots__ = [
        '_new_parameters',
        '_changed_parameters',
        '_deleted_parameters',
    ]

    _fields_and_field_types = {
        'new_parameters': 'sequence<rcl_interfaces/ParameterDescriptor>',
        'changed_parameters': 'sequence<rcl_interfaces/ParameterDescriptor>',
        'deleted_parameters': 'sequence<rcl_interfaces/ParameterDescriptor>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['rcl_interfaces', 'msg'], 'ParameterDescriptor')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['rcl_interfaces', 'msg'], 'ParameterDescriptor')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['rcl_interfaces', 'msg'], 'ParameterDescriptor')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.new_parameters = kwargs.get('new_parameters', [])
        self.changed_parameters = kwargs.get('changed_parameters', [])
        self.deleted_parameters = kwargs.get('deleted_parameters', [])

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
        if self.new_parameters != other.new_parameters:
            return False
        if self.changed_parameters != other.changed_parameters:
            return False
        if self.deleted_parameters != other.deleted_parameters:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def new_parameters(self):
        """Message field 'new_parameters'."""
        return self._new_parameters

    @new_parameters.setter
    def new_parameters(self, value):
        if __debug__:
            from rcl_interfaces.msg import ParameterDescriptor
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
                 all(isinstance(v, ParameterDescriptor) for v in value) and
                 True), \
                "The 'new_parameters' field must be a set or sequence and each value of type 'ParameterDescriptor'"
        self._new_parameters = value

    @property
    def changed_parameters(self):
        """Message field 'changed_parameters'."""
        return self._changed_parameters

    @changed_parameters.setter
    def changed_parameters(self, value):
        if __debug__:
            from rcl_interfaces.msg import ParameterDescriptor
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
                 all(isinstance(v, ParameterDescriptor) for v in value) and
                 True), \
                "The 'changed_parameters' field must be a set or sequence and each value of type 'ParameterDescriptor'"
        self._changed_parameters = value

    @property
    def deleted_parameters(self):
        """Message field 'deleted_parameters'."""
        return self._deleted_parameters

    @deleted_parameters.setter
    def deleted_parameters(self, value):
        if __debug__:
            from rcl_interfaces.msg import ParameterDescriptor
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
                 all(isinstance(v, ParameterDescriptor) for v in value) and
                 True), \
                "The 'deleted_parameters' field must be a set or sequence and each value of type 'ParameterDescriptor'"
        self._deleted_parameters = value
