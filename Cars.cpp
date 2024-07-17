
//#include "Engine.h"
//#include "Cars.h"
//#include "Vehicle.h"
#include <iostream>
#include "Cars.h"


using namespace std;

//Cars::Cars()
//        :Vehicle(),model(""),price(0),mileage(0),engine1("",""){}//default constructor
//Cars::Cars( string name, string typeOfVehicle, int age, string availability,string del, string model, double price, double mileage)
//        : Vehicle(name,typeOfVehicle,age,availability,del),model{model}, price{price},mileage{mileage}{};//constructor with parameters
//Cars::Cars(Vehicle vehic, std::string typeOfVehicle, int age, std::string model, double price, double mileage,
//           Engine engine1){};
//
//Cars::Cars( string name, string typeOfVehicle, int age, string availability,string model, double price, double mileage,Engine engine1)
//        : Vehicle(name,typeOfVehicle,age,availability),model{model}, price{price},mileage{mileage}, engine1(engine1){};//constructor with parameters
//Cars::Cars( string name, string typeOfVehicle, int age, string availability, string del,string model)
//        : Vehicle(name,typeOfVehicle,age,availability,del),model{model}{};//constructor with parameters
//Cars::Cars(const Cars &other)
//        :Vehicle(other), model(other.model), price(other.price), mileage(other.mileage), engine1(other.engine1)
//{}
//Cars Cars::operator=(const Cars &rhs) {
//    if (this == &rhs)
//        return *this;
//    else {
//        Cars::operator=(rhs);
//        model = rhs.model;
//        price = rhs.price;
//        mileage = rhs.mileage;
//        return *this;
//    }
//}
//ostream &operator<<(ostream &os, const Cars &obj){
//    os<< " Enter age of car: " << Vehicle{obj.age} << " Enter model of car: " <<obj.model
//      << " Enter price of car: " <<obj.price << " Enter milleage of car: " <<obj.mileage  << " Enter engine capacity of car: "
//      << Engine{obj.engine1.engineCapacity,obj.engine1.power} << "  Enter power of car: " << Engine{obj.engine1.engineCapacity,obj.engine1.power};
//    return os;
//}

//void Cars::Delivery() const {
//    Vehicle::GetVehicle();
//    Vehicle::Delivery();
//    cout << "Model: " << model <<endl;
//}

//void Cars::GetVehicle() const {
//    Vehicle::GetVehicle();
//    cout<< " Model: " <<model << " Price: "<<price << " Mileage: " <<mileage << engine1 << " Car " << "\n";
//}
Cars::Cars()
        : Cars("","",0,0,0,0,"",""){}
Cars::Cars(string brand, string color, double fuel, int numberOfDoors, int yearOfProduction, double price, string model
, string inventoryStatus)
        : brand{brand}, color{color}, fuel{fuel}, numberOfDoors{numberOfDoors}, yearOfProduction{yearOfProduction},
        price{price}, model{model}, inventoryStatus{inventoryStatus} {}
Cars::Cars(const Cars &other) {
    brand=other.brand;
    color=other.color;
    fuel=other.fuel;
    numberOfDoors=other.numberOfDoors;
    yearOfProduction=other.yearOfProduction;
    price=other.price;
    model=other.model;
    inventoryStatus=other.inventoryStatus;
}
Cars::Cars(Cars &&other)
        :brand(other.brand), color(other.color),fuel(other.fuel),numberOfDoors(other.numberOfDoors),
        yearOfProduction(other.yearOfProduction), price(other.price), model(other.model),
        inventoryStatus(other.inventoryStatus) {
    other.brand= "";
    other.color= "";
    other.fuel = 0;
    other.numberOfDoors = 0;
    other.yearOfProduction = 0;
    other.price = 0;
    other.model = "";
    other.inventoryStatus = "";
}
ostream &operator<<(ostream &os, const Cars &obj){
    os<<obj.brand << "\t"<<obj.color <<"\t"<<obj.fuel << "\t" << obj.numberOfDoors << "\t"<< obj.yearOfProduction<< "\t"
    << obj.price << "\t" << obj.model << "\t" << obj.inventoryStatus << endl;
    return os;
}
//Cars Cars::operator=(const Cars &rhs) {
//    if(this==&rhs)
//        return *this;
//    else{
//        brand=rhs.brand;
//        color=rhs.color;
//        fuel=rhs.fuel;
//        numberOfDoors=rhs.numberOfDoors;
//        yearOfProduction=rhs.yearOfProduction;
//        price=rhs.price;
//        return *this;
//    }
//}

void Cars ::printInfo() const {
    cout << "Brand: " << brand << endl;
        cout << "Color: " << color << endl;
        cout << "Fuel: " << fuel << " 100km" << endl;
        cout << "Number of doors " << numberOfDoors << endl;
        cout << "Year of production: " << yearOfProduction << endl;
        cout << "Price: " << price << " dollars" << endl;
        cout << "Model: " << model << endl;
        cout << "Vehicle availability status (for example, “available”, “sold”, “reserved”) :" <<
        inventoryStatus << endl;
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

