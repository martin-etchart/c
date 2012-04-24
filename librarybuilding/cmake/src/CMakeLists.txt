project(demo_abc)
cmake_minimum_required(VERSION 2.6)


#this part of the project generates the library
add_library(abc a b c)

# DOES NOT WORK DONT KNOW WHY
#set(LIB_DIR ../lib/)
#set_target_properties(abc PROPERTIES LIBRARY_OUTPUT_DIRECTORY "${LIB_DIR}")

