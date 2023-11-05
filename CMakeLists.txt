cmake_minimum_required(VERSION 3.26)
project(mirror_api)

set(CMAKE_CXX_STANDARD 17)

add_executable(${PROJECT_NAME} src/main.cpp)

include(FetchContent)
FetchContent_Declare(json URL https://github.com/nlohmann/json/releases/download/v3.11.2/json.tar.xz)
FetchContent_MakeAvailable(json)

add_subdirectory(mirror-logging)
target_link_libraries(${PROJECT_NAME}
        PUBLIC mirror_logging
        PRIVATE nlohmann_json::nlohmann_json
    )
