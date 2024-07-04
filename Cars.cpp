
#include "Engine.h"
#include "Cars.h"
#include "Vehicle.h"
#include <iostream>

using namespace std;

Cars::Cars()
        :Vehicle(),model(""),price(0),mileage(0),engine1("",""){}//default constructor
Cars::Cars( string name, string typeOfVehicle, int age, string availability,string del, string model, double price, double mileage)
        : Vehicle(name,typeOfVehicle,age,availability,del),model{model}, price{price},mileage{mileage}{};//constructor with parameters
Cars::Cars(Vehicle vehic, std::string typeOfVehicle, int age, std::string model, double price, double mileage,
           Engine engine1){};

Cars::Cars( string name, string typeOfVehicle, int age, string availability,string model, double price, double mileage,Engine engine1)
        : Vehicle(name,typeOfVehicle,age,availability),model{model}, price{price},mileage{mileage}, engine1(engine1){};//constructor with parameters
Cars::Cars( string name, string typeOfVehicle, int age, string availability, string del,string model)
        : Vehicle(name,typeOfVehicle,age,availability,del),model{model}{};//constructor with parameters
Cars::Cars(const Cars &other)
        :Vehicle(other), model(other.model), price(other.price), mileage(other.mileage), engine1(other.engine1)
{}
Cars Cars::operator=(const Cars &rhs) {
    if (this == &rhs)
        return *this;
    else {
        Cars::operator=(rhs);
        model = rhs.model;
        price = rhs.price;
        mileage = rhs.mileage;
        return *this;
    }
}
ostream &operator<<(ostream &os, const Cars &obj){
    os<< " Enter age of car: " << Vehicle{obj.age} << " Enter model of car: " <<obj.model
      << " Enter price of car: " <<obj.price << " Enter milleage of car: " <<obj.mileage  << " Enter engine capacity of car: "
      << Engine{obj.engine1.engineCapacity,obj.engine1.power} << "  Enter power of car: " << Engine{obj.engine1.engineCapacity,obj.engine1.power};
    return os;
}

//void Cars::Delivery() const {
//    Vehicle::GetVehicle();
//    Vehicle::Delivery();
//    cout << "Model: " << model <<endl;
//}

//void Cars::GetVehicle() const {
//    Vehicle::GetVehicle();
//    cout<< " Model: " <<model << " Price: "<<price << " Mileage: " <<mileage << engine1 << " Car " << "\n";
//}