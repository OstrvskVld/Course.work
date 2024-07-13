

#include "Sedan.h"
#include "iostream"
#include "Cars.h"
#include "Engine.h"


using namespace std;


Sedan::Sedan()
: Cars(),typeofroof(""),maxspeed(0), engine1("",""){}
Sedan::Sedan(string typeofroof, int maxspeed)
: typeofroof{typeofroof}, maxspeed{maxspeed}{}
Sedan::Sedan(string brand, string color, double fuel, int numberOfDoors, int yearOfProduction, double price,
             string typeofroof, int maxspeed) : Cars(brand,color,fuel,numberOfDoors, yearOfProduction,price),
             typeofroof{typeofroof}, maxspeed{maxspeed} {}
Sedan::Sedan(Cars cars,string typeofroof, int maxspeed)
: Cars(cars.getBrand(),cars.getColor(),cars.getFuel(),cars.getDoors(), cars.getYear(),cars.getPrice()),
typeofroof{typeofroof}, maxspeed{maxspeed} {}
Sedan::Sedan(Cars cars,string typeofroof, int maxspeed,Engine engine1)
        : Cars(cars.getBrand(),cars.getColor(),cars.getFuel(),cars.getDoors(), cars.getYear(),cars.getPrice()),
        typeofroof{typeofroof}, maxspeed{maxspeed},engine1{engine1}{}
Sedan::Sedan(const Cars& carRef, string typeofroof, int maxspeed)
        : typeofroof(typeofroof), maxspeed(maxspeed) {
    int price = carRef.getPrice();
    int fuel = carRef.getFuel();
    string color = carRef.getColor();
    string brand = carRef.getBrand();
    int yearOfProduction = carRef.getYear();
    int numberOfDoors = carRef.getDoors();
}



