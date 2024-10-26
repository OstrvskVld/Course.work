
#ifndef CODE_SEDAN_H
#define CODE_SEDAN_H

#include "iostream"
#include "Car.h"
#include "Engine.h"
#include "Interface.h"

using namespace std;

class Sedan : public Car, Interface1{
private:
    string typeofroof;
    int maxspeed;
    Engine engine1;
public:
    Engine& getEngine() {
        return engine1;
    };
    string getTypeofroof() const;
    int getSpeed() const;
    void setTypeofroof(const string& newTyperoof);
    void setSpeed(const int& newSpeed);

    Sedan(const Car& carRef, string typeofroof, int maxspeed);
    Sedan();
    Sedan(string typeofroof, int maxspeed);
    Sedan(string type,string licenseplate,string brand, string inventoryStatus, string model, string color, double fuel, double mileage,int numberOfDoors,
          int yearOfProduction, double price, string typeofroof, int maxspeed,Engine engine1);
    Sedan(Car cars, string typeofroof, int maxspeed);
    Sedan(Car cars, string typeofroof, int maxspeed, Engine engine1);
    Sedan(const Car& car);
    Sedan(const Sedan &other);
    Sedan(Sedan &&other);
    void printInfo() const override;
    virtual void A1() override;
    ~Sedan(){};
};


#endif //CODE_SEDAN_H
