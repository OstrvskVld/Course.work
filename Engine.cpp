
#include "Engine.h"
#include <iostream>

using namespace std;

Engine::Engine()
        : Engine("",""){}
Engine::Engine(string engineCapacity, string power)
        : engineCapacity(engineCapacity), power(power) {}
Engine::Engine(const Engine &other) {
    engineCapacity = other.engineCapacity;
    power = other.power;
}
Engine Engine::operator=(const Engine &rhs) {
    if(this==&rhs)
        return *this;
    else{
        engineCapacity=rhs.engineCapacity;
        power=rhs.power;
        return *this;
    }
}
ostream &operator<<(ostream &os, const Engine &obj) {
    os << " Engine capacity: " << obj.engineCapacity << " Power: " << obj.power;
    return os;

}