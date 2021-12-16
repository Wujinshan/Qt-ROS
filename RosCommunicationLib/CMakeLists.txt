cmake_minimum_required(VERSION 3.5.0)

project(RosCommunicationLib)

set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

find_package(catkin REQUIRED COMPONENTS
    roscpp
)

file(GLOB ${PROJECT_NAME}_SOURCES "./src/*.cpp")
file(GLOB ${PROJECT_NAME}_HEADERS "./include/*.h")

include_directories(include ${catkin_INCLUDE_DIRS})

add_library(${PROJECT_NAME} SHARED ${${PROJECT_NAME}_SOURCES})

add_executable(test_RosCommunication ${${PROJECT_NAME}_SOURCES})

target_link_libraries(test_RosCommunication ${catkin_LIBRARIES})