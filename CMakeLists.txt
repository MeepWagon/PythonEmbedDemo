cmake_minimum_required(VERSION 3.24)
project(PythonEmbedDemo VERSION 1.0)

find_package(PythonLibs REQUIRED)
include_directories(${PYTHON_INCLUDE_DIRS})

add_executable(${PROJECT_NAME} src/main.cpp)
target_link_libraries(${PROJECT_NAME} ${PYTHON_LIBRARIES})