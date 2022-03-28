add_library("cpp_binding_example_lib")

target_sources("cpp_binding_example_lib"
    PUBLIC
    "include/cpp_binding_example.hpp")

target_sources("cpp_binding_example_lib"
    PRIVATE
    "src/cpp_binding_example.cpp")

target_include_directories("cpp_binding_example_lib"
    PUBLIC 
    "include")

target_link_libraries("cpp_binding_example_lib"
    "GSL")

add_subdirectory(test)
