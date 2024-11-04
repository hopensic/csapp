# need download googles test put into Google_tests/lib


project(Google_tests)
add_subdirectory(lib)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

#include_directories(DateConverter_lib)
# add_subdirectory(DateConverter_lib)

# adding the Google_Tests_run target
add_executable(Google_Tests_run AbsoluteDateTest.cpp)
add_executable(Google_Tests_run2 AbsoluteDateTest2.cpp)

# linking Google_Tests_run with DateConverter_lib which will be tested
#target_link_libraries(Google_Tests_run DateConverter_lib)

target_link_libraries(Google_Tests_run2 DateConverter_lib)
target_link_libraries(Google_Tests_run2 gtest gtest_main)
target_link_libraries(Google_Tests_run gtest gtest_main)

