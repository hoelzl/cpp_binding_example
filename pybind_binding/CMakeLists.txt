pybind11_add_module("_core" "src/core_pybind.cpp")

target_link_libraries("_core" PUBLIC "cpp_lib")

target_compile_definitions("_core" PRIVATE VERSION_INFO=${PROJECT_VERSION})

include(GNUInstallDirs)
install(TARGETS "_core"
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})
