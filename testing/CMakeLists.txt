cmake_minimum_required(VERSION 3.10 FATAL_ERROR)
project(testing)
set(CMAKE_CXX_STANDARD 11)

set(CMAKE_PREFIX_PATH "/home/knight/anaconda3/envs/pt/lib/python3.8/site-packages/torch;/home/knight/anaconda3")
set(CMAKE_VERBOSE_MAKEFILE "1")

find_package(Torch REQUIRED)

add_executable(testing example.cpp)
target_link_libraries(testing ${TORCH_LIBRARIES})
