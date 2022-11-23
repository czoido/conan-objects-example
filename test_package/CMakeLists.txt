
cmake_minimum_required(VERSION 3.15)
project(example)
find_package(myobject REQUIRED)
add_executable(example example.cpp)
target_link_libraries(example myobject::myobject)
