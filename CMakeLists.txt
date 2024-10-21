cmake_minimum_required(VERSION 3.29)
project(csapp C)

set(CMAKE_C_STANDARD 11)


add_executable(show-bytes show-bytes.c)

add_executable(main2 D:/github/csapp/main2.c
        common/fun_bytes.c)
add_executable(e02-11 D:/github/csapp/ch02/e02-11.c)
add_executable(e02-12 D:/github/csapp/ch02/e02-12.c)
add_executable(e02-13 D:/github/csapp/ch02/e02-13.c)

add_subdirectory(Google_tests)
#include_directories(${PROJECT_SOURCE_DIR}/src/include ./googletest/include)
#link_directories(${PROJECT_SOURCE_DIR}/lib ${PROJECT_SOURCE_DIR}/googletest)
#target_link_libraries(${PROJECT_NAME} gtest)

include_directories("d:/github/csapp/heads") #换成头文件所在目录
