cmake_minimum_required (VERSION 3.18)
project("cpp_binding_example" VERSION "0.0.1")

set(BUILD_SHARED_LIBS true)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS true)
set(CMAKE_CXX_STANDARD 14)


add_subdirectory(external)
add_subdirectory("cpp_lib")
add_subdirectory("cpp_main")
add_subdirectory("pybind_binding")
