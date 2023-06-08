cmake_minimum_required(VERSION 2.6)

project(pas CXX)

set(CXX_FLAGS -g -Wall)
set(CMAKE_CXX_COMPILER "g++")
string(REPLACE ";" " " CMAKE_CXX_FLAGS "${CXX_FLAGS}")

# 可执行文件放在 bin 目录
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

# cmakelists 适合大型项目的编译
add_executable(4_1_echosrv_poll 4_1_echosrv_poll.cpp)
add_executable(4_1_echocli 4_1_echocli.cpp)