# generated from rosidl_generator_py/resource/_idl.py.em
# with input from server_to_fms:srv/TryOnRequest.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TryOnRequest_Request(type):
    """Metaclass of message 'TryOnRequest_Request'."""

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
            module = import_type_support('server_to_fms')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'server_to_fms.srv.TryOnRequest_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__try_on_request__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__try_on_request__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__try_on_request__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__try_on_request__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__try_on_request__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TryOnRequest_Request(metaclass=Metaclass_TryOnRequest_Request):
    """Message class 'TryOnRequest_Request'."""

    __slots__ = [
        '_customer_id',
        '_shoe_name',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'customer_id': 'string',
        'shoe_name': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.customer_id = kwargs.get('customer_id', str())
        self.shoe_name = kwargs.get('shoe_name', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.customer_id != other.customer_id:
            return False
        if self.shoe_name != other.shoe_name:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def customer_id(self):
        """Message field 'customer_id'."""
        return self._customer_id

    @customer_id.setter
    def customer_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'customer_id' field must be of type 'str'"
        self._customer_id = value

    @builtins.property
    def shoe_name(self):
        """Message field 'shoe_name'."""
        return self._shoe_name

    @shoe_name.setter
    def shoe_name(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'shoe_name' field must be of type 'str'"
        self._shoe_name = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_TryOnRequest_Response(type):
    """Metaclass of message 'TryOnRequest_Response'."""

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
            module = import_type_support('server_to_fms')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'server_to_fms.srv.TryOnRequest_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__try_on_request__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__try_on_request__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__try_on_request__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__try_on_request__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__try_on_request__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TryOnRequest_Response(metaclass=Metaclass_TryOnRequest_Response):
    """Message class 'TryOnRequest_Response'."""

    __slots__ = [
        '_success',
        '_estimated_mins',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'estimated_mins': 'int32',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.estimated_mins = kwargs.get('estimated_mins', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.success != other.success:
            return False
        if self.estimated_mins != other.estimated_mins:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def estimated_mins(self):
        """Message field 'estimated_mins'."""
        return self._estimated_mins

    @estimated_mins.setter
    def estimated_mins(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'estimated_mins' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'estimated_mins' field must be an integer in [-2147483648, 2147483647]"
        self._estimated_mins = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_TryOnRequest_Event(type):
    """Metaclass of message 'TryOnRequest_Event'."""

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
            module = import_type_support('server_to_fms')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'server_to_fms.srv.TryOnRequest_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__try_on_request__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__try_on_request__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__try_on_request__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__try_on_request__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__try_on_request__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TryOnRequest_Event(metaclass=Metaclass_TryOnRequest_Event):
    """Message class 'TryOnRequest_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<server_to_fms/TryOnRequest_Request, 1>',
        'response': 'sequence<server_to_fms/TryOnRequest_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['server_to_fms', 'srv'], 'TryOnRequest_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['server_to_fms', 'srv'], 'TryOnRequest_Response'), 1),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from server_to_fms.srv import TryOnRequest_Request
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
                 all(isinstance(v, TryOnRequest_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'TryOnRequest_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from server_to_fms.srv import TryOnRequest_Response
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
                 all(isinstance(v, TryOnRequest_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'TryOnRequest_Response'"
        self._response = value


class Metaclass_TryOnRequest(type):
    """Metaclass of service 'TryOnRequest'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('server_to_fms')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'server_to_fms.srv.TryOnRequest')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__try_on_request

            from server_to_fms.srv import _try_on_request
            if _try_on_request.Metaclass_TryOnRequest_Request._TYPE_SUPPORT is None:
                _try_on_request.Metaclass_TryOnRequest_Request.__import_type_support__()
            if _try_on_request.Metaclass_TryOnRequest_Response._TYPE_SUPPORT is None:
                _try_on_request.Metaclass_TryOnRequest_Response.__import_type_support__()
            if _try_on_request.Metaclass_TryOnRequest_Event._TYPE_SUPPORT is None:
                _try_on_request.Metaclass_TryOnRequest_Event.__import_type_support__()


class TryOnRequest(metaclass=Metaclass_TryOnRequest):
    from server_to_fms.srv._try_on_request import TryOnRequest_Request as Request
    from server_to_fms.srv._try_on_request import TryOnRequest_Response as Response
    from server_to_fms.srv._try_on_request import TryOnRequest_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
