
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
    os << "Engine capacity: " << obj.engineCapacity << "/L" <<"\n" << "Power:"
       << obj.power << "/HP" << "\n" << "Engine type(patrol,diesel,gas): " << obj.engineType << endl;
    return os;
}

string Engine::getCapacity() const {
    return engineCapacity;
}
string Engine::getPower() const {
    return power;
}
string Engine::getType() const {
    return engineType;
}


void Engine::setCapacity(const string& newCapacity) {
    engineCapacity = newCapacity;
}
void Engine::setType(const string &newType) {
    engineType = newType;
}
void Engine::setPower(const string &newPower) {
    power = newPower;
}