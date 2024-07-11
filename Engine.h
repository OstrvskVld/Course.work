

#ifndef CODE_ENGINE_H
#define CODE_ENGINE_H


#include <iostream>
#include "Cars.h"

using namespace std;

class Engine {
protected:
    string engineCapacity,power;
public:
    Engine();
    Engine(string engineCapacity,string power);
    Engine(const Engine &other);
    Engine operator=(const Engine &rhs);
    friend ostream &operator<<(ostream &os, const Engine &obj);
    ~Engine(){};
};


#endif //CODE_ENGINE_H
