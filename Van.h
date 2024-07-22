
#ifndef CODE_VAN_H
#define CODE_VAN_H

#include "iostream"
#include "Cars.h"
#include "Engine.h"
#include "Interface.h"

using namespace std;

class Van : public Cars,Interface1{
private:
    int payloadCapacity;
    int sleepingCapacity;
    Engine engine2;
public:
    Van(const Cars& carRef, int payloadCapacity, int sleepingCapacity);
    Van();
    Van(int payloadCapacity, int sleepingCapacity);
    Van(string brand, string inventoryStatus, string model, string color, double fuel, int numberOfDoors, int yearOfProduction, double price,
        int payloadCapacity, int sleepingCapacity);
    Van(Cars cars,int payloadCapacity, int sleepingCapacity);
    Van(Cars cars,int payloadCapacity, int sleepingCapacity, Engine engine2);
    Van(const Van &other);
    Van(Van &&other);
    virtual void A2() override;
    virtual ~Van(){};
};


#endif //CODE_VAN_H
