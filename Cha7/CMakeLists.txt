cmake_minimum_required(VERSION 3.0)

project(CHA7)


#add g++ compiler parameter
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}  -std=c++11  -Wall")

set(CMAKE_BUILD_TYPE Debug)


set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)


# Find all main*.cpp files and store in list mains
file(GLOB_RECURSE mains RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}" "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")
foreach(mainfile IN LISTS mains)
    # Get file name without directory
    get_filename_component(mainname ${mainfile} NAME_WE)
    add_executable(${mainname} ${mainfile})
endforeach()