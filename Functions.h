
#ifndef CODE_FUNCTIONS_H
#define CODE_FUNCTIONS_H


#include "Cars.h"
#include "Van.h"
#include "Sedan.h"
#include "Customers.h"
#include <iostream>
using namespace std;
void Probels();
void AddCars(Cars &cars);
void AddinfSed(Sedan &sedan);
void AddinfVan(Van &van);
void ReadVan(Van &van);
void ReadSed(Sedan &sedan);
void AddCustomers(Customers &customers);
void ReadCustomers(Customers &customers);
void ReadCars(Cars &cars);
void BuyACar(Cars &cars);


#endif //CODE_FUNCTIONS_H
