

#include "Van.h"
#include "iostream"
#include "Cars.h"
#include "Engine.h"


using namespace std;


Van::Van()
        : Cars(),payloadCapacity(0),sleepingCapacity(0), engine2("","",""){}
Van::Van(int payloadCapacity, int sleepingCapacity)
        : payloadCapacity{payloadCapacity}, sleepingCapacity{sleepingCapacity}{}
Van::Van(string type,string licenseplate,string brand, string inventoryStatus, string model, string color, double fuel, double mileage,int numberOfDoors,
         int yearOfProduction, double price,
         int payloadCapacity, int sleepingCapacity,Engine engine2) : Cars(type,brand, model, color, fuel, mileage, numberOfDoors, yearOfProduction, price,
                                                           inventoryStatus,licenseplate),
         payloadCapacity{payloadCapacity}, sleepingCapacity{sleepingCapacity}, engine2{engine2} {}
Van::Van(Cars cars,int payloadCapacity, int sleepingCapacity)
        : Cars(cars.getType(),cars.getBrand(),cars.getModel(),cars.getColor(),cars.getFuel(),cars.getMileage(),cars.getDoors(),
               cars.getYear(),cars.getPrice(),  cars.getStatus(), cars.getPlate()),
          payloadCapacity{payloadCapacity}, sleepingCapacity{sleepingCapacity} {}
Van::Van(Cars cars,int payloadCapacity, int sleepingCapacity,Engine engine2)
        : Cars(cars.getType(),cars.getBrand(),cars.getModel(),cars.getColor(),cars.getFuel(),cars.getMileage(),cars.getDoors(),
               cars.getYear(),cars.getPrice(),  cars.getStatus(), cars.getPlate()),
          payloadCapacity{payloadCapacity}, sleepingCapacity{sleepingCapacity},engine2{engine2}{}
Van::Van(const Cars& carRef, int payloadCapacity, int sleepingCapacity)
        : payloadCapacity{payloadCapacity}, sleepingCapacity{sleepingCapacity} {
    string licenseplate = carRef.getPlate();
    int price = carRef.getPrice();
    int fuel = carRef.getFuel();
    double mileage = carRef.getMileage();
    string inventoryStatus = carRef.getStatus();
    string color = carRef.getColor();
    string brand = carRef.getBrand();
    int yearOfProduction = carRef.getYear();
    int numberOfDoors = carRef.getDoors();
}

Van::Van(const Van &other)
        :Cars(other), payloadCapacity(other.payloadCapacity), sleepingCapacity(other.sleepingCapacity),
        engine2(other.engine2)
{}

Van::Van(Van&& other)
        : payloadCapacity(move(other.payloadCapacity)),
          sleepingCapacity(move(other.sleepingCapacity)),
          engine2(move(other.engine2)) {

}

void Van::A2() {
    Van::A2();
}

void Van::printInfo() const {
    Cars::printInfo();
    cout<< " Payload capacity: "  << payloadCapacity << "\n" << " Sleeping capacity: " <<
    "\n" << sleepingCapacity << "\n" << " Engine characteristics: " <<"\n" << engine2;
}

int Van::getPayloadCap() const {
    return payloadCapacity;
}
int Van::getSleepCap()const {
    return sleepingCapacity;
}

void Van::setPayloadCap(const int &loadcap)  {
    payloadCapacity = loadcap;
}
void Van::setSleepCap(const int &sleep) {
    sleepingCapacity = sleep;
}




