project(demo_abc)
cmake_minimum_required(VERSION 2.6)

set(LIB_DIR ../lib/)
set(LIB_NAME abc)

#this part of the project generates the library
add_library(abc SHARED a b c)
set_target_properties(abc PROPERTIES LIBRARY_OUTPUT_DIRECTORY "${LIB_DIR}")

# cannot move static library in build??
#add_library(abcStatic STATIC a b c)
#set_target_properties(abcStatic PROPERTIES 
#								OUTPUT_NAME ${LIB_NAME}
#								LIBRARY_OUTPUT_DIRECTORY "${LIB_DIR}")
