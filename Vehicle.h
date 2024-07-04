

#ifndef CODE_VEHICLE_H
#define CODE_VEHICLE_H


#include <iostream>

using namespace std;

class Vehicle{
private:
protected:
    double age;
    string name;
    string typeOfVehicle;
    string availability;
    string del;
public:
    Vehicle();
//    Vehicle(string name); якщо я хочу працювати тільки з неймом
//    Vehicle(string name, int age);
    Vehicle(string name, string typeOfVehicle, double age, string availability,string del);
    Vehicle(string name, string typeOfVehicle, double age, string availability);
    Vehicle( double age);
    Vehicle(string name, string availability, string del);
    Vehicle(const Vehicle &other);
    Vehicle(Vehicle &&other);
    friend ostream &operator <<(ostream &os,const Vehicle &obj);
    Vehicle operator=(const Vehicle &rhs);
//    virtual void GetVehicle() const;
//    string GetVehic();
//    virtual void Delivery() const;
    virtual ~Vehicle(){};
};


#endif //CODE_VEHICLE_H
