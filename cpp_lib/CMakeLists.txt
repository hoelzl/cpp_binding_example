add_library("cpp_lib")
set_target_properties("cpp_lib" PROPERTIES VERSION ${PROJECT_VERSION})
set_target_properties("cpp_lib" PROPERTIES PUBLIC_HEADER "include/cpp_lib.hpp")

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

include(GNUInstallDirs)
install(TARGETS "cpp_lib"
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})

add_subdirectory(test)
