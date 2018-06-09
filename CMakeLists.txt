if(${CMAKE_SOURCE_DIR} STREQUAL ${CMAKE_BINARY_DIR})
  message(FATAL_ERROR "Attempted an in-tree build...
    Create a build directory and call cmake from there")
endif()

cmake_minimum_required(VERSION 3.8.0)

project(slowmath
  VERSION 0.0.1
  DESCRIPTION "very slow implementations of math functions for my learning")

enable_testing()
add_subdirectory(test/vendor/googletest/googletest
  EXCLUDE_FROM_ALL)


###############################################################################
# library
###############################################################################

add_library(slowmath STATIC
  lib/slowmath/slowmath.cc)

target_include_directories(slowmath PRIVATE
  lib)


###############################################################################
# test driver
###############################################################################

add_executable(simple_tests
  test/simple_tests.cc)

target_include_directories(simple_tests PRIVATE
  test/vendor/googletest/googletest/include
  lib)

target_link_libraries(simple_tests PRIVATE
  gtest
  slowmath)


###############################################################################
# tests
###############################################################################

add_test(NAME simple_tests
  COMMAND simple_tests)

