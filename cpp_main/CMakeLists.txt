add_executable (cpp_main)

target_sources(cpp_main PRIVATE
    "src/main.cpp")

# target_link_directories(cpp_main PUBLIC ${PROJECT_BINARY_DIR})

target_link_libraries(cpp_main 
    "GSL"
    "cpp_lib")

include(GNUInstallDirs)
install(TARGETS "cpp_main"
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})
