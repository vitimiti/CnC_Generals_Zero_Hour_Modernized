cmake_minimum_required(VERSION 3.24)
project(CNC_GENERALS_AND_ZERO_HOUR_MODERNIZED)

list(APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)

include(CommonFunctions)
include(Vendored)

add_subdirectory(${PROJECT_SOURCE_DIR}/Generals)
add_subdirectory(${PROJECT_SOURCE_DIR}/GeneralsMD)
