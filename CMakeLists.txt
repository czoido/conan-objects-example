
cmake_minimum_required(VERSION 3.15)
project(MyObject)
file(GLOB HEADERS *.h)
add_library(myobject OBJECT myobject.cpp)
if( WIN32 )
    set(OBJ_PATH "myobject.dir/Release/myobject${CMAKE_C_OUTPUT_EXTENSION}")
else()
    set(OBJ_PATH "CMakeFiles/myobject.dir/myobject.cpp${CMAKE_C_OUTPUT_EXTENSION}")
endif()
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/${OBJ_PATH}
        DESTINATION ${CMAKE_INSTALL_PREFIX}/lib
        RENAME myobject${CMAKE_C_OUTPUT_EXTENSION})
install(FILES ${HEADERS}
        DESTINATION ${CMAKE_INSTALL_PREFIX}/include)
