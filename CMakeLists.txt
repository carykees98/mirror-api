cmake_minimum_required(VERSION 3.26)
project(mirror_api)

set(CMAKE_CXX_STANDARD 17)

add_executable(mirror_api main.cpp)
add_subdirectory(mirror-logging)
target_link_libraries(mirror_api mirror_logging)
target_include_directories(mirror_api PUBLIC ${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/mirror-logging)
