
#include "Engine.h"
#include <iostream>

using namespace std;

Engine::Engine()
        : Engine("","",""){}
Engine::Engine(string engineCapacity, string power,string engineType)
        : engineCapacity(engineCapacity), power(power), engineType(engineType) {}
Engine::Engine(const Engine &other) {
    engineCapacity = other.engineCapacity;
    power = other.power;
    engineType = other.engineType;
}
Engine Engine::operator=(const Engine &rhs) {
    if(this==&rhs)
        return *this;
    else{
        engineCapacity=rhs.engineCapacity;
        power=rhs.power;
        engineType=rhs.engineType;
        return *this;
    }
}
ostream &operator<<(ostream &os, const Engine &obj) {
    os << " Engine capacity: " << obj.engineCapacity << " Power: " << obj.power << " Engine type: " << obj.engineType;
    return os;

}