// generated from rosidl_generator_c/resource/rosidl_generator_c__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef SERVER_TO_FMS__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_
#define SERVER_TO_FMS__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_GENERATOR_C_EXPORT_server_to_fms __attribute__ ((dllexport))
    #define ROSIDL_GENERATOR_C_IMPORT_server_to_fms __attribute__ ((dllimport))
  #else
    #define ROSIDL_GENERATOR_C_EXPORT_server_to_fms __declspec(dllexport)
    #define ROSIDL_GENERATOR_C_IMPORT_server_to_fms __declspec(dllimport)
  #endif
  #ifdef ROSIDL_GENERATOR_C_BUILDING_DLL_server_to_fms
    #define ROSIDL_GENERATOR_C_PUBLIC_server_to_fms ROSIDL_GENERATOR_C_EXPORT_server_to_fms
  #else
    #define ROSIDL_GENERATOR_C_PUBLIC_server_to_fms ROSIDL_GENERATOR_C_IMPORT_server_to_fms
  #endif
#else
  #define ROSIDL_GENERATOR_C_EXPORT_server_to_fms __attribute__ ((visibility("default")))
  #define ROSIDL_GENERATOR_C_IMPORT_server_to_fms
  #if __GNUC__ >= 4
    #define ROSIDL_GENERATOR_C_PUBLIC_server_to_fms __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_GENERATOR_C_PUBLIC_server_to_fms
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // SERVER_TO_FMS__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_
