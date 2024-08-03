
#ifndef CODE_FUNCTIONS_H
#define CODE_FUNCTIONS_H


#include "Cars.h"
#include "Van.h"
#include "Sedan.h"
#include "Users.h"
#include <iostream>
using namespace std;
void Probels();
void AddCars(Cars &cars);
void AddinfSed(Sedan &sedan);
void AddinfVan(Van &van);
void ReadVan(Van &van);
void ReadSed(Sedan &sedan);
void AddUsers(Users &Users);
void ReadUsers(Users &Users);
void SortByYear(Cars &cars);
void SortByYearDown(const string& cr, const string& sorted);
void ReadCars(Cars &cars);
void BuyACar(Cars &cars);


#endif //CODE_FUNCTIONS_H
