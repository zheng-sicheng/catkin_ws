// Generated by gencpp from file vesc_msgs/VescSetCustomApp.msg
// DO NOT EDIT!


#ifndef VESC_MSGS_MESSAGE_VESCSETCUSTOMAPP_H
#define VESC_MSGS_MESSAGE_VESCSETCUSTOMAPP_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace vesc_msgs
{
template <class ContainerAllocator>
struct VescSetCustomApp_
{
  typedef VescSetCustomApp_<ContainerAllocator> Type;

  VescSetCustomApp_()
    : num_of_id(0)
    , id_set()
    , comm_set()
    , can_forward_set()
    , value_set()
    , data_bytes(0)  {
    }
  VescSetCustomApp_(const ContainerAllocator& _alloc)
    : num_of_id(0)
    , id_set(_alloc)
    , comm_set(_alloc)
    , can_forward_set(_alloc)
    , value_set(_alloc)
    , data_bytes(0)  {
  (void)_alloc;
    }



   typedef int32_t _num_of_id_type;
  _num_of_id_type num_of_id;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _id_set_type;
  _id_set_type id_set;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _comm_set_type;
  _comm_set_type comm_set;

   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _can_forward_set_type;
  _can_forward_set_type can_forward_set;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _value_set_type;
  _value_set_type value_set;

   typedef int32_t _data_bytes_type;
  _data_bytes_type data_bytes;





  typedef boost::shared_ptr< ::vesc_msgs::VescSetCustomApp_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vesc_msgs::VescSetCustomApp_<ContainerAllocator> const> ConstPtr;

}; // struct VescSetCustomApp_

typedef ::vesc_msgs::VescSetCustomApp_<std::allocator<void> > VescSetCustomApp;

typedef boost::shared_ptr< ::vesc_msgs::VescSetCustomApp > VescSetCustomAppPtr;
typedef boost::shared_ptr< ::vesc_msgs::VescSetCustomApp const> VescSetCustomAppConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vesc_msgs::VescSetCustomApp_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vesc_msgs::VescSetCustomApp_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace vesc_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'vesc_msgs': ['/home/nvidia/workspace/catkin_ws/src/vesc/vesc_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::vesc_msgs::VescSetCustomApp_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vesc_msgs::VescSetCustomApp_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vesc_msgs::VescSetCustomApp_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vesc_msgs::VescSetCustomApp_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vesc_msgs::VescSetCustomApp_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vesc_msgs::VescSetCustomApp_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vesc_msgs::VescSetCustomApp_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c46f4ff65abd5670780793173869e6b9";
  }

  static const char* value(const ::vesc_msgs::VescSetCustomApp_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc46f4ff65abd5670ULL;
  static const uint64_t static_value2 = 0x780793173869e6b9ULL;
};

template<class ContainerAllocator>
struct DataType< ::vesc_msgs::VescSetCustomApp_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vesc_msgs/VescSetCustomApp";
  }

  static const char* value(const ::vesc_msgs::VescSetCustomApp_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vesc_msgs::VescSetCustomApp_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# VESCuino CDI CUSTOM_APP TX Messages\n\
\n\
int32       num_of_id\n\
int32[]     id_set\n\
int32[]     comm_set\n\
bool[]      can_forward_set\n\
float64[]   value_set\n\
int32       data_bytes\n\
";
  }

  static const char* value(const ::vesc_msgs::VescSetCustomApp_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vesc_msgs::VescSetCustomApp_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.num_of_id);
      stream.next(m.id_set);
      stream.next(m.comm_set);
      stream.next(m.can_forward_set);
      stream.next(m.value_set);
      stream.next(m.data_bytes);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct VescSetCustomApp_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vesc_msgs::VescSetCustomApp_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vesc_msgs::VescSetCustomApp_<ContainerAllocator>& v)
  {
    s << indent << "num_of_id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.num_of_id);
    s << indent << "id_set[]" << std::endl;
    for (size_t i = 0; i < v.id_set.size(); ++i)
    {
      s << indent << "  id_set[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.id_set[i]);
    }
    s << indent << "comm_set[]" << std::endl;
    for (size_t i = 0; i < v.comm_set.size(); ++i)
    {
      s << indent << "  comm_set[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.comm_set[i]);
    }
    s << indent << "can_forward_set[]" << std::endl;
    for (size_t i = 0; i < v.can_forward_set.size(); ++i)
    {
      s << indent << "  can_forward_set[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.can_forward_set[i]);
    }
    s << indent << "value_set[]" << std::endl;
    for (size_t i = 0; i < v.value_set.size(); ++i)
    {
      s << indent << "  value_set[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.value_set[i]);
    }
    s << indent << "data_bytes: ";
    Printer<int32_t>::stream(s, indent + "  ", v.data_bytes);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VESC_MSGS_MESSAGE_VESCSETCUSTOMAPP_H
