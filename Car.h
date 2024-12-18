
#ifndef CODE_CAR_H
#define CODE_CAR_H

#include <iostream>
#include "Interface.h"



using namespace std;


class Car : public Interface1{
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
    double mileage;

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
        double getMileage() const;

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
        void setMileage(const double& newMileage);


    Car();
    Car(const Car &other);
    Car(Car &&other);
    friend ostream &operator <<(ostream &os,const Car &obj);
    Car operator=(const Car &rhs);
    Car(string type, string brand, string model, string color, double fuel, double mileage, int numberOfDoors, int yearOfProduction, double price,
        string inventoryStatus, string licenseplate);
    virtual void printInfo() const;
    virtual void A4() override;
    virtual ~Car(){};

};




#endif //CODE_CAR_H
