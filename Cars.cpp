
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
        : Cars("","",0,0,0,0){}
Cars::Cars(string brand, string color, double fuel, int numberOfDoors, int yearOfProduction, double price)
        : brand(brand), color(color), fuel(fuel), numberOfDoors(numberOfDoors), yearOfProduction(yearOfProduction), price(price) {}
Cars::Cars(const Cars &other) {
    brand=other.brand;
    color=other.color;
    fuel=other.fuel;
    numberOfDoors=other.numberOfDoors;
    yearOfProduction=other.yearOfProduction;
    price=other.price;
}
Cars::Cars(Cars &&other)
        :brand(other.brand), color(other.color),fuel(other.fuel),numberOfDoors(other.numberOfDoors),
        yearOfProduction(other.yearOfProduction), price(other.price) {
    other.brand= "";
    other.color= "";
    other.fuel = 0;
    other.numberOfDoors = 0;
    other.yearOfProduction = 0;
    other.price = 0;
}
ostream &operator<<(ostream &os, const Cars &obj){
    os<<obj.brand << "\t"<<obj.color <<"\t"<<obj.fuel << "\t" << obj.numberOfDoors << "\t"<< obj.yearOfProduction<< "\t"
    << obj.price << endl;
    return os;
}
Cars Cars::operator=(const Cars &rhs) {
    if(this==&rhs)
        return *this;
    else{
        brand=rhs.brand;
        color=rhs.color;
        fuel=rhs.fuel;
        numberOfDoors=rhs.numberOfDoors;
        yearOfProduction=rhs.yearOfProduction;
        price=rhs.price;
        return *this;
    }
}

