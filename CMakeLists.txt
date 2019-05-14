cmake_minimum_required(VERSION 3.14)
project(CleverCoder)

set(CMAKE_CXX_STANDARD 17)

add_executable(CleverCoder CommandProcessor.cpp main.cpp commands/Command.cpp commands/Command.h commands/EchoCommand.cpp commands/EchoCommand.h CommandFactory.cpp CommandFactory.h)