add_executable ("cpp_binding_example")

target_sources("cpp_binding_example" PRIVATE
    "src/cpp_binding_example_main.cpp")

target_link_libraries("cpp_binding_example"
    "GSL"
    "cpp_binding_example_lib")
