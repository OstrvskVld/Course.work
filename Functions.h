
#ifndef CODE_FUNCTIONS_H
#define CODE_FUNCTIONS_H


#include "Cars.h"
#include "Van.h"
#include "Sedan.h"
#include "Users.h"
#include <iostream>
#include <vector>
#include <string>
struct CarData {
    string type, brand, model, color, status, licensePlate;
    double fuel, price, mileage;
    int doors, year;
};
struct Engine1 {
    string engineCapacity;
    string power;
    string engineType;
};


//struct EngineData {
//    string engineCapacity,power,engineType;
//
//    friend istream& operator>>(istream& in, Engine& engine) {
//        in >> engine.engineCapacity >> engine.power >> engine.engineType;
//        return in;
//    }
//};
struct SedanData : public CarData, Engine1{
    string typeofroof;
    int maxspeed;
    Engine1 engine1;
};




using namespace std;
void Probels();
void AddCars(Cars &cars);
void AddinfSed(Sedan &sedan);
void AddinfVan(Van &van);
void ReadVan(Van &van);
void ReadSed(Sedan &sedan);
void AddUsers(Users &Users);
void ReadUsers(Users &Users);
void Sort(const string& cr, const string& sorted, int criteria, bool ch);
void SearchCarsByBrand(const string& brand);
void SearchCarsByModel(const string& model);
void SearchCarsByColor(const string& color);
void SearchCarsByType(const string& type);
void SearchCarsByStatus(const string& status);
void SearchCarsByModBr(const string& brand,const string& model);
vector<CarData> SearchCars(const string& filname);
void printCars(const CarData& car);
void printCar(const CarData& car, const string& name);
CarData findCheapestCar(const vector<CarData>& cars);
CarData findExpensiveCar(const vector<CarData>& cars);
CarData findLowestMileage(const vector<CarData>& cars);
CarData findHighestMileage(const vector<CarData>& cars);
CarData findMostEconomical(const vector<CarData>& cars);
CarData findLeastEconomical(const vector<CarData>& cars);
CarData findOldest(const vector<CarData>& cars);
CarData findYoungest(const vector<CarData>& cars);
double CalculateAveragePrice(int startYear, int endYear);
void ChangeCar(const string& licensePlate);
void ChangeSed(const string& licensePlate);
void ChangeVan(const string& licensePlate);
void DeleteCarsSed(const vector<string>& licensePlates);
void ReturnCar(const string& licensePlate);
void ReadCars(Cars &cars);
void BuyACar(Cars &cars);


#endif //CODE_FUNCTIONS_H
