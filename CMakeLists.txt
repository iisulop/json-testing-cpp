cmake_minimum_required(VERSION 3.10)
project(json_test)

find_package(nlohmann_json REQUIRED)

add_executable(${PROJECT_NAME} src/main.cc)
target_link_libraries(${PROJECT_NAME} nlohmann_json::nlohmann_json)
