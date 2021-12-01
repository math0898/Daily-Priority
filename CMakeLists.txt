cmake_minimum_required(VERSION 3.0.0)
project(DailyPriority)

include_directories(commandInterfaces dataStructures)

file(GLOB SOURCES "commandInterfaces/*.cpp")
file(GLOB SOURCES "dataStructures/*.cpp")

add_executable(dailyPriority main.cpp)