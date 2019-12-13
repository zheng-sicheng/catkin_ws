// Generated by gencpp from file amg_p1/LA_Message.msg
// DO NOT EDIT!


#ifndef AMG_P1_MESSAGE_LA_MESSAGE_H
#define AMG_P1_MESSAGE_LA_MESSAGE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace amg_p1
{
template <class ContainerAllocator>
struct LA_Message_
{
  typedef LA_Message_<ContainerAllocator> Type;

  LA_Message_()
    : stamp()
    , deg_total_target()
    , deg_total_now()  {
    }
  LA_Message_(const ContainerAllocator& _alloc)
    : stamp()
    , deg_total_target(_alloc)
    , deg_total_now(_alloc)  {
  (void)_alloc;
    }



   typedef ros::Time _stamp_type;
  _stamp_type stamp;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _deg_total_target_type;
  _deg_total_target_type deg_total_target;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _deg_total_now_type;
  _deg_total_now_type deg_total_now;





  typedef boost::shared_ptr< ::amg_p1::LA_Message_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::amg_p1::LA_Message_<ContainerAllocator> const> ConstPtr;

}; // struct LA_Message_

typedef ::amg_p1::LA_Message_<std::allocator<void> > LA_Message;

typedef boost::shared_ptr< ::amg_p1::LA_Message > LA_MessagePtr;
typedef boost::shared_ptr< ::amg_p1::LA_Message const> LA_MessageConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::amg_p1::LA_Message_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::amg_p1::LA_Message_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace amg_p1

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'amg_p1': ['/home/nvidia/workspace/catkin_ws/src/amg_p1/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::amg_p1::LA_Message_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::amg_p1::LA_Message_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::amg_p1::LA_Message_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::amg_p1::LA_Message_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::amg_p1::LA_Message_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::amg_p1::LA_Message_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::amg_p1::LA_Message_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7905fa336d4f2fe4db8c49c8192c0986";
  }

  static const char* value(const ::amg_p1::LA_Message_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7905fa336d4f2fe4ULL;
  static const uint64_t static_value2 = 0xdb8c49c8192c0986ULL;
};

template<class ContainerAllocator>
struct DataType< ::amg_p1::LA_Message_<ContainerAllocator> >
{
  static const char* value()
  {
    return "amg_p1/LA_Message";
  }

  static const char* value(const ::amg_p1::LA_Message_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::amg_p1::LA_Message_<ContainerAllocator> >
{
  static const char* value()
  {
    return "time stamp\n\
\n\
float64[] deg_total_target\n\
float64[] deg_total_now\n\
";
  }

  static const char* value(const ::amg_p1::LA_Message_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::amg_p1::LA_Message_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.stamp);
      stream.next(m.deg_total_target);
      stream.next(m.deg_total_now);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LA_Message_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::amg_p1::LA_Message_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::amg_p1::LA_Message_<ContainerAllocator>& v)
  {
    s << indent << "stamp: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.stamp);
    s << indent << "deg_total_target[]" << std::endl;
    for (size_t i = 0; i < v.deg_total_target.size(); ++i)
    {
      s << indent << "  deg_total_target[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.deg_total_target[i]);
    }
    s << indent << "deg_total_now[]" << std::endl;
    for (size_t i = 0; i < v.deg_total_now.size(); ++i)
    {
      s << indent << "  deg_total_now[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.deg_total_now[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // AMG_P1_MESSAGE_LA_MESSAGE_H
