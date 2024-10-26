
#ifndef CODE_FUNCTION_H
#define CODE_FUNCTION_H


#include "Car.h"
#include "Van.h"
#include "Sedan.h"
#include "User.h"
#include <iostream>
#include <vector>
#include <string>
struct CarData {
    string type, brand, model, color, status, licensePlate;
    double fuel, price, mileage;
    int doors, year;
};

struct Engine1 {
    string engineCapacity, power, engineType;
};

struct VanData : public CarData, Engine1 {
    int payloadCapacity, sleepingCapacity;
    Engine1 engine2;
};

struct SedanData : public CarData, Engine1{
    string typeofroof;
    int maxspeed;
    Engine1 engine1;
};




using namespace std;
void Probels();
void AddCars(Car &cars);
void AddinfSed(Sedan &sedan);
void AddinfVan(Van &van);
void ReadVan(Van &van);
void ReadSed(Sedan &sedan);
void ReadCars(Car &cars);
void SortCars(vector<CarData>& cars, int criteria, bool ch);
void Sort(const string& cr, const string& sorted, int criteria, bool ch);
void SearchCarsByBrand(const string& brand);
void SearchCarsByModel(const string& model);
void SearchCarsByColor(const string& color);
void SearchCarsByType(const string& type);
void SearchCarsByStatus(const string& status);
void SearchCarsByModBr(const string& brand,const string& model);
void SearchCarsByLicensePlate(const string& licensePlate);
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
void ChangeSedIfNecessary(const CarData& car);
void ChangeVanIfNecessary(const CarData& car);
void ChangeCar(const string& licensePlate);
void ChangeSed(const string& licensePlate);
void UpdateCarDataWithSedan(const SedanData& sedan);
void UpdateCarDataWithVan(const VanData& van);
void ChangeVan(const string& licensePlate);
void RemoveFromStatusFile(const string& licensePlate, const string& statusFilePath);
void DeleteCarsSed(const vector<string>& licensePlates);
void DeleteCarsVan(const vector<string>& licensePlates);
void ReturnCar(const string& licensePlate);
void WriteAvailableCars(const CarData& car);
void WriteSoldCars(const CarData& car);
void WriteReservedCars(const CarData& car);
void BuyOrReserveCar(vector<CarData> &cars, const User &user);



#endif //CODE_FUNCTION_H
