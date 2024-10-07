cmake_minimum_required(VERSION 3.27)
project(Code)

set(CMAKE_CXX_STANDARD 17)

add_executable(Code main.cpp
        AnotherVariant.h
        Cars.cpp
        Cars.h
        Engine.cpp
        Engine.h
        Functions.cpp
        Functions.h
        Interface.h
        WrongPassword.h
        WrongType.h
        Sedan.cpp
        Sedan.h
        Van.cpp
        Van.h
        Users.cpp
        Users.h
        IncorrectInputException.h
)
