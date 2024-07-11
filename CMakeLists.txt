cmake_minimum_required(VERSION 3.27)
project(Code)

set(CMAKE_CXX_STANDARD 17)

add_executable(Code main.cpp
        AnotherVariant.h
        Bike.cpp
        Bike.h
        Drivers.cpp
        Drivers.h
        Cars.cpp
        Cars.h
        Engine.cpp
        Engine.h
        Functions.cpp
        Functions.h
        Interface.h
        People.cpp
        People.h
        Vehicle.cpp
        Vehicle.h
        WrongPassword.h
        WrongType.h
        Sedan.cpp
        Sedan.h)
