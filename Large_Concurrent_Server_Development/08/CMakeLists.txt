# cmake 要求的最低版本要求
cmake_minimum_required(VERSION 2.6)

# 指定项目工程名为 pas，并使用 C++ 语言
project(pas CXX)

# 设置编译选项
set(CXX_FLAGS -g -Wall)
set(CMAKE_CXX_COMPILER "g++")
string(REPLACE ";" " " CMAKE_CXX_FLAGS "${CXX_FLAGS}")

# 设置可执行文件的输出目录
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

# 利用后面两个 cpp 文件生成可执行文件 Thread_test
add_executable(Thread_test Thread_test.cpp Thread.cpp)

# 将动态链接库 pthread 链接到可执行文件 Thread_test
target_link_libraries(Thread_test pthread)