

#include "Van.h"
#include "iostream"
#include "Cars.h"
#include "Engine.h"


using namespace std;


Van::Van()
        : Cars(),payloadCapacity(0),sleepingCapacity(0), engine2("","",""){}
Van::Van(int payloadCapacity, int sleepingCapacity)
        : payloadCapacity{payloadCapacity}, sleepingCapacity{sleepingCapacity}{}
Van::Van(string brand, string inventoryStatus, string model, string color, double fuel, int numberOfDoors,
         int yearOfProduction, double price,
         int payloadCapacity, int sleepingCapacity) : Cars(brand,color,fuel,numberOfDoors, yearOfProduction,price,
                                                           model,inventoryStatus),
         payloadCapacity{payloadCapacity}, sleepingCapacity{sleepingCapacity} {}
Van::Van(Cars cars,int payloadCapacity, int sleepingCapacity)
        : Cars(cars.getBrand(),cars.getColor(),cars.getFuel(),cars.getDoors(),
               cars.getYear(),cars.getPrice(), cars.getModel(),
               cars.getStatus()),
          payloadCapacity{payloadCapacity}, sleepingCapacity{sleepingCapacity} {}
Van::Van(Cars cars,int payloadCapacity, int sleepingCapacity,Engine engine2)
        : Cars(cars.getBrand(),cars.getColor(),cars.getFuel(),cars.getDoors(),
               cars.getYear(),cars.getPrice(), cars.getModel(),
               cars.getStatus()),
          payloadCapacity{payloadCapacity}, sleepingCapacity{sleepingCapacity},engine2{engine2}{}
Van::Van(const Cars& carRef, int payloadCapacity, int sleepingCapacity)
        : payloadCapacity{payloadCapacity}, sleepingCapacity{sleepingCapacity} {
    int price = carRef.getPrice();
    int fuel = carRef.getFuel();
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



