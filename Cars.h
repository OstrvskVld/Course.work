
#ifndef CODE_CARS_H
#define CODE_CARS_H

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


    Cars();
    Cars(const Cars &other);
    Cars(Cars &&other);
    friend ostream &operator <<(ostream &os,const Cars &obj);
    Cars operator=(const Cars &rhs);
    Cars(string type,string brand, string model, string color, double fuel,double mileage, int numberOfDoors, int yearOfProduction, double price,
         string inventoryStatus, string licenseplate);
    virtual void printInfo() const;
    virtual void A4() override;
    virtual ~Cars(){};

};




#endif //CODE_CARS_H
