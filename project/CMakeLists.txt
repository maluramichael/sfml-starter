CMAKE_MINIMUM_REQUIRED(VERSION 3.4)
SET(PROJECT_NAME sfml-starter)
PROJECT(${PROJECT_NAME})

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
SET(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
SET(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

SET(SOURCE_FILES
        main.cpp)

INCLUDE_DIRECTORIES(${CMAKE_SOURCE_DIR}/lib)

ADD_EXECUTABLE(${PROJECT_NAME} ${SOURCE_FILES})
TARGET_LINK_LIBRARIES(${PROJECT_NAME} sfml-system sfml-window sfml-graphics tinyxml2)