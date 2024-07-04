

#include "Bike.h"
#include "Vehicle.h"
#include <iostream>

using namespace std;

Bike::Bike()
        :Vehicle(),color(""),cost(0){}//default constructor
Bike::Bike( string name,string typeOfVehicle,int age,string availability,string color,double cost)
        : Vehicle(name,typeOfVehicle,age,availability),color{color}, cost{cost}{};//constructor with parameters
Bike::Bike(const Bike &other)
        :Vehicle(other), color(other.color), cost(other.cost)
{}
Bike::Bike(std::string color, double cost)
        :color{color},cost{cost} {}
Bike::Bike(Vehicle vehic, std::string typeOfVehicle, std::string color, double cost)
        : Vehicle(name,availability,del), typeOfVehicle {typeOfVehicle}, color{color}, cost{cost}  {}
Bike Bike::operator=(const Bike &rhs) {
    if (this == &rhs)
        return *this;
    else {
        Bike::operator=(rhs);
        color = rhs.color;
        cost = rhs.cost;
        return *this;
    }
}
ostream &operator<<(ostream &os, const Bike &obj){
    os<< " Color of bike: " <<obj.color << " Enter cost of bike: " <<obj.cost;
    return os;
}

//void Bike::GetVehicle() const {
//    Vehicle::GetVehicle();
//    cout<< " Color: " << color << " Cost: "<< cost << " Bike " <<"\n";
//}


