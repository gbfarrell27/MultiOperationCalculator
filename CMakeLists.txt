cmake_minimum_required(VERSION 3.10)

project(Calculator)

add_executable(Calculator "src/main.cpp")

target_include_directories(Calculator PRIVATE "include")
