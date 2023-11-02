cmake_minimum_required(VERSION 3.26)
project(mirror_api)

set(CMAKE_CXX_STANDARD 17)

add_executable(${PROJECT_NAME} src/main.cpp)

add_subdirectory(mirror-logging)
target_link_libraries(${PROJECT_NAME} PUBLIC mirror_logging)
