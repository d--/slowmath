if(${CMAKE_SOURCE_DIR} STREQUAL ${CMAKE_BINARY_DIR})
  message(FATAL_ERROR "Attempted an in-tree build...
    Create a build directory and call cmake from there")
endif()

cmake_minimum_required(VERSION 3.8.0)

project(slowmath
  VERSION 0.0.1
  DESCRIPTION "very slow implementations of math functions for my learning")

enable_testing()

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

add_executable(simple
  test/simple.cc)

target_include_directories(simple PRIVATE
  lib)

target_link_libraries(simple PRIVATE
  slowmath)

###############################################################################
# tests
###############################################################################

add_test(
  NAME simple
  COMMAND simple 
)

