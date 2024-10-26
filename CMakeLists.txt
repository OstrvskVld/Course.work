cmake_minimum_required(VERSION 3.27)
project(Code)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXE_LINKER_FLAGS "-static -static-libgcc")
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static-libstdc++ -static-libgcc")

add_executable(Code main.cpp
        AnotherVariant.h
        Car.cpp
        Car.h
        Engine.cpp
        Engine.h
        Function.cpp
        Function.h
        Interface.h
        Sedan.cpp
        Sedan.h
        Van.cpp
        Van.h
        User.cpp
        User.h
        IncorrectInputException.h
        CancelException.h
)
