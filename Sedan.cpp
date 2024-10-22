

#include "Sedan.h"
#include "iostream"
#include "Cars.h"
#include "Engine.h"
#include "Interface.h"


using namespace std;


Sedan::Sedan()
: Cars(),typeofroof(""),maxspeed(0), engine1("","",""){}
Sedan::Sedan(string typeofroof, int maxspeed)
: typeofroof{typeofroof}, maxspeed{maxspeed}{}
Sedan::Sedan(string type,string licenseplate,string brand, string inventoryStatus, string model, string color, double fuel, double mileage,int numberOfDoors,
             int yearOfProduction, double price,
             string typeofroof, int maxspeed,Engine engine1)
        : Cars(type, brand, model, color, fuel, mileage, numberOfDoors, yearOfProduction, price, inventoryStatus,licenseplate),
          typeofroof(typeofroof), maxspeed(maxspeed), engine1(engine1) {}
Sedan::Sedan(Cars cars,string typeofroof, int maxspeed)
: Cars(cars.getType(),cars.getBrand(),cars.getModel(),cars.getColor(),cars.getFuel(),cars.getMileage(),cars.getDoors(),
       cars.getYear(),cars.getPrice(),  cars.getStatus(), cars.getPlate()),
typeofroof{typeofroof}, maxspeed{maxspeed} {}
Sedan::Sedan(Cars cars,string typeofroof, int maxspeed,Engine engine1)
        : Cars(cars.getType(),cars.getBrand(),cars.getModel(),cars.getColor(),cars.getFuel(),cars.getMileage(),cars.getDoors(),
               cars.getYear(),cars.getPrice(),  cars.getStatus(), cars.getPlate()),
        typeofroof{typeofroof}, maxspeed{maxspeed},engine1{engine1}{}
Sedan::Sedan(const Cars& carRef, string typeofroof, int maxspeed)
        : typeofroof(typeofroof), maxspeed(maxspeed) {
    string type = carRef.getType();
    string licenseplate = carRef.getPlate();
    int price = carRef.getPrice();
    int fuel = carRef.getFuel();
    double mileage = carRef.getMileage();
    string model = carRef.getModel();
    string inventoryStatus = carRef.getStatus();
    string color = carRef.getColor();
    string brand = carRef.getBrand();
    int yearOfProduction = carRef.getYear();
    int numberOfDoors = carRef.getDoors();
}

Sedan::Sedan(const Sedan &other)
        :Cars(other), typeofroof(other.typeofroof), maxspeed(other.maxspeed), engine1(other.engine1)
{}

Sedan::Sedan(const Cars& car) : Cars(car), typeofroof(""), maxspeed(0) {}

Sedan::Sedan(Sedan&& other)
        : typeofroof(move(other.typeofroof)),
          maxspeed(move(other.maxspeed)),
          engine1(move(other.engine1)) {

}




void Sedan::A1() {
    Sedan::A1();
}

void Sedan::printInfo() const {
    Cars::printInfo();
    cout<< "Type of roof: " << typeofroof << "\n" << "Max speed: " << maxspeed
        << "km/h" << "\n" << " Engine characteristics: " <<"\n" << engine1 << "\n" << endl;
}

int Sedan::getSpeed() const {
    return maxspeed;
}
string Sedan::getTypeofroof()  const {
    return typeofroof;
}

void Sedan::setTypeofroof(const string& newTyperoof) {
    typeofroof = newTyperoof;
}
void Sedan::setSpeed(const int &newSpeed) {
    maxspeed = newSpeed;
}




