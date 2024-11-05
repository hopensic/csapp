cmake_minimum_required(VERSION 3.29)
project(csapp C)

set(CMAKE_C_STANDARD 11)


add_executable(show-bytes show-bytes.c)
add_executable(practice practice.c)

add_executable(main2 main2.c common/fun_bytes.c)
add_executable(e02-11 ch02/e02-11.c)
add_executable(e02-12 ch02/e02-12.c)
add_executable(e02-13 ch02/e02-13.c)
add_executable(e02-23 ch02/e02-23.c)
add_executable(e02-25 ch02/e02-25.c)
add_executable(e02-26 ch02/e02-26.c)
add_executable(e02-27 ch02/e02-27.c)
add_executable(e02-30 ch02/e02-30.c)
add_executable(e02-31 ch02/e02-31.c)
add_executable(e02-32 ch02/e02-32.c)
add_executable(csapp2_ch02_p053 ch02/csapp2_ch02_p053.c)

add_subdirectory(Google_tests)
add_subdirectory(DateConverter_lib)
#include_directories(${PROJECT_SOURCE_DIR}/src/include ./googletest/include)
#link_directories(${PROJECT_SOURCE_DIR}/lib ${PROJECT_SOURCE_DIR}/googletest)
#target_link_libraries(${PROJECT_NAME} gtest)

#include_directories("d:/github/csapp/heads") #换成头文件所在目录
include_directories("d:/github/csapp/heads") #换成头文件所在目录
include_directories(DateConverter_lib)



