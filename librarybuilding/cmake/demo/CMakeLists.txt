project(demo_abc)
cmake_minimum_required(VERSION 2.6)

include_directories(../include)
#link_directories(../lib)
link_directories(../src)

add_executable(demo_libabc demo_libabc.c)
target_link_libraries(demo_libabc abc)
