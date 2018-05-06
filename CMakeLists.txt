cmake_minimum_required(VERSION 3.1.0 FATAL_ERROR)
project(testapp)
message("${PROJECT_NAME} module loading...")

set(CMAKE_CXX_STANDARD 14)

include_directories(${PROJECT_SOURCE_DIR}/include)
file(GLOB_RECURSE ALL_CPP_FILES ${PROJECT_SOURCE_DIR}/src/*.cpp)

add_executable(${PROJECT_NAME} ${ALL_CPP_FILES})
message("${PROJECT_NAME} module loaded.")