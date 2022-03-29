add_library("cpp_lib")

target_sources("cpp_lib"
    PUBLIC
    "include/cpp_lib.hpp")

target_sources("cpp_lib"
    PRIVATE
    "src/cpp_lib.cpp")

target_include_directories("cpp_lib"
    PUBLIC 
    "include")

target_link_libraries("cpp_lib"
    "GSL")

add_subdirectory(test)
