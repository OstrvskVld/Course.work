
#ifndef CODE_CARS_H
#define CODE_CARS_H


//#include "Vehicle.h"
//#include "Engine.h"
#include <iostream>
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
#include <vector>

using namespace std;

// Абстрактний клас Car
class Cars {
private:
    // Захищені члени-дані для зберігання інформації про автомобіль
    string brand;
    string color;
    double fuel;
    int numberOfDoors;
    int yearOfProduction;
    double price;

public:

    Cars();
    Cars(const Cars &other);
    Cars(Cars &&other);
    friend ostream &operator <<(ostream &os,const Cars &obj);
    Cars operator=(const Cars &rhs);
    Cars(string brand, string color, double fuel, int numberOfDoors, int yearOfProduction, double price);
//    Cars(string brand, string color, double fuel, int numberOfDoors, int yearOfProduction);
    // Конструктор для створення нового об'єкта Car
//    Cars(const string& brand, const string& color, double fuel,
//        int numberOfDoors, int yearOfProduction, double price)
//            : brand(brand), color(color), fuel(fuel),
//              numberOfDoors(numberOfDoors), yearOfProduction(yearOfProduction), price(price) {}


    virtual void getFuel() const;
    // Чиста віртуальна функція для отримання витрат на 100 км
//    virtual double getFuelCostPer100km() = 0;

    // Віртуальна функція для друку інформації про автомобіль
    virtual void printInfo() const;
//    virtual void printInfo() {
//        cout << "Brand: " << brand << endl;
//        cout << "Color: " << color << endl;
//        cout << "Fuel: " << fuel << " 100km" << endl;
//        cout << "Number of doors " << numberOfDoors << endl;
//        cout << "Year of production: " << yearOfProduction << endl;
//        cout << "Price: " << price << " dollars" << endl;
//    }
    ~Cars(){};
};




#endif //CODE_CARS_H
