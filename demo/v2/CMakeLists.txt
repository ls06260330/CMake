cmake_minimum_required(VERSION 3.0)

project(CALC)

#add_executable(app main.cpp add.cpp mult.cpp div.cpp sub.cpp)
#              可执行程序名 源文件名
# set (SRC main.cpp add.cpp mult.cpp div.cpp sub.cpp)

# aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC)

file(GLOB SRC ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)
include_directories(${PROJECT_SOURCE_DIR}/include)
# set (EXECUTABLE_OUTPUT_PATH exe)
set (CMAKE_CXX_STANDARD 11)

# add_executable(app ${SRC})
add_library(calc SHARED ${SRC})
# add_library(calc STATIC ${SRC})
set(LIBRARY_OUTPUT_PATH shared)