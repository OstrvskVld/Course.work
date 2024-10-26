
#include <iostream>
#include "Car.h"


using namespace std;


Car::Car()
        : Car("", "", "", "", 0, 0, 0, 0, 0, "", ""){}
Car::Car(string type, string brand, string model, string color, double fuel, double mileage, int numberOfDoors, int yearOfProduction,
         double price, string inventoryStatus, string licenseplate)
        : type{type},brand{brand}, model{model}, color{color}, fuel{fuel}, mileage{mileage}, numberOfDoors{numberOfDoors}, yearOfProduction{yearOfProduction},
        price{price}, inventoryStatus{inventoryStatus}, licenseplate{licenseplate} {}
Car::Car(const Car &other) {
    type=other.type;
    brand=other.brand;
    model=other.model;
    color=other.color;
    fuel=other.fuel;
    mileage=other.mileage;
    numberOfDoors=other.numberOfDoors;
    yearOfProduction=other.yearOfProduction;
    price=other.price;
    inventoryStatus=other.inventoryStatus;
    licenseplate=other.licenseplate;
}
Car::Car(Car &&other)
        :type(other.type),brand(other.brand), model(other.model), color(other.color),fuel(other.fuel), mileage(other.mileage),
        numberOfDoors(other.numberOfDoors),yearOfProduction(other.yearOfProduction), price(other.price),
        inventoryStatus(other.inventoryStatus), licenseplate(other.licenseplate) {
    other.type = "";
    other.brand= "";
    other.model = "";
    other.color= "";
    other.fuel = 0;
    other.mileage = 0;
    other.numberOfDoors = 0;
    other.yearOfProduction = 0;
    other.price = 0;
    other.inventoryStatus = "";
    other.licenseplate = "";
}
ostream &operator<<(ostream &os, const Car &car){
    os<<car.type << "\t" << car.brand << "\t" << car.model <<"\t"<<car.color <<"\t"<<car.fuel << "\t" << car.mileage << "\t" << car.numberOfDoors
    << "\t"<< car.yearOfProduction<< "\t"<< car.price << "\t" << car.inventoryStatus << "\t" << car.licenseplate << endl;
    return os;
}
Car Car::operator=(const Car &rhs) {
    if(this==&rhs)
        return *this;
    else{
        type=rhs.type;
        brand=rhs.brand;
        model=rhs.model;
        color=rhs.color;
        fuel=rhs.fuel;
        mileage=rhs.mileage;
        numberOfDoors=rhs.numberOfDoors;
        yearOfProduction=rhs.yearOfProduction;
        price=rhs.price;
        inventoryStatus=rhs.inventoryStatus;
        licenseplate=rhs.licenseplate;
        return *this;
    }
}

void Car ::printInfo() const {
        cout << "Type: " << type << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Color: " << color << endl;
        cout << "Fuel: " << fuel << " /100km" << endl;
        cout << "Mileage: " << mileage << " km" << endl;
        cout << "Number of doors: " << numberOfDoors << endl;
        cout << "Year of production: " << yearOfProduction << endl;
        cout << "Price: " << price << " dollars" << endl;
        cout << "Vehicle availability status (for example, 'available', 'sold', 'reserved') : " <<
        inventoryStatus << endl;
        cout << "License plate number of the car: " << licenseplate << "\n" << endl;
}

string Car::getPlate() const {
    return licenseplate;
}
double Car::getMileage() const {
    return mileage;
}
int Car::getPrice() const {
    return price;
}
int Car::getFuel() const {
    return fuel;
}
string Car::getColor() const {
    return color;
}
string Car::getBrand() const {
    return brand;
}
int Car::getYear() const {
    return yearOfProduction;
}
int Car::getDoors() const {
    return numberOfDoors;
}
string Car::getModel() const {
    return model;
}
string Car::getStatus() const {
    return inventoryStatus;
}
string Car::getType() const {
    return type;
}
void Car::setPlate(const std::string &newPlate) {
    licenseplate = newPlate;
}
void Car::setType(const string& newType) {
    type = newType;
}
void Car::setStatus(const string &newStatus) {
    inventoryStatus = newStatus;
}
void Car::setPrice(const double &newPrice) {
    price = newPrice;
}
void Car::setYear(const int &newyearOfProduction) {
    yearOfProduction = newyearOfProduction;
}
void Car::setMileage(const double& newMileage) {
    mileage = newMileage;
}
void Car::setDoors(const int &newnumberOfDoors) {
    numberOfDoors = newnumberOfDoors;
}
void Car::setFuel(const double &newfuel) {
    fuel = newfuel;
}
void Car::setColor(const string &newcolor) {
    color = newcolor;
}
void Car::setModel(const string &newmodel) {
    model = newmodel;
}
void Car::setBrand(const string &newbrand) {
    brand = newbrand;
}


void Car::A4() {
    Car::A4();
}

