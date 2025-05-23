// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from visualization_msgs:msg/Marker.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "visualization_msgs/msg/marker.hpp"


#ifndef VISUALIZATION_MSGS__MSG__DETAIL__MARKER__STRUCT_HPP_
#define VISUALIZATION_MSGS__MSG__DETAIL__MARKER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'scale'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'color'
// Member 'colors'
#include "std_msgs/msg/detail/color_rgba__struct.hpp"
// Member 'lifetime'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"
// Member 'points'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'texture'
#include "sensor_msgs/msg/detail/compressed_image__struct.hpp"
// Member 'uv_coordinates'
#include "visualization_msgs/msg/detail/uv_coordinate__struct.hpp"
// Member 'mesh_file'
#include "visualization_msgs/msg/detail/mesh_file__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__visualization_msgs__msg__Marker __attribute__((deprecated))
#else
# define DEPRECATED__visualization_msgs__msg__Marker __declspec(deprecated)
#endif

namespace visualization_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Marker_
{
  using Type = Marker_<ContainerAllocator>;

  explicit Marker_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    pose(_init),
    scale(_init),
    color(_init),
    lifetime(_init),
    texture(_init),
    mesh_file(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ns = "";
      this->id = 0l;
      this->type = 0l;
      this->action = 0l;
      this->frame_locked = false;
      this->texture_resource = "";
      this->text = "";
      this->mesh_resource = "";
      this->mesh_use_embedded_materials = false;
    }
  }

  explicit Marker_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    ns(_alloc),
    pose(_alloc, _init),
    scale(_alloc, _init),
    color(_alloc, _init),
    lifetime(_alloc, _init),
    texture_resource(_alloc),
    texture(_alloc, _init),
    text(_alloc),
    mesh_resource(_alloc),
    mesh_file(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ns = "";
      this->id = 0l;
      this->type = 0l;
      this->action = 0l;
      this->frame_locked = false;
      this->texture_resource = "";
      this->text = "";
      this->mesh_resource = "";
      this->mesh_use_embedded_materials = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _ns_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ns_type ns;
  using _id_type =
    int32_t;
  _id_type id;
  using _type_type =
    int32_t;
  _type_type type;
  using _action_type =
    int32_t;
  _action_type action;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _scale_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _scale_type scale;
  using _color_type =
    std_msgs::msg::ColorRGBA_<ContainerAllocator>;
  _color_type color;
  using _lifetime_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _lifetime_type lifetime;
  using _frame_locked_type =
    bool;
  _frame_locked_type frame_locked;
  using _points_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _points_type points;
  using _colors_type =
    std::vector<std_msgs::msg::ColorRGBA_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std_msgs::msg::ColorRGBA_<ContainerAllocator>>>;
  _colors_type colors;
  using _texture_resource_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _texture_resource_type texture_resource;
  using _texture_type =
    sensor_msgs::msg::CompressedImage_<ContainerAllocator>;
  _texture_type texture;
  using _uv_coordinates_type =
    std::vector<visualization_msgs::msg::UVCoordinate_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<visualization_msgs::msg::UVCoordinate_<ContainerAllocator>>>;
  _uv_coordinates_type uv_coordinates;
  using _text_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _text_type text;
  using _mesh_resource_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mesh_resource_type mesh_resource;
  using _mesh_file_type =
    visualization_msgs::msg::MeshFile_<ContainerAllocator>;
  _mesh_file_type mesh_file;
  using _mesh_use_embedded_materials_type =
    bool;
  _mesh_use_embedded_materials_type mesh_use_embedded_materials;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__ns(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ns = _arg;
    return *this;
  }
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__type(
    const int32_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__action(
    const int32_t & _arg)
  {
    this->action = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__scale(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->scale = _arg;
    return *this;
  }
  Type & set__color(
    const std_msgs::msg::ColorRGBA_<ContainerAllocator> & _arg)
  {
    this->color = _arg;
    return *this;
  }
  Type & set__lifetime(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->lifetime = _arg;
    return *this;
  }
  Type & set__frame_locked(
    const bool & _arg)
  {
    this->frame_locked = _arg;
    return *this;
  }
  Type & set__points(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->points = _arg;
    return *this;
  }
  Type & set__colors(
    const std::vector<std_msgs::msg::ColorRGBA_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std_msgs::msg::ColorRGBA_<ContainerAllocator>>> & _arg)
  {
    this->colors = _arg;
    return *this;
  }
  Type & set__texture_resource(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->texture_resource = _arg;
    return *this;
  }
  Type & set__texture(
    const sensor_msgs::msg::CompressedImage_<ContainerAllocator> & _arg)
  {
    this->texture = _arg;
    return *this;
  }
  Type & set__uv_coordinates(
    const std::vector<visualization_msgs::msg::UVCoordinate_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<visualization_msgs::msg::UVCoordinate_<ContainerAllocator>>> & _arg)
  {
    this->uv_coordinates = _arg;
    return *this;
  }
  Type & set__text(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->text = _arg;
    return *this;
  }
  Type & set__mesh_resource(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mesh_resource = _arg;
    return *this;
  }
  Type & set__mesh_file(
    const visualization_msgs::msg::MeshFile_<ContainerAllocator> & _arg)
  {
    this->mesh_file = _arg;
    return *this;
  }
  Type & set__mesh_use_embedded_materials(
    const bool & _arg)
  {
    this->mesh_use_embedded_materials = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t ARROW =
    0;
  static constexpr int32_t CUBE =
    1;
  static constexpr int32_t SPHERE =
    2;
  static constexpr int32_t CYLINDER =
    3;
  static constexpr int32_t LINE_STRIP =
    4;
  static constexpr int32_t LINE_LIST =
    5;
  static constexpr int32_t CUBE_LIST =
    6;
  static constexpr int32_t SPHERE_LIST =
    7;
  static constexpr int32_t POINTS =
    8;
  static constexpr int32_t TEXT_VIEW_FACING =
    9;
  static constexpr int32_t MESH_RESOURCE =
    10;
  static constexpr int32_t TRIANGLE_LIST =
    11;
  static constexpr int32_t ARROW_STRIP =
    12;
  static constexpr int32_t ADD =
    0;
  static constexpr int32_t MODIFY =
    0;
  // guard against 'DELETE' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(DELETE)
#    pragma push_macro("DELETE")
#    undef DELETE
#  endif
#endif
  static constexpr int32_t DELETE =
    2;
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("DELETE")
#endif
  static constexpr int32_t DELETEALL =
    3;

  // pointer types
  using RawPtr =
    visualization_msgs::msg::Marker_<ContainerAllocator> *;
  using ConstRawPtr =
    const visualization_msgs::msg::Marker_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<visualization_msgs::msg::Marker_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<visualization_msgs::msg::Marker_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      visualization_msgs::msg::Marker_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<visualization_msgs::msg::Marker_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      visualization_msgs::msg::Marker_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<visualization_msgs::msg::Marker_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<visualization_msgs::msg::Marker_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<visualization_msgs::msg::Marker_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__visualization_msgs__msg__Marker
    std::shared_ptr<visualization_msgs::msg::Marker_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__visualization_msgs__msg__Marker
    std::shared_ptr<visualization_msgs::msg::Marker_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Marker_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->ns != other.ns) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->action != other.action) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->scale != other.scale) {
      return false;
    }
    if (this->color != other.color) {
      return false;
    }
    if (this->lifetime != other.lifetime) {
      return false;
    }
    if (this->frame_locked != other.frame_locked) {
      return false;
    }
    if (this->points != other.points) {
      return false;
    }
    if (this->colors != other.colors) {
      return false;
    }
    if (this->texture_resource != other.texture_resource) {
      return false;
    }
    if (this->texture != other.texture) {
      return false;
    }
    if (this->uv_coordinates != other.uv_coordinates) {
      return false;
    }
    if (this->text != other.text) {
      return false;
    }
    if (this->mesh_resource != other.mesh_resource) {
      return false;
    }
    if (this->mesh_file != other.mesh_file) {
      return false;
    }
    if (this->mesh_use_embedded_materials != other.mesh_use_embedded_materials) {
      return false;
    }
    return true;
  }
  bool operator!=(const Marker_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Marker_

// alias to use template instance with default allocator
using Marker =
  visualization_msgs::msg::Marker_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t Marker_<ContainerAllocator>::ARROW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t Marker_<ContainerAllocator>::CUBE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t Marker_<ContainerAllocator>::SPHERE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t Marker_<ContainerAllocator>::CYLINDER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t Marker_<ContainerAllocator>::LINE_STRIP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t Marker_<ContainerAllocator>::LINE_LIST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t Marker_<ContainerAllocator>::CUBE_LIST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t Marker_<ContainerAllocator>::SPHERE_LIST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t Marker_<ContainerAllocator>::POINTS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t Marker_<ContainerAllocator>::TEXT_VIEW_FACING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t Marker_<ContainerAllocator>::MESH_RESOURCE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t Marker_<ContainerAllocator>::TRIANGLE_LIST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t Marker_<ContainerAllocator>::ARROW_STRIP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t Marker_<ContainerAllocator>::ADD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t Marker_<ContainerAllocator>::MODIFY;
#endif  // __cplusplus < 201703L
// guard against 'DELETE' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(DELETE)
#    pragma push_macro("DELETE")
#    undef DELETE
#  endif
#endif
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t Marker_<ContainerAllocator>::DELETE;
#endif  // __cplusplus < 201703L
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("DELETE")
#endif
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t Marker_<ContainerAllocator>::DELETEALL;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace visualization_msgs

#endif  // VISUALIZATION_MSGS__MSG__DETAIL__MARKER__STRUCT_HPP_
