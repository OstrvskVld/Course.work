#include <iostream>
#include "Car.h"
#include "Sedan.h"
#include "Engine.h"
#include "Function.h"
#include "User.h"
#include "IncorrectInputException.h"
#include "Interface.h"
#include <string>
#include <fstream>
#include "limits"
#include "CancelException.h"
using namespace std;



Car cars("", "", "", "", 0, 0, 0, 0, 0, "", "");
Sedan sedan1("","","","","","",0,0,0,0,0,
            "",0,Engine("","",""));
Engine engine1("","","");
Van van("","","","","","",0,0,0,
        0,0,0,0,Engine("","",""));
User users(0, "", "", "");
string cr;
string sorted;
int choice;
string brand, model, color, status,type;
int startYear, endYear;



template <typename T>
static T get_input(T& value) {
    while (true) {
        cin>>value;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cerr << "Invalid input. Please enter a value of the correct type." << endl;
        } else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return value;
        }
    }
}





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
        instructions << "   - Capitalize first words in all string values!\n";
        instructions << "   - Enter all string values without spaces! If there are several words, use “_”.\n";
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

                Car cars;
                Engine engine;
                Van van1;
                Sedan sedan;
                Interface1 interface1;
                User users1;
                CarData car;

                if (cont == 'A') {
                    string password;
                    int attempts = 0;
                    const int maxAttempts = 3;
                    while (attempts < maxAttempts) {
                        try {
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
                                        cout << "K - Delete Car/Sedans" << endl;
                                        cout << "L - Delete Car/Vans" << endl;
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
                                                throw CancelException();
                                            } else {
                                                switch (choice) {
                                                    case 'A':
                                                        interface1.A4();
                                                        AddCars(cars);
                                                        cars.printInfo();
                                                        Probels();
                                                        break;
                                                    case 'B':
                                                        interface1.A1();
                                                        AddinfSed(sedan);
                                                        sedan.printInfo();
                                                        cout << "Add information about the sedan!" << endl;
                                                        Probels();
                                                        break;
                                                    case 'C':
                                                        interface1.A2();
                                                        AddinfVan(van);
                                                        van.printInfo();
                                                        cout << "Add information about the van!" << endl;
                                                        Probels();
                                                        break;
                                                    case 'D':
                                                        interface1.A4();
                                                        ReadCars(cars);
                                                        cout << "Read information about cars!" << endl;
                                                        Probels();
                                                        break;
                                                    case 'E':
                                                        interface1.A1();
                                                        ReadSed(sedan);
                                                        cout << "Read information about sedans!" << endl;
                                                        Probels();
                                                        break;
                                                    case 'F':
                                                        interface1.A2();
                                                        ReadVan(van);
                                                        cout << "Read information about vans!" << endl;
                                                        Probels();
                                                        break;
                                                    case 'G': {
                                                        CarData car;
                                                        SedanData sedan;
                                                        VanData van;
                                                        interface1.A4();
                                                        string licensePlateToModify;
                                                        cout << "Enter license plate of the car you want to modify: ";
                                                        cin >> licensePlateToModify;
                                                        ChangeCar(licensePlateToModify);
                                                        Probels();
                                                        break;
                                                    }
                                                    case 'H': {
                                                        SedanData sedan;
                                                        interface1.A1();
                                                        string licensePlate;
                                                        cout << "Enter license plate of the sedan to modify: ";
                                                        cin >> licensePlate;
                                                        ChangeSed(licensePlate);
                                                        Probels();
                                                        break;
                                                    }
                                                    case 'I': {
                                                        VanData van;
                                                        interface1.A2();
                                                        string licensePlate;
                                                        cout << "Enter license plate of the van to modify: ";
                                                        cin >> licensePlate;
                                                        ChangeVan(licensePlate);
                                                        Probels();
                                                        break;
                                                    }
                                                    case 'J': {
                                                        interface1.A4();
                                                        string licensePlate;
                                                        cout << "Enter license plate of the car to return: ";
                                                        cin >> licensePlate;
                                                        ReturnCar(licensePlate);
                                                        Probels();
                                                        break;
                                                    }
                                                    case 'K': {
                                                        interface1.A4();
                                                        string licensePlate;
                                                        cout << "Enter license plate of the car to delete: ";
                                                        cin >> licensePlate;
                                                        vector<string> licensePlatesToDelete = {licensePlate};
                                                        DeleteCarsSed(licensePlatesToDelete);
                                                        Probels();
                                                        break;
                                                    }
                                                    case 'L': {
                                                        interface1.A4();
                                                        string licensePlate;
                                                        cout << "Enter license plate of the van to delete: ";
                                                        cin >> licensePlate;
                                                        vector<string> licensePlatesToDelete = {licensePlate};
                                                        DeleteCarsVan(licensePlatesToDelete);
                                                        Probels();
                                                        break;
                                                    }
                                                }
                                            }
                                        }
                                        catch (IncorrectInputException &e) {
                                            cerr << e.what();
                                        }
                                        catch (CancelException& e)
                                        {
                                            throw;
                                        }
                                    }
                                }
                            }
                            catch (IncorrectInputException &e) {
                                if (attempts >= maxAttempts) {
                                }
                                cerr << e.what();
                            }
                            catch (CancelException& e)
                            {
                                throw;
                            }
                        }
                        catch (IncorrectInputException &e) {
                            cerr << e.what() << endl;
                            if (attempts >= maxAttempts) {
                            }
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            cout << "Attempts left: " << (maxAttempts - attempts) << endl;
                        }
                        catch (CancelException& e)
                        {
                            throw;
                        }
                    }

                }

                if (cont == 'U') {
                    interface1.A3();
                    char userType;
                    cout << "Are you a new user (N) or an existing user (E)? (Enter N or E): " << endl;
                    cin >> userType;
                    if (userType == 'N' || userType == 'E')
                    {
                        if (userType == 'N') {
                            cout << "Hello new user!" << endl;
                            Probels();
                            cout << "You need to register" << endl;
                            users1.setUserInfo();
                        }
                        else if (userType == 'E') {
                            string name, phone;
                            cout << "Hello existing user!" << endl;
                            Probels();
                            cout << "You need to authorize" << endl;

                            cout << "Enter your name: " << endl;
                            cin.ignore();
                            getline(cin, name);
                            cout << "Enter your phone: " << endl;
                            getline(cin, phone);

                            if (users1.loginUser(name,phone)) {
                                cout << "Authorization successful!" << endl;
                            } else {
                                cout << "Authorization failed! User not found." << endl;
                                throw CancelException();
                            }
                        }
                        else {
                            cout << "Invalid option! Please enter N for new user or E for existing user." << endl;
                        }
                        while (true) {
                            Probels();
                            cout << "Choose what you want to do:" << endl;
                            cout << "A - Read Car Info" << endl;
                            cout << "B - Read Sedan Info" << endl;
                            cout << "C - Read Van Info" << endl;
                            cout << "D - Sort Car" << endl;
                            cout << "E - Search Criteria of Car" << endl;
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
                                    throw CancelException();
                                } else {

                                    switch (choice) {
                                        case 'A':
                                            interface1.A4();
                                            ReadCars(cars);
                                            cout << "Information about cars displayed!" << endl;
                                            Probels();
                                            break;
                                        case 'B':
                                            interface1.A1();
                                            ReadSed(sedan);
                                            cout << "Information about sedans displayed!" << endl;
                                            Probels();
                                            break;
                                        case 'C':
                                            interface1.A2();
                                            ReadVan(van);
                                            cout << "Information about vans displayed!" << endl;
                                            Probels();
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
                                            get_input(sortChoice);

                                            switch (sortChoice) {
                                                case 1:
                                                    sorted = R"(D:\Course Work\Code\Database\Sort by year up.txt)";
                                                    Sort(cr, sorted, 1, true);
                                                    Probels();
                                                    break;
                                                case 2:
                                                    sorted = R"(D:\Course Work\Code\Database\Sort by year down.txt)";
                                                    Sort(cr, sorted, 1, false);
                                                    Probels();
                                                    break;
                                                case 3:
                                                    sorted = R"(D:\Course Work\Code\Database\Sort by price down.txt)";
                                                    Sort(cr, sorted, 2, false);
                                                    Probels();
                                                    break;
                                                case 4:
                                                    sorted = R"(D:\Course Work\Code\Database\Sort by price up.txt)";
                                                    Sort(cr, sorted, 2, true);
                                                    Probels();
                                                    break;
                                                case 5:
                                                    sorted = R"(D:\Course Work\Code\Database\Sort by mileage down.txt)";
                                                    Sort(cr, sorted, 3, false);
                                                    Probels();
                                                    break;
                                                case 6:
                                                    sorted = R"(D:\Course Work\Code\Database\Sort by mileage up.txt)";
                                                    Sort(cr, sorted, 3, true);
                                                    Probels();
                                                    break;
                                                case 7:
                                                    cout << "Exiting sorting menu..." << endl;
                                                    break;
                                                default:
                                                    cout << "Invalid choice!" << endl;
                                                    break;
                                            }
                                            Probels();
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
                                                 << "7. Search by license plate\n"
                                                 << "8. Exit\n";
                                            int searchChoice;
                                            get_input(searchChoice);

                                            switch (searchChoice) {
                                                case 1:
                                                    cout << "Enter brand: ";
                                                    getline(cin, searchCriteria);
                                                    SearchCarsByBrand(searchCriteria);
                                                    Probels();
                                                    break;
                                                case 2:
                                                    cout << "Enter model: ";
                                                    getline(cin, searchCriteria);
                                                    SearchCarsByModel(searchCriteria);
                                                    Probels();
                                                    break;
                                                case 3:
                                                    cout << "Enter color: ";
                                                    getline(cin, searchCriteria);
                                                    SearchCarsByColor(searchCriteria);
                                                    Probels();
                                                    break;
                                                case 4:
                                                    cout << "Enter type: ";
                                                    getline(cin, searchCriteria);
                                                    SearchCarsByType(searchCriteria);
                                                    Probels();
                                                    break;
                                                case 5:
                                                    cout << "Enter status (e.g., available, reserved): ";
                                                    getline(cin, searchCriteria);
                                                    SearchCarsByStatus(searchCriteria);
                                                    Probels();
                                                    break;
                                                case 6: {
                                                    string brand, model;
                                                    cout << "Enter brand: ";
                                                    getline(cin, brand);
                                                    cout << "Enter model: ";
                                                    getline(cin, model);
                                                    SearchCarsByModBr(brand, model);
                                                    Probels();
                                                    break;
                                                }
                                                case 7: {
                                                    cout << "Enter license plate of car: ";
                                                    getline(cin, searchCriteria);
                                                    SearchCarsByLicensePlate(searchCriteria);
                                                    Probels();
                                                    break;
                                                }
                                                case 8:
                                                    cout << "Exiting search menu..." << endl;
                                                    break;
                                                default:
                                                    cout << "Invalid choice!" << endl;
                                                    break;
                                            }
                                            Probels();
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
                                                get_input(choice);

                                                CarData cheapestCar = findCheapestCar(cars);
                                                CarData expensiveCar = findExpensiveCar(cars);
                                                CarData lowestMileageCar = findLowestMileage(cars);
                                                CarData highestMileageCar = findHighestMileage(cars);
                                                CarData LeastEconomicalCar = findLeastEconomical(cars);
                                                CarData MostEconomicalCar = findMostEconomical(cars);
                                                CarData OldCar = findOldest(cars);
                                                CarData NewCar = findYoungest(cars);
                                                switch (choice) {
                                                    case 1:
                                                        printCar(cheapestCar,
                                                                 "D:\\Course Work\\Code\\Database\\The cheapest car.txt");
                                                        printCars(cheapestCar);
                                                        Probels();
                                                        break;
                                                    case 2:
                                                        printCar(expensiveCar,
                                                                 "D:\\Course Work\\Code\\Database\\The most expensive car.txt");
                                                        printCars(expensiveCar);
                                                        Probels();
                                                        break;
                                                    case 3:
                                                        printCar(lowestMileageCar,
                                                                 "D:\\Course Work\\Code\\Database\\Low mileage.txt");
                                                        printCars(lowestMileageCar);
                                                        Probels();
                                                        break;
                                                    case 4:
                                                        printCar(highestMileageCar,
                                                                 "D:\\Course Work\\Code\\Database\\High mileage.txt");
                                                        printCars(highestMileageCar);
                                                        Probels();
                                                        break;
                                                    case 5:
                                                        printCar(MostEconomicalCar,
                                                                 "D:\\Course Work\\Code\\Database\\The most economical.txt");
                                                        printCars(MostEconomicalCar);
                                                        Probels();
                                                        break;
                                                    case 6:
                                                        printCar(LeastEconomicalCar,
                                                                 "D:\\Course Work\\Code\\Database\\Not the most economic.txt");
                                                        printCars(LeastEconomicalCar);
                                                        Probels();
                                                        break;
                                                    case 7:
                                                        printCar(OldCar, "D:\\Course Work\\Code\\Database\\The oldest.txt");
                                                        printCars(OldCar);
                                                        Probels();
                                                        break;
                                                    case 8:
                                                        printCar(NewCar, "D:\\Course Work\\Code\\Database\\The newest.txt");
                                                        printCars(NewCar);
                                                        Probels();
                                                        break;
                                                    case 9:
                                                        cout << "Exiting menu.\n";
                                                        break;
                                                    default:
                                                        cout << "Invalid choice. Please try again.\n";
                                                }
                                            } while (choice != 9);
                                            Probels();
                                            break;
                                        }
                                        case 'G': {
                                            interface1.A4();
                                            int startYear, endYear;
                                            cout << "Enter start year: ";
                                            get_input(startYear);
                                            cout << "Enter end year: ";
                                            get_input(endYear);

                                            double averagePrice = CalculateAveragePrice(startYear, endYear);
                                            cout << "Average price of cars from " << startYear << " to " << endYear << ": "
                                                 << averagePrice << endl;
                                            Probels();
                                            break;
                                        }
                                        case 'H': {
                                            vector<CarData> cars;
                                            BuyOrReserveCar(cars, users1);
                                            Probels();
                                            break;
                                        }
                                    }

                                }
                            }
                            catch (IncorrectInputException &e) {
                                cerr << e.what();
                            }
                            catch (CancelException& e)
                            {
                                throw;
                            }
                        }
                    }
                    else {
                        throw runtime_error("Try again!!!");
                    }



                }
                return 0;
            }
            catch (runtime_error& e)
            {
                cout << e.what() << endl;
            }
            catch (IncorrectInputException &e) {
                cerr << e.what();
            }
            catch (CancelException& e)
            {
            }
        }

    }







