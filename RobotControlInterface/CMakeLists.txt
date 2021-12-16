cmake_minimum_required(VERSION 3.5.0)

project(RobotControlInterface)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_AUTOUIC_SEARCH_PATHS ${CMAKE_SOURCE_DIR}/ui)

file(GLOB ${PROJECT_NAME}_SOURCES "./src/*.cpp")
file(GLOB ${PROJECT_NAME}_HEADERS "./include/*")
file(GLOB ${PROJECT_NAME}_LIB "./lib/*")
file(GLOB ${PROJECT_NAME}_UI "./ui/*.ui")
file(GLOB ${PROJECT_NAME}_QRC "./qrc/*.qrc")

find_package(Qt5 COMPONENTS Core Gui Widgets REQUIRED)
find_package(catkin REQUIRED COMPONENTS roscpp)

include_directories(include ${catkin_INCLUDE_DIRS} /home/wujinshan/MyProject/RosCommunicationLib/include)

add_executable(${PROJECT_NAME}
                ${${PROJECT_NAME}_SOURCES}
                ${${PROJECT_NAME}_HEADERS}
                ${${PROJECT_NAME}_UI}
                ${${PROJECT_NAME}_QRC}
            )

target_link_libraries(${PROJECT_NAME} 
                        ${${PROJECT_NAME}_LIB} 
                        Qt5::Core 
                        Qt5::Gui 
                        Qt5::Widgets
                        ${catkin_LIBRARIES}
                        /home/wujinshan/MyProject/RosCommunicationLib/lib/libRosCommunicationLib.so)