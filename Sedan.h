
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
    Sedan(const Cars& carRef, string typeofroof, int maxspeed);
    Sedan();
    Sedan(string typeofroof, int maxspeed);
    Sedan(string brand, string inventoryStatus, string model, string color, double fuel, int numberOfDoors, int yearOfProduction, double price,string
    typeofroof, int maxspeed);
    Sedan(Cars cars,string typeofroof, int maxspeed);
    Sedan(Cars cars,string typeofroof, int maxspeed, Engine engine1);
    virtual void Fuel() const = 0;
    Sedan(const Sedan &other);
    Sedan(Sedan &&other);
    ~Sedan();
};


#endif //CODE_SEDAN_H
