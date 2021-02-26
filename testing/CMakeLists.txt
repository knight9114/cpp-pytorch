cmake_minimum_required(VERSION 3.10 FATAL_ERROR)
project(testing)
set(CMAKE_CXX_STANDARD 11)

find_package(Torch REQUIRED)

add_executable(testing example.cpp)
target_link_libraries(testing ${TORCH_LIBRARIES})
