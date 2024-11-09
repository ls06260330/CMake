cmake_minimum_required(VERSION 3.0)

project(CALC)

#add_executable(app main.cpp add.cpp mult.cpp div.cpp sub.cpp)
#              可执行程序名 源文件名
# set (SRC main.cpp add.cpp mult.cpp div.cpp sub.cpp)

# aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC)

file(GLOB SRC ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
include_directories(${PROJECT_SOURCE_DIR}/include)

set (EXECUTABLE_OUTPUT_PATH exe)
set (CMAKE_CXX_STANDARD 11)
# add_executable(app ${SRC})
# add_library(calc SHARED ${SRC})
# add_library(calc STATIC ${SRC})
# set(LIBRARY_OUTPUT_PATH shared)

link_libraries(calc) # 链接指定的库
link_directories(${CMAKE_CURRENT_SOURCE_DIR}/lib) # 指明库文件的路径
add_executable(app ${SRC})
# 如果使用的是静态库，最终生成可执行程序app的时候，静态库和对应的源文件都会打包到对应的可执行程序中
# 如果使用的是动态库，动态库里的数据并不会被打包到对应可执行程序，而是在程序执行时调用到才会动态加载
