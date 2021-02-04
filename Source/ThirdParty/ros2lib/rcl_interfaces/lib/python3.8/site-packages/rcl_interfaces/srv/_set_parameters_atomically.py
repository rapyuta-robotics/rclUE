# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rcl_interfaces:srv/SetParametersAtomically.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetParametersAtomically_Request(type):
    """Metaclass of message 'SetParametersAtomically_Request'."""

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
                'rcl_interfaces.srv.SetParametersAtomically_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_parameters_atomically__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_parameters_atomically__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_parameters_atomically__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_parameters_atomically__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_parameters_atomically__request

            from rcl_interfaces.msg import Parameter
            if Parameter.__class__._TYPE_SUPPORT is None:
                Parameter.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetParametersAtomically_Request(metaclass=Metaclass_SetParametersAtomically_Request):
    """Message class 'SetParametersAtomically_Request'."""

    __slots__ = [
        '_parameters',
    ]

    _fields_and_field_types = {
        'parameters': 'sequence<rcl_interfaces/Parameter>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['rcl_interfaces', 'msg'], 'Parameter')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.parameters = kwargs.get('parameters', [])

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
        if self.parameters != other.parameters:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def parameters(self):
        """Message field 'parameters'."""
        return self._parameters

    @parameters.setter
    def parameters(self, value):
        if __debug__:
            from rcl_interfaces.msg import Parameter
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
                 all(isinstance(v, Parameter) for v in value) and
                 True), \
                "The 'parameters' field must be a set or sequence and each value of type 'Parameter'"
        self._parameters = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_SetParametersAtomically_Response(type):
    """Metaclass of message 'SetParametersAtomically_Response'."""

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
                'rcl_interfaces.srv.SetParametersAtomically_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_parameters_atomically__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_parameters_atomically__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_parameters_atomically__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_parameters_atomically__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_parameters_atomically__response

            from rcl_interfaces.msg import SetParametersResult
            if SetParametersResult.__class__._TYPE_SUPPORT is None:
                SetParametersResult.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetParametersAtomically_Response(metaclass=Metaclass_SetParametersAtomically_Response):
    """Message class 'SetParametersAtomically_Response'."""

    __slots__ = [
        '_result',
    ]

    _fields_and_field_types = {
        'result': 'rcl_interfaces/SetParametersResult',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['rcl_interfaces', 'msg'], 'SetParametersResult'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from rcl_interfaces.msg import SetParametersResult
        self.result = kwargs.get('result', SetParametersResult())

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
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from rcl_interfaces.msg import SetParametersResult
            assert \
                isinstance(value, SetParametersResult), \
                "The 'result' field must be a sub message of type 'SetParametersResult'"
        self._result = value


class Metaclass_SetParametersAtomically(type):
    """Metaclass of service 'SetParametersAtomically'."""

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
                'rcl_interfaces.srv.SetParametersAtomically')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_parameters_atomically

            from rcl_interfaces.srv import _set_parameters_atomically
            if _set_parameters_atomically.Metaclass_SetParametersAtomically_Request._TYPE_SUPPORT is None:
                _set_parameters_atomically.Metaclass_SetParametersAtomically_Request.__import_type_support__()
            if _set_parameters_atomically.Metaclass_SetParametersAtomically_Response._TYPE_SUPPORT is None:
                _set_parameters_atomically.Metaclass_SetParametersAtomically_Response.__import_type_support__()


class SetParametersAtomically(metaclass=Metaclass_SetParametersAtomically):
    from rcl_interfaces.srv._set_parameters_atomically import SetParametersAtomically_Request as Request
    from rcl_interfaces.srv._set_parameters_atomically import SetParametersAtomically_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
