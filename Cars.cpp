
#include <iostream>
#include "Cars.h"


using namespace std;


Cars::Cars()
        : Cars("","","","",0,0,0,0,0,"",""){}
Cars::Cars(string type,string brand, string model, string color, double fuel, double mileage, int numberOfDoors, int yearOfProduction,
           double price,string inventoryStatus, string licenseplate)
        : type{type},brand{brand}, model{model}, color{color}, fuel{fuel}, mileage{mileage}, numberOfDoors{numberOfDoors}, yearOfProduction{yearOfProduction},
        price{price}, inventoryStatus{inventoryStatus}, licenseplate{licenseplate} {}
Cars::Cars(const Cars &other) {
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
Cars::Cars(Cars &&other)
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
ostream &operator<<(ostream &os, const Cars &car){
    os<<car.type << "\t" << car.brand << "\t" << car.model <<"\t"<<car.color <<"\t"<<car.fuel << "\t" << car.mileage << "\t" << car.numberOfDoors
    << "\t"<< car.yearOfProduction<< "\t"<< car.price << "\t" << car.inventoryStatus << "\t" << car.licenseplate << endl;
    return os;
}
Cars Cars::operator=(const Cars &rhs) {
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

void Cars ::printInfo() const {
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
        cout << "License plate number of the car: " << licenseplate << endl;
}

string Cars::getPlate() const {
    return licenseplate;
}
double Cars::getMileage() const {
    return mileage;
}
int Cars::getPrice() const {
    return price;
}
int Cars::getFuel() const {
    return fuel;
}
string Cars::getColor() const {
    return color;
}
string Cars::getBrand() const {
    return brand;
}
int Cars::getYear() const {
    return yearOfProduction;
}
int Cars::getDoors() const {
    return numberOfDoors;
}
string Cars::getModel() const {
    return model;
}
string Cars::getStatus() const {
    return inventoryStatus;
}
string Cars::getType() const {
    return type;
}
void Cars::setPlate(const std::string &newPlate) {
    licenseplate = newPlate;
}
void Cars::setType(const string& newType) {
    type = newType;
}
void Cars::setStatus(const string &newStatus) {
    inventoryStatus = newStatus;
}
void Cars::setPrice(const double &newPrice) {
    price = newPrice;
}
void Cars::setYear(const int &newyearOfProduction) {
    yearOfProduction = newyearOfProduction;
}
void Cars::setMileage(const double& newMileage) {
    mileage = newMileage;
}
void Cars::setDoors(const int &newnumberOfDoors) {
    numberOfDoors = newnumberOfDoors;
}
void Cars::setFuel(const double &newfuel) {
    fuel = newfuel;
}
void Cars::setColor(const string &newcolor) {
    color = newcolor;
}
void Cars::setModel(const string &newmodel) {
    model = newmodel;
}
void Cars::setBrand(const string &newbrand) {
    brand = newbrand;
}


void Cars::A4() {
    Cars::A4();
}

