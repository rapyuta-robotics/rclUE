# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rcl_interfaces:srv/GetParameterTypes.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetParameterTypes_Request(type):
    """Metaclass of message 'GetParameterTypes_Request'."""

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
                'rcl_interfaces.srv.GetParameterTypes_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_parameter_types__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_parameter_types__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_parameter_types__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_parameter_types__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_parameter_types__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetParameterTypes_Request(metaclass=Metaclass_GetParameterTypes_Request):
    """Message class 'GetParameterTypes_Request'."""

    __slots__ = [
        '_names',
    ]

    _fields_and_field_types = {
        'names': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.names = kwargs.get('names', [])

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
        if self.names != other.names:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def names(self):
        """Message field 'names'."""
        return self._names

    @names.setter
    def names(self, value):
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
                "The 'names' field must be a set or sequence and each value of type 'str'"
        self._names = value


# Import statements for member types

# Member 'types'
import array  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_GetParameterTypes_Response(type):
    """Metaclass of message 'GetParameterTypes_Response'."""

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
                'rcl_interfaces.srv.GetParameterTypes_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_parameter_types__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_parameter_types__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_parameter_types__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_parameter_types__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_parameter_types__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetParameterTypes_Response(metaclass=Metaclass_GetParameterTypes_Response):
    """Message class 'GetParameterTypes_Response'."""

    __slots__ = [
        '_types',
    ]

    _fields_and_field_types = {
        'types': 'sequence<uint8>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.types = array.array('B', kwargs.get('types', []))

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
        if self.types != other.types:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def types(self):
        """Message field 'types'."""
        return self._types

    @types.setter
    def types(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'types' array.array() must have the type code of 'B'"
            self._types = value
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
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'types' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._types = array.array('B', value)


class Metaclass_GetParameterTypes(type):
    """Metaclass of service 'GetParameterTypes'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rcl_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rcl_interfaces.srv.GetParameterTypes')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_parameter_types

            from rcl_interfaces.srv import _get_parameter_types
            if _get_parameter_types.Metaclass_GetParameterTypes_Request._TYPE_SUPPORT is None:
                _get_parameter_types.Metaclass_GetParameterTypes_Request.__import_type_support__()
            if _get_parameter_types.Metaclass_GetParameterTypes_Response._TYPE_SUPPORT is None:
                _get_parameter_types.Metaclass_GetParameterTypes_Response.__import_type_support__()


class GetParameterTypes(metaclass=Metaclass_GetParameterTypes):
    from rcl_interfaces.srv._get_parameter_types import GetParameterTypes_Request as Request
    from rcl_interfaces.srv._get_parameter_types import GetParameterTypes_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
