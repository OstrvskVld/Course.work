#include <iostream>
#include "Cars.h"
#include "Sedan.h"
#include "Engine.h"
#include "interface.h"
#include "Functions.h"
#include "WrongType.h"
#include "WrongPassword.h"
#include "memory"
#include "AnotherVariant.h"
#include "Users.h"
#include "IncorrectInputException.h"


using namespace std;



Cars cars("","","","",0,0,0,0,0,"","");
Sedan sedan1("","","","","","",0,0,0,0,0,
            "",0,Engine("","",""));
Engine engine1("","","");
Van van("","","","","","",0,0,0,
        0,0,0,0,Engine("","",""));
Users users(0,"","","");
string cr;
string sorted;
int choice;
string brand, model, color, status,type;
int startYear, endYear;


























//    Cars car;
//    Engine engine;
//    Van van1;
//    Sedan sedan;
//    Interface1 interface1;
//    Users users1;
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
//
//    AddCars(car);
//    AddinfSed(sedan);
//    AddinfVan(van1);
//    ReadVan(van1);
//    ReadSed(sedan);
//    ChangeSedIfNecessary(car);
//    ChangeVanIfNecessary(cars);
//    ChangeSed(sedan);
//    ChangeVan(van1);
//    DeleteCarsVan(car);
//
//    car.printInfo();
//
//    Users user;
//    vector<CarData> cars;
//    user.setUserInfo();
//    BuyOrReserveCar(cars, user);
//
//    ReadCars(cars);
//
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
//
//    SearchCarsByBrand(brand);
//    SearchCarsByModel(model);
//    SearchCarsByColor(color);
//    SearchCarsByType(type);
//    SearchCarsByStatus(status);
//    SearchCarsByModBr(brand,model);
//


//    vector<CarData> cars = SearchCars(R"(D:\Course Work\Code\Database\Cars.txt)");
//
//    CarData cheapestCar = findCheapestCar(cars);
//    printCar(cheapestCar, "D:\\Course Work\\Code\\Database\\The cheapest car.txt");
//    printCars(cheapestCar);
//
//    CarData expensiveCar = findExpensiveCar(cars);
//    printCar(expensiveCar, "D:\\Course Work\\Code\\Database\\The most expensive car.txt");
//    printCars(expensiveCar);
//
//    CarData highestMileageCar = findHighestMileage(cars);
//    printCar(highestMileageCar, "D:\\Course Work\\Code\\Database\\High mileage.txt");
//    printCars(highestMileageCar);
//
//    CarData lowestMileageCar = findLowestMileage(cars);
//    printCar(lowestMileageCar, "D:\\Course Work\\Code\\Database\\Low mileage.txt");
//    printCars(lowestMileageCar);
//
//    CarData LeastEconomicalCar = findLeastEconomical(cars);
//    printCar(LeastEconomicalCar, "D:\\Course Work\\Code\\Database\\Not the most economic.txt");
//    printCars(LeastEconomicalCar);
//
//    CarData MostEconomicalCar = findMostEconomical(cars);
//    printCar(MostEconomicalCar, "D:\\Course Work\\Code\\Database\\The most economical.txt");
//    printCars(MostEconomicalCar);
//
//    CarData OldCar = findOldest(cars);
//    printCar(OldCar, "D:\\Course Work\\Code\\Database\\The oldest.txt");
//    printCars(OldCar);
//
//    CarData NewCar = findYoungest(cars);
//    printCar(NewCar, "D:\\Course Work\\Code\\Database\\The newest.txt");
//    printCars(NewCar);
//
//    vector<CarData> cars = SearchCars(R"(D:\Course Work\Code\Database\Cars.txt)");

//    string licensePlateToModify;
//    cin >> licensePlateToModify;
//    ChangeCar(licensePlateToModify);
//
//    string licensePlate;
//    cin >>licensePlate;
//    vector<string> licensePlatesToDelete = {licensePlate};
//    DeleteCarsSed(licensePlatesToDelete);
//
//    vector<string> licensePlatesReturn = {licensePlate};
//    ReturnCar(licensePlate);
//
//
//
//    cout << "Enter start year: ";
//    cin >> startYear;
//    cout << "Enter end year: ";
//    cin >> endYear;
//
//    double averagePrice = CalculateAveragePrice(startYear, endYear);
//    cout << "Average price of cars from " << startYear << " to " << endYear << ": " << averagePrice << endl;
//
//
//
//
//
//
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
//
//    ReadCars(cars);
//    return 0;












int main() {
    cout << "Who are you?" << endl;
    cout << "Enter A if you are the Admin" << endl;
    cout << "Enter U if you are the User" << endl;
    Probels();

    char cont;
    cin >> cont;

    try {
        if (cont != 'A' && cont != 'U') {
            throw IncorrectInputException();
        }

        Cars car;
        Engine engine;
        Van van1;
        Sedan sedan;
        Interface1 interface1;
        Users users1;
        WriteAvailableCars(cars);
        WriteReservedCars(cars);
        WriteSoldCars(cars);

        if (cont == 'A') {
            string password;
            cout << "Enter password: ";
            Probels();
            cin >> password;

            try {
                if (password != "vlad143") {
                    throw IncorrectInputException();
                } else {
                    while (true) {
                        Probels();
                        cout << "Choose function!" << endl;
                        cout << "A - Add VEHICLE" << endl;
                        cout << "B - Add Sedan Info" << endl;
                        cout << "C - Add Van Info" << endl;
                        cout << "D - Read Car Info" << endl;
                        cout << "E - Read Sedan Info" << endl;
                        cout << "F - Read Van Info" << endl;
                        cout << "G - Sort Cars" << endl;
                        cout << "H - Search Criteria of cars" << endl;
                        cout << "I - Search  by smaller or larger values" << endl;
                        cout << "J - Calculate Average Price for a Year Range" << endl;
                        cout << "K - Change Car Details" << endl;
                        cout << "L - Change Sedan Details" << endl;
                        cout << "M - Change Van Details" << endl;
                        cout << "N - Return Car" << endl;
                        cout << "O - Delete Cars/Sedans" << endl;
                        cout << "P - Delete Cars/Vans" << endl;
                        cout << "Q - Buy or Reserve Car" << endl;
                        cout << "H - Exit!" << endl;
                        Probels();

                        char choice;
                        cin >> choice;

                        try {
                            if (choice != 'A' && choice != 'B' && choice != 'C' && choice!= 'D'
                            && choice!= 'E' && choice!= 'F' && choice!= 'G'
                            && choice!= 'H' && choice!= 'I' && choice != 'J' && choice != 'K') {
                                throw IncorrectInputException();
                            } else {
                                switch (choice) {
                                    case 'A':
                                        AddCars(car);
                                        car.printInfo();
                                        break;
                                    case 'B':
                                        AddinfSed(sedan);
                                        sedan.printInfo();
                                        cout << "Add information about the sedan!" << endl;
                                        break;
                                    case 'C':
                                        AddinfVan(van);
                                        van.printInfo();
                                        cout << "Add information about the van!" << endl;
                                        break;
                                    case 'D':
                                        ReadCars(cars);
                                        cout << "Read information about cars!" << endl;
                                        break;
                                    case 'E':
                                        ReadSed(sedan);
                                        cout << "Read information about sedans!" << endl;
                                        break;
                                    case 'F':
                                        ReadVan(van);
                                        cout << "Read information about vans!" << endl;
                                        break;
                                    case 'G': {
                                        string cr = R"(D:\Course Work\Code\Database\Cars.txt)";
                                        string sorted;
                                        cout << "Choose an option:\n"
                                             << "1. Sort by year (up)\n"
                                             << "2. Sort by year (down)\n"
                                             << "3. Sort by price (down)\n"
                                             << "4. Sort by price (up)\n"
                                             << "5. Sort by mileage (down)\n"
                                             << "6. Sort by mileage (up)\n"
                                             << "7. Exit\n";
                                        int sortChoice;
                                        cin >> sortChoice;

                                        switch (sortChoice) {
                                            case 1:
                                                sorted = R"(D:\Course Work\Code\Database\Sort by year up.txt)";
                                                Sort(cr, sorted, 1, true);
                                                break;
                                            case 2:
                                                sorted = R"(D:\Course Work\Code\Database\Sort by year down.txt)";
                                                Sort(cr, sorted, 1, false);
                                                break;
                                            case 3:
                                                sorted = R"(D:\Course Work\Code\Database\Sort by price down.txt)";
                                                Sort(cr, sorted, 2, false);
                                                break;
                                            case 4:
                                                sorted = R"(D:\Course Work\Code\Database\Sort by price up.txt)";
                                                Sort(cr, sorted, 2, true);
                                                break;
                                            case 5:
                                                sorted = R"(D:\Course Work\Code\Database\Sort by mileage down.txt)";
                                                Sort(cr, sorted, 3, false);
                                                break;
                                            case 6:
                                                sorted = R"(D:\Course Work\Code\Database\Sort by mileage up.txt)";
                                                Sort(cr, sorted, 3, true);
                                                break;
                                            case 7:
                                                cout << "Exiting sorting menu..." << endl;
                                                break;
                                            default:
                                                cout << "Invalid choice!" << endl;
                                                break;
                                        }
                                        break;
                                    }
                                    case 'H': {
                                        string searchCriteria;
                                        cout << "Choose search criteria:\n"
                                             << "1. Search by brand\n"
                                             << "2. Search by model\n"
                                             << "3. Search by color\n"
                                             << "4. Search by type\n"
                                             << "5. Search by status\n"
                                             << "6. Search by brand and model\n"
                                             << "7. Exit\n";
                                        int searchChoice;
                                        cin >> searchChoice;
                                        cin.ignore();

                                        switch (searchChoice) {
                                            case 1: {
                                                cout << "Enter brand: ";
                                                getline(cin, searchCriteria);
                                                SearchCarsByBrand(searchCriteria);
                                                break;
                                            }
                                            case 2: {
                                                cout << "Enter model: ";
                                                getline(cin, searchCriteria);
                                                SearchCarsByModel(searchCriteria);
                                                break;
                                            }
                                            case 3: {
                                                cout << "Enter color: ";
                                                getline(cin, searchCriteria);
                                                SearchCarsByColor(searchCriteria);
                                                break;
                                            }
                                            case 4: {
                                                cout << "Enter type: ";
                                                getline(cin, searchCriteria);
                                                SearchCarsByType(searchCriteria);
                                                break;
                                            }
                                            case 5: {
                                                cout << "Enter status (e.g., available, reserved): ";
                                                getline(cin, searchCriteria);
                                                SearchCarsByStatus(searchCriteria);
                                                break;
                                            }
                                            case 6: {
                                                string brand, model;
                                                cout << "Enter brand: ";
                                                getline(cin, brand);
                                                cout << "Enter model: ";
                                                getline(cin, model);
                                                SearchCarsByModBr(brand, model);
                                                break;
                                            }
                                            case 7:
                                                cout << "Exiting search menu..." << endl;
                                                break;
                                            default:
                                                cout << "Invalid choice!" << endl;
                                                break;
                                        }
                                        break;
                                    }
                                    case 'I':{
                                        vector<CarData> cars = SearchCars(R"(D:\Course Work\Code\Database\Cars.txt)");
                                        int choice;

                                        do {
                                            cout << "\n=== Admin Menu ===\n";
                                            cout << "1. Find the cheapest car\n";
                                            cout << "2. Find the most expensive car\n";
                                            cout << "3. Find the car with the lowest mileage\n";
                                            cout << "4. Find the car with the highest mileage\n";
                                            cout << "5. Find the most economical car\n";
                                            cout << "6. Find the least economical car\n";
                                            cout << "7. Find the oldest car\n";
                                            cout << "8. Find the newest car\n";
                                            cout << "9. Exit\n";
                                            cout << "Enter your choice: ";
                                            cin >> choice;

                                            CarData car;
                                            switch (choice) {
                                                case 1:
                                                    car = findCheapestCar(cars);
                                                    printCars(car);
                                                    printCar(car, "D:\\Course Work\\Code\\Database\\The cheapest car.txt");
                                                    break;
                                                case 2:
                                                    car = findExpensiveCar(cars);
                                                    printCars(car);
                                                    printCar(car, "D:\\Course Work\\Code\\Database\\The most expensive car.txt");
                                                    break;
                                                case 3:
                                                    car = findLowestMileage(cars);
                                                    printCars(car);
                                                    printCar(car, "D:\\Course Work\\Code\\Database\\Low mileage.txt");
                                                    break;
                                                case 4:
                                                    car = findHighestMileage(cars);
                                                    printCars(car);
                                                    printCar(car, "D:\\Course Work\\Code\\Database\\High mileage.txt");
                                                    break;
                                                case 5:
                                                    car = findMostEconomical(cars);
                                                    printCars(car);
                                                    printCar(car, "D:\\Course Work\\Code\\Database\\The most economical.txt");
                                                    break;
                                                case 6:
                                                    car = findLeastEconomical(cars);
                                                    printCars(car);
                                                    printCar(car, "D:\\Course Work\\Code\\Database\\Not the most economic.txt");
                                                    break;
                                                case 7:
                                                    car = findOldest(cars);
                                                    printCars(car);
                                                    printCar(car, "D:\\Course Work\\Code\\Database\\The oldest.txt");
                                                    break;
                                                case 8:
                                                    car = findYoungest(cars);
                                                    printCars(car);
                                                    printCar(car, "D:\\Course Work\\Code\\Database\\The newest.txt");
                                                    break;
                                                case 9:
                                                    cout << "Exiting admin menu.\n";
                                                    break;
                                                default:
                                                    cout << "Invalid choice. Please try again.\n";
                                            }
                                        } while (choice != 9);
                                    }
                                    case 'J': {
                                        int startYear, endYear;
                                        cout << "Enter start year: ";
                                        cin >> startYear;
                                        cout << "Enter end year: ";
                                        cin >> endYear;

                                        double averagePrice = CalculateAveragePrice(startYear, endYear);
                                        cout << "Average price of cars from " << startYear << " to " << endYear << ": " << averagePrice << endl;
                                        break;
                                    }
                                    case 'K': {
                                        string licensePlateToModify;
                                        cout << "Enter license plate of the car you want to modify: ";
                                        cin >> licensePlateToModify;
                                        ChangeCar(licensePlateToModify);
                                        break;
                                    }
                                    case 'L': {
                                        string licensePlate;
                                        cout << "Enter license plate of the sedan to modify: ";
                                        cin >> licensePlate;
                                        ChangeSed(licensePlate);
                                        CarData car;
                                        if (car.type == "Sedan") {
                                            ChangeSedIfNecessary(car);
                                        } else {
                                            cout << "The provided license plate does not belong to a sedan." << endl;
                                        }
                                        break;
                                    }
                                    case 'M': {
                                        string licensePlate;
                                        cout << "Enter license plate of the van to modify: ";
                                        cin >> licensePlate;
                                        ChangeVan(licensePlate);
                                        CarData car;
                                        if (car.type == "Van") {
                                            ChangeVanIfNecessary(car);
                                        } else {
                                            cout << "The provided license plate does not belong to a van." << endl;
                                        }
                                        break;
                                    }
                                    case 'N': {
                                        string licensePlate;
                                        cout << "Enter license plate of the car to return: ";
                                        cin >> licensePlate;
                                        ReturnCar(licensePlate);
                                        break;
                                    }
                                    case 'O': {
                                        string licensePlate;
                                        cout << "Enter license plate of the car to delete: ";
                                        cin >> licensePlate;
                                        vector<string> licensePlatesToDelete = {licensePlate};
                                        DeleteCarsSed(licensePlatesToDelete);
                                        break;
                                    }
                                    case 'P': {
                                        string licensePlate;
                                        cout << "Enter license plate of the van to delete: ";
                                        cin >> licensePlate;
                                        vector<string> licensePlatesToDelete = {licensePlate};
                                        DeleteCarsVan(licensePlatesToDelete);
                                        break;
                                    }
                                    case 'Q':
                                        vector<CarData> cars;
                                        Users user;
                                        user.setUserInfo();
                                        BuyOrReserveCar(cars, user);
                                        break;

                                }
                            }
                        } catch (IncorrectInputException &e) {
                            cerr << e.what();
                        }
                    }
                }
            } catch (IncorrectInputException &e) {
                cerr << e.what();
            }
        }

        if (cont == 'U') {
            string name, surname;
            cout << "Hello user!" << endl;
            Probels();
            cout << "You need to authorize" << endl;
            cout << "Enter your name: ";
            cin >> name;
            cout << "Enter your surname: ";
            cin >> surname;

            while (true) {
                Probels();
                cout << "Choose what do you want:" << endl;
                cout << "A - Exit!" << endl;
                cout << "Press Q - if you want to stop" << endl;
                Probels();

                char choice;
                cin >> choice;

                try {
                    if (choice != 'A' && choice != 'Q') {
                        throw IncorrectInputException();
                    }
                    switch (choice) {
                        case 'A': {
                            return 0;
                        }
                    }
                } catch (IncorrectInputException &e) {
                    cerr << e.what();
                }
            }
        }
    } catch (IncorrectInputException &e) {
        cerr << e.what();
    }

    return 0;
}





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




