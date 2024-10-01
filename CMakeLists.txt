cmake_minimum_required(VERSION 3.13)

set(target "rp2x_serial_lib")

project(${target} C)
add_library(${target} INTERFACE)
target_sources(${target} INTERFACE src/rp2x_serial.c)
target_include_directories(${target} INTERFACE src)
