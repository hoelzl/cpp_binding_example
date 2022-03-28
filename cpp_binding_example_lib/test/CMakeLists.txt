add_executable("cpp_binding_example_test")

target_sources("cpp_binding_example_test" PRIVATE
    "cpp_binding_example_test.cpp"
)

target_link_libraries("cpp_binding_example_test"
    "Catch2WithMain"
    "cpp_binding_example_lib"
)