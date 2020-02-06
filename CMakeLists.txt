cmake_minimum_required(VERSION 3.8)
project(utilities_lib)

set(CMAKE_CXX_STANDARD 11)

add_library( 
    wlutil STATIC
    utilities.cpp
)

add_executable(
    utilities
    main.cpp
)

target_link_libraries(
    utilities
    wlutil
)