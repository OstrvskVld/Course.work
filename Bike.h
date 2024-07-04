

#ifndef CODE_BIKE_H
#define CODE_BIKE_H


#include "Vehicle.h"


class Bike : public Vehicle{
public:
    string color;
    double cost;
public:
    Bike();
    Bike(string color, double cost);
    Bike(string name,string typeOfVehicle,int age,string availability,string color,double cost);
    Bike(Vehicle vehic,string typeOfVehicle, string color,double cost);
    Bike(const Bike &other);
    friend ostream &operator <<(ostream &os,const Bike &obj);
    Bike operator=(const Bike& rhs);
//    virtual void GetVehicle () const override;
    virtual ~Bike() override {};
    string typeOfVehicle;
};


#endif //CODE_BIKE_H
