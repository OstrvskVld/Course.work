#include <iostream>
#include "Vehicle.h"
#include "Cars.h"
#include "Sedan.h"
#include "Engine.h"
#include "People.h"
#include "Drivers.h"
#include "Bike.h"
#include "interface.h"
#include "Functions.h"
#include "WrongType.h"
#include "WrongPassword.h"
#include "memory"
#include "AnotherVariant.h"


using namespace std;

//Cars car("","",0,"","","");

Cars cars("","","","",0,0,0,0,0,"","");
Sedan sedan1("","","","","","",0,0,0,0,0,
            "",0,Engine("","",""));
Engine engine1("","","");
Van van("","","","","","",0,0,0,
        0,0,0,0,Engine("","",""));
string cr;
string sorted;
int choice;
string brand, model, color, status,type;
int startYear, endYear;
//Vehicle vehicle("","",0,"","");
//Bike bike(vehicle,"","",0);
//People personal("",0,0,"");

int main() {
    Cars car;
    Engine engine;
    Van van1;
    Sedan sedan;
    Interface1 interface1;
//    cout << "Enter the car brand to search for:";
//    cin >> brand;
//    cout << "Enter the car model to search for:";
//    cin >> model;
//    cout << "Enter the car color to search for:";
//    cin >> color;
//    cout << "Enter the car type to search for:";
//    cin >> type;
//    cout << "Enter the car status to search for:";
//    cin >> status;
//        cout << "Enter the car brand and model to search for:";
//        cin >> brand >> model;
//    interface1.A4();
//    Probels();
//    WriteAvailableCars(car);
//    WriteReservedCars(cars);
//    WriteSoldCars(cars)
//    AddCars(car);
//    car.printInfo();

    Users user;
    vector<CarData> cars;
    user.setUserInfo();
    BuyOrReserveCar(cars, user);

//    ReadCars(cars);

//    SortByYearDown(cr,sorted);
//    cout << "Choose an option:\n"
//         << "1. Sort by year (up)\n"
//         << "2. Sort by year (down)\n"
//         << "3. Sort by price (down)\n"
//         << "4. Sort by price (up)\n"
//         << "5. Sort by mileage (down)\n"
//         << "6. Sort by mileage (up)\n"
//         << "7. Exit\n";
//
//    cin >> choice;
//
//    switch (choice) {
//        case 1:
//            sorted = R"(D:\Course Work\Code\Database\Sort by year up.txt)";
//            Sort(cr, sorted, 1, true);
//            break;
//        case 2:
//            sorted = R"(D:\Course Work\Code\Database\Sort by year down.txt)";
//            Sort(cr, sorted, 1, false);
//            break;
//        case 3:
//            sorted = R"(D:\Course Work\Code\Database\Sort by price down.txt)";
//            Sort(cr, sorted, 2, false);
//            break;
//        case 4:
//            sorted = R"(D:\Course Work\Code\Database\Sort by price up.txt)";
//            Sort(cr, sorted, 2, true);
//            break;
//        case 5:
//            sorted = R"(D:\Course Work\Code\Database\Sort by mileage down.txt)";
//            Sort(cr, sorted, 3, false);
//            break;
//        case 6:
//            sorted = R"(D:\Course Work\Code\Database\Sort by mileage up.txt)";
//            Sort(cr, sorted, 3, true);
//            break;
//        case 7:
//            cout << "Exiting program..." << endl;
//            exit(0);
//        default:
//            cout << "Invalid choice!" << endl;
//            break;
//    }

//    SearchCarsByBrand(brand);
//    SearchCarsByModel(model);
//    SearchCarsByColor(color);
//    SearchCarsByType(type);
//    SearchCarsByStatus(status);
//    SearchCarsByModBr(brand,model);

//    vector<CarData> cars = SearchCars(R"(D:\Course Work\Code\Database\Cars.txt)");

//    CarData cheapestCar = findCheapestCar(cars);
//    printCar(cheapestCar, "D:\\Course Work\\Code\\Database\\The cheapest car.txt");
//    printCars(cheapestCar);

//    CarData expensiveCar = findExpensiveCar(cars);
//    printCar(expensiveCar, "D:\\Course Work\\Code\\Database\\The most expensive car.txt");
//    printCars(expensiveCar);

//    CarData highestMileageCar = findHighestMileage(cars);
//    printCar(highestMileageCar, "D:\\Course Work\\Code\\Database\\High mileage.txt");
//    printCars(highestMileageCar);

//    CarData lowestMileageCar = findLowestMileage(cars);
//    printCar(lowestMileageCar, "D:\\Course Work\\Code\\Database\\Low mileage.txt");
//    printCars(lowestMileageCar);

//    CarData LeastEconomicalCar = findLeastEconomical(cars);
//    printCar(LeastEconomicalCar, "D:\\Course Work\\Code\\Database\\Not the most economic.txt");
//    printCars(LeastEconomicalCar);

//    CarData MostEconomicalCar = findMostEconomical(cars);
//    printCar(MostEconomicalCar, "D:\\Course Work\\Code\\Database\\The most economical.txt");
//    printCars(MostEconomicalCar);

//    CarData OldCar = findOldest(cars);
//    printCar(OldCar, "D:\\Course Work\\Code\\Database\\The oldest.txt");
//    printCars(OldCar);

//    CarData NewCar = findYoungest(cars);
//    printCar(NewCar, "D:\\Course Work\\Code\\Database\\The newest.txt");
//    printCars(NewCar);

//    vector<CarData> cars = SearchCars(R"(D:\Course Work\Code\Database\Cars.txt)");
//    string licensePlateToModify;
//    cin >> licensePlateToModify;
//    ChangeCar(licensePlateToModify);

//    string licensePlate;
//    cin >>licensePlate;
//    vector<string> licensePlatesToDelete = {licensePlate};
//    DeleteCarsSed(licensePlatesToDelete);

//    vector<string> licensePlatesReturn = {licensePlate};
//    ReturnCar(licensePlate);



//    cout << "Enter start year: ";
//    cin >> startYear;
//    cout << "Enter end year: ";
//    cin >> endYear;
//
//    double averagePrice = CalculateAveragePrice(startYear, endYear);
//    cout << "Average price of cars from " << startYear << " to " << endYear << ": " << averagePrice << endl;






//    AddinfSed(sedan1);
//    ReadSed(sedan);
//    interface1.A1();
//    Probels();
//    AddinfSed(sedan);
//    sedan.printInfo();
//    AddinfVan(van);
//    van.printInfo();
//    ReadVan(van);
//    AddCars(car);

//    ReadCars(cars);
    return 0;



////    cout << " Welcome to the vehicle salon! " << endl << endl;
//    cout << " Who are you? " << endl << " Enter A if you are the Admin " << endl << " Enter U if you are the User ";
//    Probels();
//    char cont;
//    cin >> cont;
//    try {
//        if (cont != 'A' && cont != 'U')
//            throw WrongType();
//        if (cont == 'A') {
//            string password;
//            cout << " Enter password! ";
//            Probels();
//            cin >> password;
//            try {
//                if (password != "vlad143") {
//                    throw WrongPassword();
//                } else {
//                    while (true) {
//                        Probels();
//                        cout << "Choose function!" << endl;
//                        cout << "A - Add VEHICLE" << endl;
//                        cout << "B - Add PERSONAL" << endl;
//                        cout << "C - Show information of PERSONAL" << endl;
//                        cout << "D - Show information of VEHICLE" << endl;
//                        cout << "E - Exit!" << endl;
//                        Probels();
//
//                        char choice;
//                        cin >> choice;
//                        try {
//                            if (choice != 'A' && choice != 'B' && choice != 'C' && choice != 'Q' && choice != 'D' &&
//                                choice != 'E')
//                                throw WrongType();
//                            else {
//                                switch (choice) {
//                                    case 'A' : { //Add VEHICLE
//                                        AddVehicle(vehicle);
//                                        break;
//                                    }
//                                    case 'B' : {//Add Personal
//                                        AddPersonal(personal);
//                                        break;
//                                    }
//                                    case 'C' : {//Show information of personal
//                                        ReadPersonal(personal);
//                                        break;
//                                    }
//                                    case 'D' : {//Show information of vehicle
//                                        ReadVehicle(vehicle);
//                                        break;
//                                    }
//                                    case 'E' : {//Exit
//                                        return 0;
//                                    }
//
//                                }
//                            }
//                        }
//                        catch (WrongPassword &A) {
//                            cerr << A.what();
//                        }
//                    }
//                }
//
//            }
//            catch (WrongPassword &A) {
//                cerr << A.what();
//            }
//        }
//        if (cont == 'U') {
//            string name, surname;
//            cout << "Hello user";
//            Probels();
//            cout << "You need to authorize" << endl;
//            cout << "Enter your name: " << endl;
//            cin >> name;
//            cout << "Enter your surname:" << endl;
//            cin >> surname;
//            while (true) {
//                Probels();
//                cout << "Chose what do you want:" << endl;
//                cout << "A - Show information of vehicle " << endl;
//                cout << "B - Buy the vehicle " << endl;
//                cout << "press Q - if you want to stop";
//                Probels();
//
//                char choice;
//                cin >> choice;
//                try {
//                    if (choice != 'A' && choice != 'B' && choice != 'Q')
//                        throw WrongType();
//                    switch (choice) {
//                        case 'A' : {
//                            ReadVehicle(vehicle);
//                            break;
//                        }
//                        case 'B' :{
//                            BuyACar(vehicle);
//                            break;
//                        }
//
//                        case 'Q' : {
//                            return 0;
//                        }
//                    }
//
//                }
//                catch (AnotherVariant &A) {
//                    cerr << A.what();
//                }
//            }
//        }
//    }
//    catch (WrongType &A){
//        cerr << A.what();
//    }
//    catch (WrongPassword &A) {
//        cerr << A.what();
//    }
//cout << "Hello";

}


