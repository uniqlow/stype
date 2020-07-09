cmake_minimum_required(VERSION 3.15 FATAL_ERROR)

project("stype" C)
set(CMAKE_C_STANDARD 90)

include_directories(${CMAKE_SOURCE_DIR}/include)

option(STYPE_TEST "Build tests" OFF)

if(STYPE_TEST)
	enable_testing()
	add_subdirectory(test)
endif(STYPE_TEST)
