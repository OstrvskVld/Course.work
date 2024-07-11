
#ifndef CODE_SEDAN_H
#define CODE_SEDAN_H

#include "iostream"
#include "Cars.h"
#include "Engine.h"

using namespace std;

class Sedan : public Cars{
private:
    string typeofroof;
    int maxspeed;
    Engine engine1;
public:
    Sedan();
    Sedan(string typeofroof, int maxspeed);
    Sedan(Cars cars,string typeofroof, int maxspeed);
    Sedan(Cars cars,string typeofroof, int maxspeed, Engine engine1);
    Sedan(const Sedan &other);
    Sedan(Sedan &&other);
    ~Sedan();
};


#endif //CODE_SEDAN_H
