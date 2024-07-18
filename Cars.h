
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


using namespace std;


class Cars {
private:
    string inventoryStatus;
    string brand;
    string model;
    string color;
    double fuel;
    int numberOfDoors;
    int yearOfProduction;
    double price;

public:
        int getFuel() const;
        string getColor() const;
        string getBrand() const;
        int getDoors() const;
        int getYear() const;
        int getPrice() const;
        string getModel() const;
        string getStatus() const;

        void setBrand(const string& brand);
        void setFuel(const double& fuel);
        void setColor(const string& color);
        void setDoors(const int& numberOfDoors);
        void setYear(const int& yearOfProduction);
        void setPrice(const double& price);
        void getModel(const string& model);
        void getStatus(const string& inventoryStatus);


    Cars();
    Cars(const Cars &other);
    Cars(Cars &&other);
    friend ostream &operator <<(ostream &os,const Cars &obj);
    Cars operator=(const Cars &rhs);
    Cars(string brand, string color, double fuel, int numberOfDoors, int yearOfProduction, double price,
         string model, string inventoryStatus);
//    virtual void Fuel() const = 0;
    virtual void printInfo() const;
    ~Cars(){};

};




#endif //CODE_CARS_H
