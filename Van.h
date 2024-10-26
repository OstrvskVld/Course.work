
#ifndef CODE_VAN_H
#define CODE_VAN_H

#include "iostream"
#include "Car.h"
#include "Engine.h"
#include "Interface.h"

using namespace std;

class Van : public Car, Interface1{
private:
    int payloadCapacity;
    int sleepingCapacity;
    Engine engine2;
public:
    Engine& getEngine() {
        return engine2;
    };
    int getPayloadCap() const;
    int getSleepCap() const;
    void setPayloadCap(const int& newTyperoof);
    void setSleepCap(const int& newSpeed);

    Van(const Car& carRef, int payloadCapacity, int sleepingCapacity);
    Van();
    Van(int payloadCapacity, int sleepingCapacity);
    Van(string type,string licenseplate,string brand, string inventoryStatus, string model, string color, double fuel, double mileage,
        int numberOfDoors, int yearOfProduction, double price,
        int payloadCapacity, int sleepingCapacity,Engine engine2);
    Van(Car cars, int payloadCapacity, int sleepingCapacity);
    Van(Car cars, int payloadCapacity, int sleepingCapacity, Engine engine2);
    Van(const Van &other);
    Van(Van &&other);
    virtual void A2() override;
    void printInfo() const override;
    virtual ~Van(){};
};


#endif //CODE_VAN_H
