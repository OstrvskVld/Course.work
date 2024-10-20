#include <iostream>
#include "Cars.h"
#include "Sedan.h"
#include "Engine.h"
#include "Functions.h"
#include "memory"
#include "Users.h"
#include "IncorrectInputException.h"
#include "Interface.h"
#include <string>
#include <fstream>

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
    ofstream instructions(R"(D:\Course Work\Code\Database\Instructions.txt)", ios::out | ios::trunc);
    if (instructions.is_open()) {
        instructions << "# User Instructions for the Program\n\n";
        instructions << "1. **Data Entry**:\n";
        instructions << "   - Do not enter **int** values where a **string** is required. For example, when entering a vehicle's license plate, use letters and numbers.\n";
        instructions << "   - Avoid spaces in fields that do not allow spaces (e.g., license plates).\n";
        instructions << "   - If the program asks for input data (e.g., vehicle model), enter it without extra characters or spaces.\n\n";

        instructions << "2. **Menu Operations**:\n";
        instructions << "   - When selecting an option in the menu (A, B, C, etc.), ensure that you enter only one character that corresponds to your choice.\n";
        instructions << "   - If you enter an invalid character, the program will display an error message and prompt you to try again.\n\n";

        instructions << "3. **Admin Password**:\n";
        instructions << "   - To access administrative functions, you must enter the correct password. Currently, the password is \"123\".\n";
        instructions << "   - If you enter an incorrect password, the program will display an error message and allow you to retry.\n\n";

        instructions << "4. **Exiting the Program**:\n";
        instructions << "   - You can exit the program at any time by entering the character **Q**. The program will confirm the exit.\n\n";

        instructions << "5. **Additional Recommendations**:\n";
        instructions << "   - Always check the entered data before confirming actions.\n";
        instructions << "   - If you have questions or encounter errors, refer to the documentation or seek assistance.\n";

        instructions.close();
        cout << "Instructions successfully created!\n";
    } else {
        cout << "Failed to create instructions file.\n";
    }

    while (true) {
        cout << "WELCOME!" << endl;
        cout << "Enter A if you are the Admin" << endl;
        cout << "Enter U if you are the User" << endl;
        cout << "Enter Q to Exit the program" << endl;
        cout << "Enter B to read the instruction" << endl;
        Probels();

        char cont;
        cin >> cont;

        try {
            if (cont != 'A' && cont != 'U' && cont != 'Q' && cont != 'B') {
                throw IncorrectInputException();
            }

            if (cont == 'Q') {
                cout << "Exiting program.\n";
                break;
            }

            if (cont == 'B') {
                ifstream instructions(R"(D:\Course Work\Code\Database\Instructions.txt)");
                if (instructions.is_open()) {
                    string line;
                    while (getline(instructions, line)) {
                        cout << line << endl;
                    }
                    instructions.close();
                } else {
                    cout << "Failed to open instructions file for reading.\n";
                }
                continue;
            }

            Cars cars;
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
                    if (password != "123") {
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
                            cout << "G - Change Car Details" << endl;
                            cout << "H - Change Sedan Details" << endl;
                            cout << "I - Change Van Details" << endl;
                            cout << "J - Return Car" << endl;
                            cout << "K - Delete Cars/Sedans" << endl;
                            cout << "L - Delete Cars/Vans" << endl;
                            cout << "M - Return to Main Menu" << endl;
                            cout << "Q - Exit Program" << endl;
                            Probels();

                            char choice;
                            cin >> choice;

                            try {
                                if (choice != 'A' && choice != 'B' && choice != 'C' && choice != 'D'
                                    && choice != 'E' && choice != 'F' && choice != 'G'
                                    && choice != 'H' && choice != 'I' && choice != 'J' && choice != 'K'
                                    && choice != 'L' && choice != 'M' && choice != 'Q') {
                                    throw IncorrectInputException();
                                } else if (choice == 'Q') {
                                    cout << "Exiting program.\n";
                                    return 0;
                                } else if (choice == 'M') {
                                    cout << "Returning to main menu.\n";
                                    continue;
                                } else {
                                    switch (choice) {
                                        case 'A':
                                            interface1.A4();
                                            AddCars(cars);
                                            cars.printInfo();
                                            break;
                                        case 'B':
                                            interface1.A1();
                                            AddinfSed(sedan);
                                            sedan.printInfo();
                                            cout << "Add information about the sedan!" << endl;
                                            break;
                                        case 'C':
                                            interface1.A2();
                                            AddinfVan(van);
                                            van.printInfo();
                                            cout << "Add information about the van!" << endl;
                                            break;
                                        case 'D':
                                            interface1.A4();
                                            ReadCars(cars);
                                            cout << "Read information about cars!" << endl;
                                            break;
                                        case 'E':
                                            interface1.A1();
                                            ReadSed(sedan);
                                            cout << "Read information about sedans!" << endl;
                                            break;
                                        case 'F':
                                            interface1.A2();
                                            ReadVan(van);
                                            cout << "Read information about vans!" << endl;
                                            break;
                                        case 'G': {
                                            interface1.A4();
                                            string licensePlateToModify;
                                            cout << "Enter license plate of the car you want to modify: ";
                                            cin >> licensePlateToModify;
                                            ChangeCar(licensePlateToModify);
                                            break;
                                        }
                                        case 'H': {
                                            interface1.A1();
                                            string licensePlate;
                                            cout << "Enter license plate of the sedan to modify: ";
                                            cin >> licensePlate;
                                            ChangeSed(licensePlate);
                                            CarData car;
                                            if (car.type == "Sedan") {
                                                ChangeSedIfNecessary(car);
                                            } else {
                                                cout << "The provided license plate does not belong to a sedan."
                                                     << endl;
                                            }
                                            break;
                                        }
                                        case 'I': {
                                            interface1.A2();
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
                                        case 'J': {
                                            interface1.A4();
                                            string licensePlate;
                                            cout << "Enter license plate of the car to return: ";
                                            cin >> licensePlate;
                                            ReturnCar(licensePlate);
                                            break;
                                        }
                                        case 'K': {
                                            interface1.A4();
                                            string licensePlate;
                                            cout << "Enter license plate of the car to delete: ";
                                            cin >> licensePlate;
                                            vector<string> licensePlatesToDelete = {licensePlate};
                                            DeleteCarsSed(licensePlatesToDelete);
                                            break;
                                        }
                                        case 'L': {
                                            interface1.A4();
                                            string licensePlate;
                                            cout << "Enter license plate of the van to delete: ";
                                            cin >> licensePlate;
                                            vector<string> licensePlatesToDelete = {licensePlate};
                                            DeleteCarsVan(licensePlatesToDelete);
                                            break;
                                        }
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
                interface1.A3();
                string name, surname;
                cout << "Hello user!" << endl;
                Probels();
                cout << "You need to authorize" << endl;
                cout << "Enter your name: ";
                cin >> name;
                cout << "Enter your surname: ";
                cin >> surname;

                users1.setUserInfo();

                while (true) {
                    Probels();
                    cout << "Choose what you want to do:" << endl;
                    cout << "A - Read Car Info" << endl;
                    cout << "B - Read Sedan Info" << endl;
                    cout << "C - Read Van Info" << endl;
                    cout << "D - Sort Cars" << endl;
                    cout << "E - Search Criteria of Cars" << endl;
                    cout << "F - Search by Smaller or Larger Values" << endl;
                    cout << "G - Calculate Average Price for a Year Range" << endl;
                    cout << "H - Buy or Reserve Car" << endl;
                    cout << "M - Return to Main Menu" << endl;
                    cout << "Q - Exit Program" << endl;
                    Probels();

                    char choice;
                    cin >> choice;

                    try {
                        if (choice != 'A' && choice != 'B' && choice != 'C' && choice != 'D' &&
                            choice != 'E' && choice != 'F' && choice != 'G' && choice != 'H' &&
                            choice != 'M' && choice != 'Q') {
                            throw IncorrectInputException();
                        } else if (choice == 'Q') {
                            cout << "Exiting program.\n";
                            return 0;
                        } else if (choice == 'M') {
                            cout << "Returning to main menu.\n";
                            continue;
                        } else {

                            switch (choice) {
                                case 'A':
                                    interface1.A4();
                                    ReadCars(cars);
                                    cout << "Information about cars displayed!" << endl;
                                    break;
                                case 'B':
                                    interface1.A1();
                                    ReadSed(sedan);
                                    cout << "Information about sedans displayed!" << endl;
                                    break;
                                case 'C':
                                    interface1.A2();
                                    ReadVan(van);
                                    cout << "Information about vans displayed!" << endl;
                                    break;
                                case 'D': {
                                    interface1.A4();
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
                                    continue;
                                }
                                case 'E': {
                                    interface1.A4();
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
                                        case 1:
                                            cout << "Enter brand: ";
                                            getline(cin, searchCriteria);
                                            SearchCarsByBrand(searchCriteria);
                                            break;
                                        case 2:
                                            cout << "Enter model: ";
                                            getline(cin, searchCriteria);
                                            SearchCarsByModel(searchCriteria);
                                            break;
                                        case 3:
                                            cout << "Enter color: ";
                                            getline(cin, searchCriteria);
                                            SearchCarsByColor(searchCriteria);
                                            break;
                                        case 4:
                                            cout << "Enter type: ";
                                            getline(cin, searchCriteria);
                                            SearchCarsByType(searchCriteria);
                                            break;
                                        case 5:
                                            cout << "Enter status (e.g., available, reserved): ";
                                            getline(cin, searchCriteria);
                                            SearchCarsByStatus(searchCriteria);
                                            break;
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
                                case 'F': {
                                    interface1.A4();
                                    vector<CarData> cars = SearchCars(R"(D:\Course Work\Code\Database\Cars.txt)");
                                    int choice;

                                    do {
                                        cout << "\n=== User Menu ===\n";
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
                                                break;
                                            case 2:
                                                car = findExpensiveCar(cars);
                                                printCars(car);
                                                break;
                                            case 3:
                                                car = findLowestMileage(cars);
                                                printCars(car);
                                                break;
                                            case 4:
                                                car = findHighestMileage(cars);
                                                printCars(car);
                                                break;
                                            case 5:
                                                car = findMostEconomical(cars);
                                                printCars(car);
                                                break;
                                            case 6:
                                                car = findLeastEconomical(cars);
                                                printCars(car);
                                                break;
                                            case 7:
                                                car = findOldest(cars);
                                                printCars(car);
                                                break;
                                            case 8:
                                                car = findYoungest(cars);
                                                printCars(car);
                                                break;
                                            case 9:
                                                cout << "Exiting menu.\n";
                                                break;
                                            default:
                                                cout << "Invalid choice. Please try again.\n";
                                        }
                                    } while (choice != 9);
                                    break;
                                }
                                case 'G': {
                                    interface1.A4();
                                    int startYear, endYear;
                                    cout << "Enter start year: ";
                                    cin >> startYear;
                                    cout << "Enter end year: ";
                                    cin >> endYear;

                                    double averagePrice = CalculateAveragePrice(startYear, endYear);
                                    cout << "Average price of cars from " << startYear << " to " << endYear << ": "
                                         << averagePrice << endl;
                                    break;
                                }
                                case 'H': {
                                    vector<CarData> cars;
                                    Users user;
                                    user.setUserInfo();
                                    BuyOrReserveCar(cars, user);
                                    break;
                                }
                            }

                        }
                    }
                    catch (IncorrectInputException & e)
                    {
                        cerr << e.what();
                    }
                }

            }
            return 0;
        }
        catch (IncorrectInputException & e)
        {
            cerr << e.what();
        }
    }
}




