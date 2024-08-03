
#ifndef CODE_CARS_H
#define CODE_CARS_H


//#include "Vehicle.h"
//#include "Engine.h"
//#include <iostream>
//#include "Functions.h"

//using namespace std;
//
//class Cars : public Vehicle {
//protected:
//    string model;
//    double price;
//    double mileage;
//    Engine engine1;
//public:
//    Cars();
////    Cars(string name): Vehicle(name){}; якщо я хочу працювати тільки з неймом
//// приклад Cars(string name, int age) : Vehicle(name,age){};
//    Cars(string name, string typeOfVehicle, int age, string availability, string del, string model, double price,
//         double mileage);
//
//    Cars(string name, string typeOfVehicle, int age, string availability, string del, string model);
//    Cars(string name, string typeOfVehicle, int age, string availability,string model, double price, double mileage, Engine engine1);
//    Cars(string name, string typeOfVehicle, int age, string availability, int del,string model, double price, double mileage);
//    Cars(string name, string typeOfVehicle, int age, string availability, int del,string model);
//    Cars(Vehicle vehic, string typeOfVehicle, int age, string model, double price, double mileage, Engine engine1);
//    Cars(const Cars &other);
//    friend ostream &operator <<(ostream &os,const Cars &obj);
//    Cars operator=(const Cars& rhs);
////    void GetVehicle() const override;
////    void Delivery() const override;
//    virtual ~Cars() override {};
//};

#include <iostream>
#include "Interface.h"



using namespace std;


class Cars : public Interface1{
private:
    string type;
    string inventoryStatus;
    string brand;
    string model;
    string color;
    double fuel;
    int numberOfDoors;
    int yearOfProduction;
    double price;
    string licenseplate;

public:

        string getPlate() const;
        int getFuel() const;
        string getType() const;
        string getColor() const;
        string getBrand() const;
        int getDoors() const;
        int getYear() const;
        int getPrice() const;
        string getModel() const;
        string getStatus() const;

        void setPlate(const string& newPlate);
        void setType(const string& newType);
        void setBrand(const string& newbrand);
        void setFuel(const double& newfuel);
        void setColor(const string& newcolor);
        void setDoors(const int& newnumberOfDoors);
        void setYear(const int& newyearOfProduction);
        void setPrice(const double& newPrice);
        void setModel(const string& newmodel);
        void setStatus(const string& newStatus);


    Cars();
    Cars(const Cars &other);
    Cars(Cars &&other);
    friend ostream &operator <<(ostream &os,const Cars &obj);
    Cars operator=(const Cars &rhs);
    Cars(string type,string brand, string model, string color, double fuel, int numberOfDoors, int yearOfProduction, double price,
         string inventoryStatus, string licenseplate);
//    virtual void Fuel() const = 0;
    virtual void printInfo() const;
    virtual void A4() override;
    virtual ~Cars(){};

};




#endif //CODE_CARS_H
