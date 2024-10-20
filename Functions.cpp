
#include "Functions.h"
#include <iostream>
#include "memory"
#include <fstream>
#include "Cars.h"
#include "Van.h"
#include "Sedan.h"
#include "Engine.h"
#include "AnotherVariant.h"
#include "IncorrectInputException.h"
#include "vector"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>
#include <sstream>





using namespace std;

void Probels(){
    cout<<endl<<"--------------------------"<<endl;
};

void AddCars(Cars &cars) {
    try {
        cout << "You want to add a new car: " << endl;

        shared_ptr<string> type{new string{""}};
        for (int attempts = 0; attempts < 3; ++attempts) {
            cout << "What type of transportation? (Sedan or Van): ";
            cin >> *type;

            if (*type == "Sedan" || *type == "Van") {
                break;
            } else {
                cerr << "Incorrect input. Please try again." << endl;
                if (attempts == 2) throw IncorrectInputException();
            }
        }
        cars.setType(*type);

        shared_ptr<string> brand{new string{""}};
        cout << "What is the brand of the transport? " << endl;
        for (int attempts = 0; attempts < 3; ++attempts) {
            cin >> *brand;
            if (!brand->empty()) {
                break;
            } else {
                cerr << "Brand cannot be empty. Please try again." << endl;
                if (attempts == 2) throw IncorrectInputException();
            }
        }
        cars.setBrand(*brand);

        shared_ptr<string> model{new string{""}};
        cout << "What is the model of the car? " << endl;
        for (int attempts = 0; attempts < 3; ++attempts) {
            cin >> *model;
            if (!model->empty()) {
                break;
            } else {
                cerr << "Model cannot be empty. Please try again." << endl;
                if (attempts == 2) throw IncorrectInputException();
            }
        }
        cars.setModel(*model);

        shared_ptr<string> color{new string{""}};
        cout << "What is the color of the car? " << endl;
        for (int attempts = 0; attempts < 3; ++attempts) {
            cin >> *color;
            if (!color->empty()) {
                break;
            } else {
                cerr << "Color cannot be empty. Please try again." << endl;
                if (attempts == 2) throw IncorrectInputException();
            }
        }
        cars.setColor(*color);

        shared_ptr<double> fuel{new double{0.0}};
        cout << "What is the fuel consumption on 100km? " << endl;
        for (int attempts = 0; attempts < 3; ++attempts) {
            cin >> *fuel;
            if (*fuel > 0) {
                break;
            } else {
                cerr << "Fuel consumption must be positive. Please try again." << endl;
                if (attempts == 2) throw IncorrectInputException();
            }
        }
        cars.setFuel(*fuel);

        shared_ptr<double> mileage{new double{0.0}};
        cout << "What is the mileage of the car? " << endl;
        for (int attempts = 0; attempts < 3; ++attempts) {
            cin >> *mileage;
            if (*mileage >= 0) {
                break;
            } else {
                cerr << "Mileage cannot be negative. Please try again." << endl;
                if (attempts == 2) throw IncorrectInputException();
            }
        }
        cars.setMileage(*mileage);

        shared_ptr<int> doors{new int{0}};
        cout << "How many doors? " << endl;
        for (int attempts = 0; attempts < 3; ++attempts) {
            cin >> *doors;
            if (*doors > 0) {
                break;
            } else {
                cerr << "Number of doors must be positive. Please try again." << endl;
                if (attempts == 2) throw IncorrectInputException();
            }
        }
        cars.setDoors(*doors);

        shared_ptr<int> production{new int{0}};
        cout << "What is the year of production? " << endl;
        for (int attempts = 0; attempts < 3; ++attempts) {
            cin >> *production;
            if (*production > 0 && *production <= 2024) {
                break;
            } else {
                cerr << "Invalid production year. Please try again." << endl;
                if (attempts == 2) throw IncorrectInputException();
            }
        }
        cars.setYear(*production);

        shared_ptr<double> price{new double{0.0}};
        cout << "What is the price of the car? " << endl;
        for (int attempts = 0; attempts < 3; ++attempts) {
            cin >> *price;
            if (*price > 0) {
                break;
            } else {
                cerr << "Price must be positive. Please try again." << endl;
                if (attempts == 2) throw IncorrectInputException();
            }
        }
        cars.setPrice(*price);

        shared_ptr<string> inventoryStatus{new string{""}};
        cout << "Vehicle availability status (Available, Sold, Reserved): " << endl;
        for (int attempts = 0; attempts < 3; ++attempts) {
            cin >> *inventoryStatus;
            if (*inventoryStatus == "Available" || *inventoryStatus == "Sold" || *inventoryStatus == "Reserved") {
                break;
            } else {
                cerr << "Invalid status. Please try again." << endl;
                if (attempts == 2) throw AnotherVariant();
            }
        }
        cars.setStatus(*inventoryStatus);

        shared_ptr<string> licenseplate{new string{""}};
        cout << "License plate number of the car: " << endl;
        for (int attempts = 0; attempts < 3; ++attempts) {
            cin >> *licenseplate;
            if (!licenseplate->empty()) {
                break;
            } else {
                cerr << "License plate cannot be empty. Please try again." << endl;
                if (attempts == 2) throw IncorrectInputException();
            }
        }
        cars.setPlate(*licenseplate);

        CarData carData;
        carData.type = *type;
        carData.brand = *brand;
        carData.model = *model;
        carData.color = *color;
        carData.fuel = *fuel;
        carData.mileage = *mileage;
        carData.doors = *doors;
        carData.year = *production;
        carData.price = *price;
        carData.status = *inventoryStatus;
        carData.licensePlate = *licenseplate;

        ofstream foutCar(R"(D:\Course Work\Code\Database\Cars.txt)", ios_base::app);
        foutCar << *type << "\t" << *brand << "\t" << *model << "\t"
                << *color << "\t" << *fuel << "\t" << *mileage << "\t" << *doors << "\t"
                << *production << "\t" << *price << "\t" << *inventoryStatus << "\t" << *licenseplate << endl;
        foutCar.close();
        Probels();
        if (cars.getStatus() == "Available") {
            WriteAvailableCars(carData);
        } else if (cars.getStatus() == "Sold") {
            WriteSoldCars(carData);
        } else if (cars.getStatus() == "Reserved") {
            WriteReservedCars(carData);
        }

        cout << "Car added successfully!" << endl;
    } catch (const IncorrectInputException &e) {
        cerr << e.what() << " Exiting program." << endl;
        exit(1);
    } catch (const AnotherVariant &e) {
        cerr << e.what() << " Exiting program." << endl;
        exit(1);
    } catch (const exception &e) {
        cerr << "An unexpected error occurred: " << e.what() << endl;
        exit(1);
    }
}
void WriteAvailableCars(const CarData& car){
    ofstream fout(R"(D:\Course Work\Code\Database\Available cars.txt)", ios_base::app);
    if (!fout.is_open()) {
        cerr << "Error opening file: Available cars.txt" << endl;
        return;
    }

    fout << car.type << "\t" << car.brand << "\t" << car.model << "\t" << car.color << "\t" << car.fuel
         << "\t" << car.mileage << "\t" << car.doors << "\t" << car.year << "\t" << car.price << "\t"
         << car.status << "\t" << car.licensePlate << endl;
    fout.close();
}

void WriteSoldCars(const CarData& car) {
    ofstream fout(R"(D:\Course Work\Code\Database\Sold cars.txt)", ios_base::app);
    if (!fout.is_open()) {
        cerr << "Error opening file: Sold cars.txt" << endl;
        return;
    }

    fout << car.type << "\t" << car.brand << "\t" << car.model << "\t" << car.color << "\t" << car.fuel
         << "\t" << car.mileage << "\t" << car.doors << "\t" << car.year << "\t" << car.price << "\t"
         << car.status << "\t" << car.licensePlate << endl;
    fout.close();
}

void WriteReservedCars(const CarData& car){
    ofstream fout(R"(D:\Course Work\Code\Database\Reserved cars.txt)", ios_base::app);
    if (!fout.is_open()) {
        cerr << "Error opening file: Reserved cars.txt" << endl;
        return;
    }

    fout << car.type << "\t" << car.brand << "\t" << car.model << "\t" << car.color << "\t" << car.fuel
         << "\t" << car.mileage << "\t" << car.doors << "\t" << car.year << "\t" << car.price << "\t"
         << car.status << "\t" << car.licensePlate << endl;
    fout.close();
}




void AddinfSed(Sedan &sedan) {
    Engine engine1;
    Cars car1;

    cout << "Choose which sedan you want to know more about: " << endl;
    ifstream finCar(R"(D:\Course Work\Code\Database\Cars.txt)");
    if (!finCar.is_open()) {
        cerr << "Error opening file!" << endl;
        return;
    }

    shared_ptr<string> nazvmar{new string{""}};
    for (int attempts = 0; attempts < 3; ++attempts) {
        cout << "What is the brand of the transport? ";
        cin >> *nazvmar;
        if (!nazvmar->empty()) {
            break;
        } else {
            cout << "Invalid input. Please try again." << endl;
        }
    }

    if (nazvmar->empty()) {
        cout << "Too many incorrect attempts. Exiting program." << endl;
        return;
    }

    shared_ptr<string> nazvamod{new string{""}};
    for (int attempts = 0; attempts < 3; ++attempts) {
        cout << "What is the model of the car? ";
        cin >> *nazvamod;
        if (!nazvamod->empty()) {
            break;
        } else {
            cout << "Invalid input. Please try again." << endl;
        }
    }

    if (nazvamod->empty()) {
        cout << "Too many incorrect attempts. Exiting program." << endl;
        return;
    }

    shared_ptr<string> nazvaplate{new string{""}};
    for (int attempts = 0; attempts < 3; ++attempts) {
        cout << "What is the license plate of the sedan? ";
        cin >> *nazvaplate;
        if (!nazvaplate->empty()) {
            break;
        } else {
            cout << "Invalid input. Please try again." << endl;
        }
    }

    if (nazvaplate->empty()) {
        cout << "Too many incorrect attempts. Exiting program." << endl;
        return;
    }

    shared_ptr<string> type{new string{""}};
    shared_ptr<string> brand{new string{""}};
    shared_ptr<string> model{new string{""}};
    shared_ptr<string> color{new string{""}};
    shared_ptr<double> fuel{new double{0.0}};
    shared_ptr<double> mileage{new double{0.0}};
    shared_ptr<int> doors{new int{0}};
    shared_ptr<int> production{new int{0}};
    shared_ptr<double> price{new double{0.0}};
    shared_ptr<string> inventoryStatus{new string{""}};
    shared_ptr<string> licenseplate{new string{""}};

    while (finCar >> *type >> *brand >> *model >> *color >> *fuel >> *mileage >> *doors >> *production >> *price >>
                  *inventoryStatus >> *licenseplate) {
        Cars cars(*type, *brand, *model, *color, *fuel, *mileage, *doors, *production,
                  *price, *inventoryStatus, *licenseplate);

        if (cars.getBrand() == *nazvmar && cars.getModel() == *nazvamod && cars.getPlate() == *nazvaplate) {
            sedan.setType(*type);
            sedan.setBrand(*brand);
            sedan.setModel(*model);
            sedan.setColor(*color);
            sedan.setFuel(*fuel);
            sedan.setMileage(*mileage);
            sedan.setDoors(*doors);
            sedan.setYear(*production);
            sedan.setPrice(*price);
            sedan.setStatus(*inventoryStatus);
            sedan.setPlate(*licenseplate);

            shared_ptr<string> typeofroof{new string{""}};
            for (int attempts = 0; attempts < 3; ++attempts) {
                cout << "Type of roof: ";
                cin >> *typeofroof;
                if (!typeofroof->empty()) {
                    break;
                } else {
                    cout << "Invalid input. Please try again." << endl;
                }
            }

            if (typeofroof->empty()) {
                cout << "Too many incorrect attempts. Exiting program." << endl;
                return;
            }

            shared_ptr<int> maxspeed{new int{0}};
            for (int attempts = 0; attempts < 3; ++attempts) {
                cout << "Max speed: ";
                if (cin >> *maxspeed) {
                    break;
                } else {
                    cout << "Invalid input. Please try again." << endl;
                    return;
                }
            }

            if (*maxspeed <= 0) {
                cout << "Too many incorrect attempts. Exiting program." << endl;
                return;
            }

            shared_ptr<string> engineCapacity{new string{""}};
            for (int attempts = 0; attempts < 3; ++attempts) {
                cout << "Engine capacity: ";
                cin >> *engineCapacity;
                if (!engineCapacity->empty()) {
                    break;
                } else {
                    cout << "Invalid input. Please try again." << endl;
                }
            }

            if (engineCapacity->empty()) {
                cout << "Too many incorrect attempts. Exiting program." << endl;
                return;
            }

            shared_ptr<string> power{new string{""}};
            for (int attempts = 0; attempts < 3; ++attempts) {
                cout << "Power: ";
                cin >> *power;
                if (!power->empty()) {
                    break;
                } else {
                    cout << "Invalid input. Please try again." << endl;
                }
            }

            if (power->empty()) {
                cout << "Too many incorrect attempts. Exiting program." << endl;
                return;
            }

            shared_ptr<string> engineType{new string{""}};
            for (int attempts = 0; attempts < 3; ++attempts) {
                cout << "Engine type: ";
                cin >> *engineType;
                if (!engineType->empty()) {
                    break;
                } else {
                    cout << "Invalid input. Please try again." << endl;
                }
            }

            if (engineType->empty()) {
                cout << "Too many incorrect attempts. Exiting program." << endl;
                return;
            }
            sedan.setTypeofroof(*typeofroof);
            sedan.setSpeed(*maxspeed);
            sedan.getEngine().setCapacity(*engineCapacity);
            sedan.getEngine().setPower(*power);
            sedan.getEngine().setType(*engineType);

            Sedan sedan1(*type, *licenseplate, *brand, *inventoryStatus, *model, *color, *fuel, *mileage, *doors, *production, *price,
                         *typeofroof, *maxspeed, Engine(*engineCapacity, *power, *engineType));

            ofstream foutSed(R"(D:\Course Work\Code\Database\Sedan.txt)", ios_base::app);
            foutSed << *type << "\t" << *brand << "\t" << *model << "\t"
                    << *color << "\t" << *fuel << "\t" << *mileage << "\t" << *doors << "\t"
                    << *production << "\t"  << *price << "\t"
                    << *inventoryStatus << "\t" << *licenseplate << "\t" << *typeofroof << "\t"
                    << *maxspeed << "\t" << *engineCapacity << "\t" << *power << "\t" << *engineType << endl;

            foutSed.close();
        }
    }
    Probels();
}


void AddinfVan(Van &van) {
    Engine engine2;
    Cars car1;
    cout << "Choose which van you want to know more about: " << endl;
    ifstream finCar(R"(D:\Course Work\Code\Database\Cars.txt)");
    if (!finCar.is_open()) {
        cerr << "Error opening file." << endl;
        return;
    }

    shared_ptr<string> nazvmar{new string{""}};
    for (int attempts = 0; attempts < 3; ++attempts) {
        cout << "What is the brand of the transport? " << endl;
        cin >> *nazvmar;
        if (!nazvmar->empty()) {
            break;
        } else {
            cout << "Invalid input. Please try again." << endl;
        }
    }

    if (nazvmar->empty()) {
        cout << "Too many incorrect attempts. Exiting program." << endl;
        exit(1);
    }

    shared_ptr<string> nazvamod{new string{""}};
    for (int attempts = 0; attempts < 3; ++attempts) {
        cout << "What is the model of the car? " << endl;
        cin >> *nazvamod;
        if (!nazvamod->empty()) {
            break;
        } else {
            cout << "Invalid input. Please try again." << endl;
        }
    }

    if (nazvamod->empty()) {
        cout << "Too many incorrect attempts. Exiting program." << endl;
        exit(1);
    }


    shared_ptr<string> nazvaplate{new string{""}};
    for (int attempts = 0; attempts < 3; ++attempts) {
        cout << "What is the license plate of the sedan? ";
        cin >> *nazvaplate;
        if (!nazvaplate->empty()) {
            break;
        } else {
            cout << "Invalid input. Please try again." << endl;
        }
    }

    if (nazvaplate->empty()) {
        cout << "Too many incorrect attempts. Exiting program." << endl;
        return;
    }

    shared_ptr<string> type{new string{""}};
    shared_ptr<string> brand{new string{""}};
    shared_ptr<string> model{new string{""}};
    shared_ptr<string> color{new string{""}};
    shared_ptr<double> fuel{new double{0.0}};
    shared_ptr<double> mileage{new double{0.0}};
    shared_ptr<int> doors{new int{0}};
    shared_ptr<int> production{new int{0}};
    shared_ptr<double> price{new double{0.0}};
    shared_ptr<string> inventoryStatus{new string{""}};
    shared_ptr<string> licenseplate{new string{""}};

    car1.setType(*type);
    car1.setBrand(*brand);
    car1.setModel(*model);
    car1.setColor(*color);
    car1.setFuel(*fuel);
    car1.setMileage(*mileage);
    car1.setDoors(*doors);
    car1.setYear(*production);
    car1.setPrice(*price);
    car1.setStatus(*inventoryStatus);
    car1.setPlate(*licenseplate);

    while (finCar >> *type >> *brand >> *model >> *color >> *fuel >> *mileage >> *doors >> *production >> *price >>
                  *inventoryStatus >> *licenseplate) {
        Cars cars(*type, *brand, *model, *color, *fuel, *mileage, *doors, *production,
                  *price, *inventoryStatus, *licenseplate);

        if (cars.getBrand() == *nazvmar && cars.getModel() == *nazvamod && cars.getPlate() == *nazvaplate) {
            van.setType(*type);
            van.setBrand(*brand);
            van.setModel(*model);
            van.setColor(*color);
            van.setFuel(*fuel);
            van.setMileage(*mileage);
            van.setDoors(*doors);
            van.setYear(*production);
            van.setPrice(*price);
            van.setStatus(*inventoryStatus);
            van.setPlate(*licenseplate);

            shared_ptr<int> payloadCapacity{new int{0}};
            for (int attempts = 0; attempts < 3; ++attempts) {
                cout << "What is the van's payload capacity? " << endl;
                cin >> *payloadCapacity;
                if (cin.fail()) {
                    cout << "Invalid input. Please enter a valid number." << endl;
                } else {
                    break;
                }
            }

            if (*payloadCapacity <= 0) {
                cout << "Too many incorrect attempts. Exiting program." << endl;
                exit(1);
            }
            van.setPayloadCap(*payloadCapacity);

            shared_ptr<int> sleepingCapacity{new int{0}};
            for (int attempts = 0; attempts < 3; ++attempts) {
                cout << "What is the van's sleeping capacity? " << endl;
                cin >> *sleepingCapacity;
                if (cin.fail()) {
                    cout << "Invalid input. Please enter a valid number." << endl;
                } else {
                    break;
                }
            }

            if (*sleepingCapacity <= 0) {
                cout << "Too many incorrect attempts. Exiting program." << endl;
                exit(1);
            }
            van.setSleepCap(*sleepingCapacity);


            shared_ptr<string> engineCapacity{new string{""}};
            shared_ptr<string> power{new string{""}};
            shared_ptr<string> engineType{new string{""}};

            cout << "Engine characteristics: " << endl;
            for (int attempts = 0; attempts < 3; ++attempts) {
                cout << "Engine capacity: " << endl;
                cin >> *engineCapacity;
                if (!engineCapacity->empty()) {
                    break;
                } else {
                    cout << "Invalid input. Please try again." << endl;
                }
            }

            if (engineCapacity->empty()) {
                cout << "Too many incorrect attempts. Exiting program." << endl;
                exit(1);
            }
            van.getEngine().setCapacity(*engineCapacity);

            for (int attempts = 0; attempts < 3; ++attempts) {
                cout << "Power: " << endl;
                cin >> *power;
                if (!power->empty()) {
                    break;
                } else {
                    cout << "Invalid input. Please try again." << endl;
                }
            }

            if (power->empty()) {
                cout << "Too many incorrect attempts. Exiting program." << endl;
                exit(1);
            }
            van.getEngine().setPower(*power);

            for (int attempts = 0; attempts < 3; ++attempts) {
                cout << "Engine type: " << endl;
                cin >> *engineType;
                if (!engineType->empty()) {
                    break;
                } else {
                    cout << "Invalid input. Please try again." << endl;
                }
            }

            if (engineType->empty()) {
                cout << "Too many incorrect attempts. Exiting program." << endl;
                exit(1);
            }
            van.getEngine().setType(*engineType);



            Van van1(*type, *brand, *licenseplate, *inventoryStatus, *model, *color, *fuel, *mileage, *doors, *production, *price,
                     *payloadCapacity, *sleepingCapacity, Engine(*engineCapacity, *power, *engineType));

            ofstream foutVan(R"(D:\Course Work\Code\Database\Van.txt)", ios_base::app);
            foutVan << *type << "\t" << *brand << "\t" << *model << "\t"
                    << *color << "\t" << *fuel << "\t" << *mileage << "\t" << *doors << "\t"
                    << *production << "\t" << *price << "\t"
                    << *inventoryStatus << "\t" << *licenseplate << "\t" << *payloadCapacity << "\t"
                    << *sleepingCapacity << "\t" << *engineCapacity << "\t" << *power << "\t" << *engineType << endl;
            foutVan.close();
            Probels();
        }
    }
}



double CalculateAveragePrice(int startYear, int endYear) {
    vector<CarData> cars;
    ifstream fin(R"(D:\Course Work\Code\Database\Cars.txt)");

    if (!fin.is_open()) {
        cerr << "Error opening file: Cars.txt" << endl;
        return 0.0;
    }

    string line;
    while (getline(fin, line)) {
        istringstream iss(line);
        CarData car;
        iss >> car.type >> car.brand >>car.model >> car.color >> car.fuel >> car.mileage >> car.doors >> car.year
        >> car.price >> car.status >> car.licensePlate;
        cars.push_back(car);
    }

    fin.close();

    double total_price = 0.0;
    int count = 0;
    for (const CarData& car : cars) {
        if (car.year >= startYear && car.year <= endYear) {
            total_price += car.price;
            count++;
        }
    }

    if (count == 0) {
        cerr << "No cars found in the specified year range." << endl;
        return 0.0;
    }

    return total_price / count;
}

void ChangeSedIfNecessary(const CarData& car) {
    vector<SedanData> sedans;
    ifstream fin(R"(D:\Course Work\Code\Database\Sedan.txt)");

    try {
        if (!fin.is_open()) {
            throw runtime_error("Error opening file: Sedan.txt");
        }

        string line;
        while (getline(fin, line)) {
            istringstream iss(line);
            SedanData sedan;
            iss >> sedan.type >> sedan.brand >> sedan.model >> sedan.color >> sedan.fuel >> sedan.mileage
                >> sedan.doors >> sedan.year >> sedan.price >> sedan.status >> sedan.licensePlate
                >> sedan.typeofroof >> sedan.maxspeed >> sedan.engineCapacity >> sedan.power >> sedan.engineType;
            sedans.push_back(sedan);
        }

        fin.close();

        bool sedanFound = false;
        for (SedanData &sedan : sedans) {
            if (sedan.licensePlate == car.licensePlate) {
                sedanFound = true;


                sedan.brand = car.brand;
                sedan.model = car.model;
                sedan.color = car.color;
                sedan.fuel = car.fuel;
                sedan.mileage = car.mileage;
                sedan.doors = car.doors;
                sedan.year = car.year;
                sedan.price = car.price;
                sedan.status = car.status;

                ofstream fout(R"(D:\Course Work\Code\Database\Sedan.txt)", ios::out | ios::trunc);
                if (!fout.is_open()) {
                    throw runtime_error("Error opening file: Sedan.txt");
                }

                for (const SedanData &s : sedans) {
                    fout << s.type << "\t" << s.brand << "\t" << s.model << "\t"
                         << s.color << "\t" << s.fuel << "\t" << s.mileage << "\t"
                         << s.doors << "\t" << s.year << "\t" << s.price << "\t"
                         << s.status << "\t" << s.licensePlate << "\t"
                         << s.typeofroof << "\t" << s.maxspeed << "\t"
                         << s.engineCapacity << "\t" << s.power << "\t" << s.engineType << endl;
                }
                fout.close();
                cout << "Details of the sedan are updated." << endl;
                break;
            }
        }

        if (!sedanFound) {
            cout << "Car with license plate " << car.licensePlate << " not found." << endl;
        }
    } catch (const exception &e) {
        cerr << "Exception occurred: " << e.what() << endl;
    }
}

void ChangeVanIfNecessary(const CarData& car) {
    vector<VanData> vans;
    ifstream fin(R"(D:\Course Work\Code\Database\Van.txt)");

    try {
        if (!fin.is_open()) {
            throw runtime_error("Error opening file: Van.txt");
        }

        string line;
        while (getline(fin, line)) {
            istringstream iss(line);
            VanData van;
            iss >> van.type >> van.brand >> van.model >> van.color >> van.fuel >> van.mileage
                >> van.doors >> van.year >> van.price >> van.status >> van.licensePlate
                >> van.payloadCapacity >> van.sleepingCapacity >> van.engineCapacity >> van.power >> van.engineType;
            vans.push_back(van);
        }

        fin.close();

        bool vanFound = false;
        for (VanData &van : vans) {
            if (van.licensePlate == car.licensePlate) {
                vanFound = true;
                van.brand = car.brand;
                van.model = car.model;
                van.color = car.color;
                van.fuel = car.fuel;
                van.mileage = car.mileage;
                van.doors = car.doors;
                van.year = car.year;
                van.price = car.price;
                van.status = car.status;

                ofstream fout(R"(D:\Course Work\Code\Database\Van.txt)", ios::out | ios::trunc);
                if (!fout.is_open()) {
                    throw runtime_error("Error opening file: Van.txt");
                }

                for (const VanData &v : vans) {
                    fout << v.type << "\t" << v.brand << "\t" << v.model << "\t"
                         << v.color << "\t" << v.fuel << "\t" << v.mileage << "\t"
                         << v.doors << "\t" << v.year << "\t" << v.price << "\t"
                         << v.status << "\t" << v.licensePlate << "\t"
                         << v.payloadCapacity << "\t" << v.sleepingCapacity << "\t"
                         << v.engineCapacity << "\t" << v.power << "\t" << v.engineType << endl;
                }
                fout.close();
                cout << "Details of the van are updated." << endl;
                break;
            }
        }

        if (!vanFound) {
            cout << "Car with license plate " << car.licensePlate << " not found." << endl;
        }
    } catch (const exception &e) {
        cerr << "Exception occurred: " << e.what() << endl;
    }
}






void ChangeCar(const string& licensePlate) {
    vector<CarData> cars;
    ifstream fin(R"(D:\\Course Work\\Code\\Database\\Cars.txt)");

    if (!fin.is_open()) {
        cerr << "Error opening file: Cars.txt" << endl;
        return;
    }

    string line;
    while (getline(fin, line)) {
        istringstream iss(line);
        CarData car;
        iss >> car.type >> car.brand >> car.model >> car.color >> car.fuel >> car.mileage
            >> car.doors >> car.year >> car.price >> car.status >> car.licensePlate;
        cars.push_back(car);
    }

    fin.close();

    bool found = false;
    CarData updateCar;
    for (CarData &car : cars) {
        if (car.licensePlate == licensePlate) {
            found = true;
            cout << "Current information for the car with license plate " << licensePlate << ":" << endl;
            cout << "Type: " << car.type << endl;
            cout << "Brand: " << car.brand << endl;
            cout << "Model: " << car.model << endl;
            cout << "Color: " << car.color << endl;
            cout << "Fuel: " << car.fuel << " L/100km" << endl;
            cout << "Mileage: " << car.mileage << " km" << endl;
            cout << "Number of doors: " << car.doors << endl;
            cout << "Year of production: " << car.year << endl;
            cout << "Price: " << car.price << " dollars" << endl;
            cout << "Vehicle availability status (for example, 'available', 'sold', 'reserved') : " <<
            car.status << endl;


            while (true) {
                cout << "What field do you want to modify?" << endl;
                cout << "1. Brand" << endl;
                cout << "2. Model" << endl;
                cout << "3. Color" << endl;
                cout << "4. Fuel" << endl;
                cout << "5. Year of production" << endl;
                cout << "6. Price" << endl;
                cout << "7. Mileage" << endl;
                cout << "8. Inventory status" << endl;
                cout << "0. Exit" << endl;

                int choice;
                int attempts = 3;
                bool validInput = false;

                while (attempts > 0 && !validInput) {
                    try {
                        cin >> choice;
                        if (cin.fail()) {
                            throw runtime_error("Invalid input. Please enter a number.");
                        }
                        if (choice < 0 || choice > 8) {
                            throw out_of_range("Choice out of valid range.");
                        }
                        validInput = true;
                    } catch (const runtime_error& e) {
                        cerr << e.what() << " You have " << --attempts << " attempts left." << endl;
                    } catch (const out_of_range& e) {
                        cerr << e.what() << " You have " << --attempts << " attempts left." << endl;
                    }
                }

                if (!validInput) {
                    cout << "Exceeded number of attempts." << endl;
                    return;
                }

                switch (choice) {
                    case 1:
                        cout << "Enter new brand: ";
                        cin >> car.brand;
                        break;
                    case 2:
                        cout << "Enter new model: ";
                        cin >> car.model;
                        break;
                    case 3:
                        cout << "Enter new color: ";
                        cin >> car.color;
                        break;
                    case 4:
                        cout << "Enter new amount of fuel: ";
                        cin >> car.fuel;
                        break;
                    case 5:
                        cout << "Enter new year of production: ";
                        cin >> car.year;
                        break;
                    case 6:
                        cout << "Enter new price: ";
                        cin >> car.price;
                        break;
                    case 7:
                        cout << "Enter new amount of mileage: ";
                        cin >> car.mileage;
                        break;
                    case 8:
                        cout << "Enter new inventory status: ";
                        cin >> car.status;
                        break;
                    case 0: {
                        ofstream fout(R"(D:\\Course Work\\Code\\Database\\Cars.txt)", ios::out | ios::trunc);
                        if (!fout.is_open()) {
                            cerr << "Error opening file: Cars.txt" << endl;
                            return;
                        }

                        for (const CarData &car : cars) {
                            fout << car.type << "\t" << car.brand << "\t" << car.model << "\t"
                                 << car.color << "\t" << car.fuel << "\t" << car.mileage << "\t"
                                 << car.doors << "\t" << car.year << "\t" << car.price << "\t"
                                 << car.status << "\t" << car.licensePlate << endl;
                        }
                        fout.close();
                        cout << "\nUpdated information for the car with license plate " << licensePlate << ":" << endl;
                        cout << "Type: " << car.type << endl;
                        cout << "Brand: " << car.brand << endl;
                        cout << "Model: " << car.model << endl;
                        cout << "Color: " << car.color << endl;
                        cout << "Fuel: " << car.fuel << " L/100km" << endl;
                        cout << "Mileage: " << car.mileage << " km" << endl;
                        cout << "Number of doors: " << car.doors << endl;
                        cout << "Year of production: " << car.year << endl;
                        cout << "Price: " << car.price << " dollars" << endl;
                        cout << "Vehicle availability status (for example, 'Available', 'Sold', 'Reserved') : " <<
                             car.status << endl;
                        if (car.status == "Available") {
                            WriteAvailableCars(car);
                        } else if (car.status == "Sold") {
                            WriteSoldCars(car);
                        } else if (car.status == "Reserved") {
                            WriteReservedCars(car);
                        }
                        ChangeSedIfNecessary(car);
                        ChangeVanIfNecessary(car);
                    }
                        return;
                    default:
                        cout << "Invalid choice." << endl;
                }
            }
        }
    }

    if (!found) {
        cout << "Car with license plate " << licensePlate << " not found." << endl;
    }
}


void ChangeSed(const string& licensePlate) {
    vector<SedanData> sedans;
    ifstream fin(R"(D:\Course Work\Code\Database\Sedan.txt)");

    if (!fin.is_open()) {
        cerr << "Error opening file: Sedan.txt" << endl;
        return;
    }

    string line;
    while (getline(fin, line)) {
        istringstream iss(line);
        SedanData sedan;
        iss >> sedan.type >> sedan.brand >> sedan.model >> sedan.color >> sedan.fuel >> sedan.mileage
            >> sedan.doors >> sedan.year >> sedan.price >> sedan.status >> sedan.licensePlate >> sedan.typeofroof >>
            sedan.maxspeed >> sedan.engineCapacity >> sedan.power >> sedan.engineType;
        sedans.push_back(sedan);
    }

    fin.close();

    bool found = false;
    for (SedanData &sedan : sedans) {
        if (sedan.licensePlate == licensePlate) {
            found = true;
            cout << "Current information for the car with license plate " << licensePlate << ":" << endl;
            cout << "Type: " << sedan.type << endl;
            cout << "Brand: " << sedan.brand << endl;
            cout << "Model: " << sedan.model << endl;
            cout << "Color: " << sedan.color << endl;
            cout << "Fuel: " << sedan.fuel << " L/100km" << endl;
            cout << "Mileage: " << sedan.mileage << " km" << endl;
            cout << "Number of doors: " << sedan.doors << endl;
            cout << "Year of production: " << sedan.year << endl;
            cout << "Price: " << sedan.price << " dollars" << endl;
            cout << "Vehicle availability status (for example, 'available', 'sold', 'reserved') : " <<
                 sedan.status << endl;
            cout <<  "Type of roof: " << sedan.typeofroof << endl;
            cout << "Max speed: " << sedan.maxspeed << "km/h" << endl;
            cout << "Engine capacity: " << sedan.engineCapacity << endl;
            cout << "Engine power: " << sedan.power << endl;
            cout << "Engine type: " << sedan.engineType << endl;

            bool modifyAgain = true;
            while (modifyAgain) {
                cout << "What field do you want to modify? (Enter 0 to exit)" << endl;
                cout << "1. Brand" << endl;
                cout << "2. Model" << endl;
                cout << "3. Color" << endl;
                cout << "4. Fuel" << endl;
                cout << "5. Year of production" << endl;
                cout << "6. Price" << endl;
                cout << "7. Mileage" << endl;
                cout << "8. Inventory status" << endl;
                cout << "9. Type of roof" << endl;
                cout << "10. Max speed" << endl;
                cout << "11. Engine capacity" << endl;
                cout << "12. Engine power" << endl;
                cout << "13. Engine type" << endl;
                cout << "0. Exit" << endl;

                int choice;
                int attempts = 3;
                while (attempts > 0) {
                    try {
                        cin >> choice;
                        if (cin.fail() || choice < 0 || choice > 13) {
                            throw invalid_argument("Invalid choice. Please enter a number between 0 and 13.");
                        }
                        break;
                    } catch (const invalid_argument& e) {
                        cout << e.what() << endl;
                        attempts--;
                        if (attempts == 0) {
                            cout << "Exceeded maximum attempts. Exiting modification." << endl;
                            return;
                        }
                        cout << "Please try again (" << attempts << " attempts left): ";
                    }
                }

                if (choice == 0) {
                    modifyAgain = false;
                    break;
                }

                string inputStr;
                int inputInt;
                double inputDouble;
                attempts = 3;
                switch (choice) {
                    case 1:
                        cout << "Enter new brand: ";
                        cin >> sedan.brand;
                        break;
                    case 2:
                        cout << "Enter new model: ";
                        cin >> sedan.model;
                        break;
                    case 3:
                        cout << "Enter new color: ";
                        cin >> sedan.color;
                        break;
                    case 4:
                        while (attempts > 0) {
                            try {
                                cout << "Enter new amount of fuel: ";
                                cin >> inputDouble;
                                if (cin.fail() || inputDouble <= 0) {
                                    throw invalid_argument("Fuel must be a positive number.");
                                }
                                sedan.fuel = inputDouble;
                                break;
                            } catch (const invalid_argument& e) {
                                cout << e.what() << endl;
                                attempts--;
                                if (attempts == 0) {
                                    cout << "Exceeded maximum attempts. Skipping modification." << endl;
                                    break;
                                }
                            }
                        }
                        break;
                    case 5:
                        while (attempts > 0) {
                            try {
                                cout << "Enter new year of production: ";
                                cin >> inputInt;
                                if (cin.fail() || inputInt < 1886 || inputInt > 2024) {
                                    throw invalid_argument("Invalid year. Please enter a year between 1886 and 2024.");
                                }
                                sedan.year = inputInt;
                                break;
                            } catch (const invalid_argument& e) {
                                cout << e.what() << endl;
                                attempts--;
                                if (attempts == 0) {
                                    cout << "Exceeded maximum attempts. Skipping modification." << endl;
                                    break;
                                }
                            }
                        }
                        break;
                    case 6:
                        while (attempts > 0) {
                            try {
                                cout << "Enter new price: ";
                                cin >> inputDouble;
                                if (cin.fail() || inputDouble < 0) {
                                    throw invalid_argument("Price must be a non-negative number.");
                                }
                                sedan.price = inputDouble;
                                break;
                            } catch (const invalid_argument& e) {
                                cout << e.what() << endl;
                                attempts--;
                                if (attempts == 0) {
                                    cout << "Exceeded maximum attempts. Skipping modification." << endl;
                                    break;
                                }
                            }
                        }
                        break;
                    case 7:
                        while (attempts > 0) {
                            try {
                                cout << "Enter new mileage: ";
                                cin >> inputInt;
                                if (cin.fail() || inputInt < 0) {
                                    throw invalid_argument("Mileage must be a non-negative number.");
                                }
                                sedan.mileage = inputInt;
                                break;
                            } catch (const invalid_argument& e) {
                                cout << e.what() << endl;
                                attempts--;
                                if (attempts == 0) {
                                    cout << "Exceeded maximum attempts. Skipping modification." << endl;
                                    break;
                                }
                            }
                        }
                        break;
                    case 8:
                        cout << "Enter new inventory status (e.g., 'available', 'sold', 'reserved'): ";
                        cin >> sedan.status;
                        break;
                    case 9:
                        cout << "Enter new type of roof: ";
                        cin >> sedan.typeofroof;
                        break;
                    case 10:
                        while (attempts > 0) {
                            try {
                                cout << "Enter new max speed (km/h): ";
                                cin >> inputInt;
                                if (cin.fail() || inputInt <= 0) {
                                    throw invalid_argument("Max speed must be a positive number.");
                                }
                                sedan.maxspeed = inputInt;
                                break;
                            } catch (const invalid_argument& e) {
                                cout << e.what() << endl;
                                attempts--;
                                if (attempts == 0) {
                                    cout << "Exceeded maximum attempts. Skipping modification." << endl;
                                    break;
                                }
                            }
                        }
                        break;
                    case 11:
                        while (attempts > 0) {
                            try {
                                cout << "Enter new engine capacity: ";
                                cin >> inputDouble;
                                if (cin.fail() || inputDouble <= 0) {
                                    throw invalid_argument("Engine capacity must be a positive number.");
                                }
                                sedan.engineCapacity = inputDouble;
                                break;
                            } catch (const invalid_argument& e) {
                                cout << e.what() << endl;
                                attempts--;
                                if (attempts == 0) {
                                    cout << "Exceeded maximum attempts. Skipping modification." << endl;
                                    break;
                                }
                            }
                        }
                        break;
                    case 12:
                        while (attempts > 0) {
                            try {
                                cout << "Enter new engine power: ";
                                cin >> inputInt;
                                if (cin.fail() || inputInt <= 0) {
                                    throw invalid_argument("Engine power must be a positive number.");
                                }
                                sedan.power = inputInt;
                                break;
                            } catch (const invalid_argument& e) {
                                cout << e.what() << endl;
                                attempts--;
                                if (attempts == 0) {
                                    cout << "Exceeded maximum attempts. Skipping modification." << endl;
                                    break;
                                }
                            }
                        }
                        break;
                    case 13:
                        cout << "Enter new engine type: ";
                        cin >> sedan.engineType;
                        break;
                    default:
                        cout << "Invalid choice." << endl;
                }
            }
            ofstream fout(R"(D:\Course Work\Code\Database\Sedan.txt)", ios::out | ios::trunc);
            if (!fout.is_open()) {
                cerr << "Error opening file:: Cars.txt" << endl;
                return;
            }

            for (const SedanData &sedan : sedans) {
                fout << sedan.type << "\t" << sedan.brand << "\t" << sedan.model << "\t"
                     << sedan.color << "\t" << sedan.fuel << "\t" << sedan.mileage << "\t"
                     << sedan.doors << "\t" << sedan.year << "\t" << sedan.price << "\t"
                     << sedan.status << "\t" << sedan.licensePlate << "\t" << sedan.typeofroof
                     << "\t" << sedan.maxspeed << "\t" << sedan.engineCapacity << "\t" << sedan.power <<
                     "\t" << sedan.engineType << endl;
            }
            fout.close();
            cout << "\nUpdated information for the car with license plate " << licensePlate << ":" << endl;
            cout << "Type: " << sedan.type << endl;
            cout << "Brand: " << sedan.brand << endl;
            cout << "Model: " << sedan.model << endl;
            cout << "Color: " << sedan.color << endl;
            cout << "Fuel: " << sedan.fuel << " L/100km" << endl;
            cout << "Mileage: " << sedan.mileage << " km" << endl;
            cout << "Number of doors: " << sedan.doors << endl;
            cout << "Year of production: " << sedan.year << endl;
            cout << "Price: " << sedan.price << " dollars" << endl;
            cout << "Vehicle availability status (for example, 'available', 'sold', 'reserved') : " <<
                 sedan.status << endl;
            cout <<  "Type of roof: " << sedan.typeofroof << endl;
            cout << "Max speed: " << sedan.maxspeed << "km/h" << endl;
            cout << "Engine capacity: " << sedan.engineCapacity << endl;
            cout << "Engine power: " << sedan.power << endl;
            cout << "Engine type: " << sedan.engineType << endl;
        }
    }

    if (!found) {
        cout << "Car with license plate " << licensePlate << " not found." << endl;
    }
}

void UpdateCarDataWithSedan(const SedanData& sedan) {
    vector<CarData> cars;
    ifstream fin(R"(D:\\Course Work\\Code\\Database\\Cars.txt)");

    if (!fin.is_open()) {
        cerr << "Error opening file: Car.txt" << endl;
        return;
    }

    string line;
    while (getline(fin, line)) {
        istringstream iss(line);
        CarData car;
        iss >> car.type >> car.brand >> car.model >> car.color >> car.fuel >> car.mileage
            >> car.doors >> car.year >> car.price >> car.status >> car.licensePlate;
        cars.push_back(car);
    }

    fin.close();

    for (CarData &car : cars) {
        if (car.licensePlate == sedan.licensePlate) {
            car.brand = sedan.brand;
            car.model = sedan.model;
            car.color = sedan.color;
            car.fuel = sedan.fuel;
            car.mileage = sedan.mileage;
            car.doors = sedan.doors;
            car.year = sedan.year;
            car.price = sedan.price;
            car.status = sedan.status;
        }
    }

    ofstream fout(R"(D:\\Course Work\\Code\\Database\\Cars.txt)", ios::out | ios::trunc);
    if (!fout.is_open()) {
        cerr << "Error opening file: Car.txt" << endl;
        return;
    }

    for (const CarData &car : cars) {
        fout << car.type << "\t" << car.brand << "\t" << car.model << "\t"
             << car.color << "\t" << car.fuel << "\t" << car.mileage << "\t"
             << car.doors << "\t" << car.year << "\t" << car.price << "\t"
             << car.status << "\t" << car.licensePlate << endl;
    }
    fout.close();
}


void ChangeVan(const string& licensePlate) {
    vector<VanData> vans;
    ifstream fin(R"(D:\Course Work\Code\Database\Van.txt)");

    if (!fin.is_open()) {
        cerr << "Error opening file: Van.txt" << endl;
        return;
    }

    string line;
    while (getline(fin, line)) {
        istringstream iss(line);
        VanData van;
        iss >> van.type >> van.brand >> van.model >> van.color >> van.fuel >> van.mileage
            >> van.doors >> van.year >> van.price >> van.status >> van.licensePlate >> van.payloadCapacity >>
            van.sleepingCapacity >> van.engineCapacity >> van.power >> van.engineType;
        vans.push_back(van);
    }

    fin.close();

    bool found = false;
    for (VanData &van : vans) {
        if (van.licensePlate == licensePlate) {
            found = true;
            cout << "Current information for the car with license plate " << licensePlate << ":" << endl;
            cout << "Type: " << van.type << endl;
            cout << "Brand: " << van.brand << endl;
            cout << "Model: " << van.model << endl;
            cout << "Color: " << van.color << endl;
            cout << "Fuel: " << van.fuel << " L/100km" << endl;
            cout << "Mileage: " << van.mileage << " km" << endl;
            cout << "Number of doors: " << van.doors << endl;
            cout << "Year of production: " << van.year << endl;
            cout << "Price: " << van.price << " dollars" << endl;
            cout << "Vehicle availability status (for example, 'available', 'sold', 'reserved') : " << van.status << endl;
            cout << "Payload capacity: " << van.payloadCapacity << endl;
            cout << "Sleeping capacity: " << van.sleepingCapacity << endl;
            cout << "Engine capacity: " << van.engineCapacity << endl;
            cout << "Engine power: " << van.power << endl;
            cout << "Engine type: " << van.engineType << endl;

            bool modifyAgain = true;
            while (modifyAgain) {
                cout << "What field do you want to modify? (Enter 0 to exit)" << endl;
                cout << "1. Brand" << endl;
                cout << "2. Model" << endl;
                cout << "3. Color" << endl;
                cout << "4. Fuel" << endl;
                cout << "5. Year of production" << endl;
                cout << "6. Price" << endl;
                cout << "7. Mileage" << endl;
                cout << "8. Inventory status" << endl;
                cout << "9. Payload capacity" << endl;
                cout << "10. Sleeping capacity" << endl;
                cout << "11. Engine capacity" << endl;
                cout << "12. Engine power" << endl;
                cout << "13. Engine type" << endl;
                cout << "0. Exit" << endl;

                int choice;
                int attempts = 0;
                bool validInput = false;
                while (attempts < 3) {
                    try {
                        cin >> choice;
                        if (cin.fail() || choice < 0 || choice > 13) {
                            throw invalid_argument("Invalid choice. Please enter a number between 0 and 13.");
                        }
                        validInput = true;
                        break;
                    } catch (const exception &e) {
                        cerr << e.what() << " Attempts left: " << 2 - attempts << endl;
                        attempts++;
                    }
                }

                if (!validInput) {
                    cout << "Too many invalid attempts. Returning to main menu." << endl;
                    return;
                }

                switch (choice) {
                    case 1:
                        cout << "Enter new brand: ";
                        cin >> van.brand;
                        break;
                    case 2:
                        cout << "Enter new model: ";
                        cin >> van.model;
                        break;
                    case 3:
                        cout << "Enter new color: ";
                        cin >> van.color;
                        break;
                    case 4:
                        cout << "Enter new amount of fuel: ";
                        cin >> van.fuel;
                        break;
                    case 5:
                        cout << "Enter new year of production: ";
                        cin >> van.year;
                        break;
                    case 6:
                        cout << "Enter new price: ";
                        cin >> van.price;
                        break;
                    case 7:
                        cout << "Enter new amount of mileage: ";
                        cin >> van.mileage;
                        break;
                    case 8:
                        cout << "Enter new inventory status: ";
                        cin >> van.status;
                        break;
                    case 9:
                        cout << "Enter new payload capacity: ";
                        cin >> van.payloadCapacity;
                        break;
                    case 10:
                        cout << "Enter new sleeping capacity: ";
                        cin >> van.sleepingCapacity;
                        break;
                    case 11:
                        cout << "Enter new engine capacity: ";
                        cin >> van.engineCapacity;
                        break;
                    case 12:
                        cout << "Enter new power: ";
                        cin >> van.power;
                        break;
                    case 13:
                        cout << "Enter new engine type: ";
                        cin >> van.engineType;
                        break;
                    case 0:
                        modifyAgain = false;
                        break;
                    default:
                        cout << "Invalid choice." << endl;
                }
            }

            ofstream fout(R"(D:\Course Work\Code\Database\Van.txt)", ios::out | ios::trunc);
            if (!fout.is_open()) {
                cerr << "Error opening file: Van.txt" << endl;
                return;
            }

            for (const VanData &van : vans) {
                fout << van.type << "\t" << van.brand << "\t" << van.model << "\t"
                     << van.color << "\t" << van.fuel << "\t" << van.mileage << "\t"
                     << van.doors << "\t" << van.year << "\t" << van.price << "\t"
                     << van.status << "\t" << van.licensePlate << "\t" << van.payloadCapacity
                     << "\t" << van.sleepingCapacity << "\t" << van.engineCapacity << "\t" << van.power
                     << "\t" << van.engineType << endl;
            }
            fout.close();
            cout << "\nUpdated information for the car with license plate " << licensePlate << ":" << endl;
            cout << "Type: " << van.type << endl;
            cout << "Brand: " << van.brand << endl;
            cout << "Model: " << van.model << endl;
            cout << "Color: " << van.color << endl;
            cout << "Fuel: " << van.fuel << " L/100km" << endl;
            cout << "Mileage: " << van.mileage << " km" << endl;
            cout << "Number of doors: " << van.doors << endl;
            cout << "Year of production: " << van.year << endl;
            cout << "Price: " << van.price << " dollars" << endl;
            cout << "Vehicle availability status (for example, 'available', 'sold', 'reserved') : " << van.status << endl;
            cout << "Payload capacity: " << van.payloadCapacity << endl;
            cout << "Sleeping capacity: " << van.sleepingCapacity << endl;
            cout << "Engine capacity: " << van.engineCapacity << endl;
            cout << "Engine power: " << van.power << endl;
            cout << "Engine type: " << van.engineType << endl;
        }
    }

    if (!found) {
        cout << "Car with license plate " << licensePlate << " not found." << endl;
    }
}

void UpdateCarDataWithVan(const VanData& van) {
    vector<CarData> cars;
    ifstream fin(R"(D:\\Course Work\\Code\\Database\\Cars.txt)");

    if (!fin.is_open()) {
        cerr << "Error opening file: Car.txt" << endl;
        return;
    }

    string line;
    while (getline(fin, line)) {
        istringstream iss(line);
        CarData car;
        iss >> car.type >> car.brand >> car.model >> car.color >> car.fuel >> car.mileage
            >> car.doors >> car.year >> car.price >> car.status >> car.licensePlate;
        cars.push_back(car);
    }

    fin.close();

    for (CarData &car : cars) {
        if (car.licensePlate == van.licensePlate) {
            car.brand = van.brand;
            car.model = van.model;
            car.color = van.color;
            car.fuel = van.fuel;
            car.mileage = van.mileage;
            car.doors = van.doors;
            car.year = van.year;
            car.price = van.price;
            car.status = van.status;
        }
    }

    ofstream fout(R"(D:\\Course Work\\Code\\Database\\Cars.txt)", ios::out | ios::trunc);
    if (!fout.is_open()) {
        cerr << "Error opening file: Car.txt" << endl;
        return;
    }

    for (const CarData &car : cars) {
        fout << car.type << "\t" << car.brand << "\t" << car.model << "\t"
             << car.color << "\t" << car.fuel << "\t" << car.mileage << "\t"
             << car.doors << "\t" << car.year << "\t" << car.price << "\t"
             << car.status << "\t" << car.licensePlate << endl;
    }
    fout.close();
}




void DeleteCarsSed(const vector<string>& licensePlates) {
    vector<CarData> cars;
    vector<CarData> deletedCars;
    ifstream fin(R"(D:\Course Work\Code\Database\Cars.txt)");

    if (!fin.is_open()) {
        cerr << "Error opening file: Cars.txt" << endl;
        return;
    }

    string line;
    while (getline(fin, line)) {
        istringstream iss(line);
        CarData car;
        iss >> car.type >> car.brand >> car.model >> car.color >> car.fuel >> car.mileage >> car.doors >> car.year
            >> car.price >> car.status >> car.licensePlate;
        cars.push_back(car);
    }

    fin.close();

    vector<CarData> newCars;
    vector<CarData> deleteCars;
    bool foundAny = false;
    for (const CarData& car : cars) {
        bool found = false;
        for (const string& licensePlate : licensePlates) {
            if (car.licensePlate == licensePlate) {
                found = true;
                foundAny = true;
                deletedCars.push_back(car);
                break;
            }
        }
        if (!found) {
            newCars.push_back(car);
        }
    }

    if (!foundAny) {
        cout << "No cars found with the specified license plates." << endl;
        return;
    }

    ofstream fout(R"(D:\Course Work\Code\Database\Cars.txt)", ios::out | ios::trunc);
    if (!fout.is_open()) {
        cerr << "Error opening file: Cars.txt" << endl;
        return;
    }

    for (const CarData& car : newCars) {
        fout << car.type << "\t" << car.brand << "\t" << car.model << "\t"
             << car.color << "\t" << car.fuel << "\t" << car.mileage << "\t"
             << car.doors << "\t" << car.year << "\t" << car.price << "\t"
             << car.status << "\t" << car.licensePlate << endl;
    }

    fout.close();

    ifstream finSed(R"(D:\Course Work\Code\Database\Sedan.txt)");
    if (!finSed.is_open()) {
        cerr << "Error opening file: Sedan.txt" << endl;
        return;
    }

    vector<SedanData> sedans;
    while (getline(finSed, line)) {
        istringstream iss(line);
        SedanData sedan;
        iss >> sedan.type >> sedan.brand >> sedan.model >> sedan.color >> sedan.fuel >> sedan.mileage >> sedan.doors
            >> sedan.year >> sedan.price >> sedan.status >> sedan.licensePlate;
        sedans.push_back(sedan);
    }
    finSed.close();

    vector<SedanData> newSedans;
    for (const SedanData& sedan : sedans) {
        bool found = false;
        for (const string& licensePlate : licensePlates) {
            if (sedan.licensePlate == licensePlate) {
                found = true;
                break;
            }
        }
        if (!found) {
            newSedans.push_back(sedan);
        }
    }


    ofstream foutSed(R"(D:\Course Work\Code\Database\Sedan.txt)", ios::out | ios::trunc);
    if (!foutSed.is_open()) {
        cerr << "Error opening file: Sedan.txt" << endl;
        return;
    }

    for (const SedanData& sedan : newSedans) {
        foutSed << sedan.type << "\t" << sedan.brand << "\t" << sedan.model << "\t"
                << sedan.color << "\t" << sedan.fuel << "\t" << sedan.mileage << "\t"
                << sedan.doors << "\t" << sedan.year << "\t" << sedan.price << "\t"
                << sedan.status << "\t" << sedan.licensePlate << endl;
    }
    foutSed.close();


    cout << "Cars and sedans deleted successfully." << endl;
    ofstream foutDeleted(R"(D:\Course Work\Code\Database\Deleted transport.txt)", ios::app);
    if (!foutDeleted.is_open()) {
        cerr << "Error opening file: Deleted_transport.txt" << endl;
        return;
    }

    for (const CarData& car : deletedCars) {
        foutDeleted << car.type << "\t" << car.brand << "\t" << car.model << "\t"
                    << car.color << "\t" << car.fuel << "\t" << car.mileage << "\t"
                    << car.doors << "\t" << car.year << "\t" << car.price << "\t"
                    << car.status << "\t" << car.licensePlate << endl;
    }

    foutDeleted.close();
    cout << "Cars deleted successfully." << endl;
}

void DeleteCarsVan(const vector<string>& licensePlates){
    vector<CarData> cars;
    vector<CarData> deletedCars;
    ifstream fin(R"(D:\Course Work\Code\Database\Cars.txt)");

    if (!fin.is_open()) {
        cerr << "Error opening file: Cars.txt" << endl;
        return;
    }

    string line;
    while (getline(fin, line)) {
        istringstream iss(line);
        CarData car;
        iss >> car.type >> car.brand >> car.model >> car.color >> car.fuel >> car.mileage >> car.doors >> car.year
            >> car.price >> car.status >> car.licensePlate;
        cars.push_back(car);
    }

    fin.close();

    vector<CarData> newCars;
    vector<CarData> deleteCars;
    bool foundAny = false;
    for (const CarData& car : cars) {
        bool found = false;
        for (const string& licensePlate : licensePlates) {
            if (car.licensePlate == licensePlate) {
                found = true;
                foundAny = true;
                deletedCars.push_back(car);
                break;
            }
        }
        if (!found) {
            newCars.push_back(car);
        }
    }

    if (!foundAny) {
        cout << "No cars found with the specified license plates." << endl;
        return;
    }

    ofstream fout(R"(D:\Course Work\Code\Database\Cars.txt)", ios::out | ios::trunc);
    if (!fout.is_open()) {
        cerr << "Error opening file: Cars.txt" << endl;
        return;
    }

    for (const CarData& car : newCars) {
        fout << car.type << "\t" << car.brand << "\t" << car.model << "\t"
             << car.color << "\t" << car.fuel << "\t" << car.mileage << "\t"
             << car.doors << "\t" << car.year << "\t" << car.price << "\t"
             << car.status << "\t" << car.licensePlate << endl;
    }

    fout.close();

    ifstream finVan(R"(D:\Course Work\Code\Database\Van.txt)");
    if (!finVan.is_open()) {
        cerr << "Error opening file: Van.txt" << endl;
        return;
    }

    vector<VanData> vans;
    while (getline(finVan, line)) {
        istringstream iss(line);
        VanData van;
        iss >> van.type >> van.brand >> van.model >> van.color >> van.fuel >> van.mileage >> van.doors
            >> van.year >> van.price >> van.status >> van.licensePlate;
        vans.push_back(van);
    }
    finVan.close();

    vector<VanData> newVans;
    for (const VanData& van : vans) {
        bool found = false;
        for (const string& licensePlate : licensePlates) {
            if (van.licensePlate == licensePlate) {
                found = true;
                break;
            }
        }
        if (!found) {
            newVans.push_back(van);
        }
    }


    ofstream foutVan(R"(D:\Course Work\Code\Database\Van.txt)", ios::out | ios::trunc);
    if (!foutVan.is_open()) {
        cerr << "Error opening file: Van.txt" << endl;
        return;
    }

    for (const VanData& van : newVans) {
        foutVan << van.type << "\t" << van.brand << "\t" << van.model << "\t"
                << van.color << "\t" << van.fuel << "\t" << van.mileage << "\t"
                << van.doors << "\t" << van.year << "\t" << van.price << "\t"
                << van.status << "\t" << van.licensePlate << endl;
    }
    foutVan.close();


    cout << "Cars and sedans deleted successfully." << endl;
    ofstream foutDeleted(R"(D:\Course Work\Code\Database\Deleted transport.txt)", ios::app);
    if (!foutDeleted.is_open()) {
        cerr << "Error opening file: Deleted_transport.txt" << endl;
        return;
    }

    for (const CarData& car : deletedCars) {
        foutDeleted << car.type << "\t" << car.brand << "\t" << car.model << "\t"
                    << car.color << "\t" << car.fuel << "\t" << car.mileage << "\t"
                    << car.doors << "\t" << car.year << "\t" << car.price << "\t"
                    << car.status << "\t" << car.licensePlate << endl;
    }

    foutDeleted.close();
    cout << "Cars deleted successfully." << endl;
}


void ReturnCar(const string& licensePlate) {
    vector<CarData> cars;
    ifstream fin(R"(D:\Course Work\Code\Database\Cars.txt)");

    if (!fin.is_open()) {
        cerr << "Error opening file: Cars.txt" << endl;
        return;
    }

    string line;
    while (getline(fin, line)) {
        istringstream iss(line);
        CarData car;
        iss >> car.type >> car.brand >> car.model >> car.color >> car.fuel >> car.mileage >> car.doors >> car.year
            >> car.price >> car.status >> car.licensePlate;
        cars.push_back(car);
    }

    fin.close();

    vector<CarData> newCars;
    bool foundInCars = false;
    for (const CarData& car : cars) {
        if (car.licensePlate == licensePlate) {
            foundInCars = true;
        } else {
            newCars.push_back(car);
        }
    }

    if (foundInCars) {
        cout << "Car with license plate " << licensePlate << " is already in Cars.txt" << endl;
        return;
    }

    vector<CarData> deletedCars;
    ifstream finDeleted(R"(D:\Course Work\Code\Database\Deleted transport.txt)");

    if (!finDeleted.is_open()) {
        cerr << "Error opening file: Deleted transport.txt" << endl;
        return;
    }

    bool foundInDeleted = false;
    while (getline(finDeleted, line)) {
        istringstream iss(line);
        CarData car;
        iss >> car.type >> car.brand >> car.model >> car.color >> car.fuel >> car.mileage >> car.doors >> car.year
            >> car.price >> car.status >> car.licensePlate;
        if (car.licensePlate == licensePlate) {
            foundInDeleted = true;
            newCars.push_back(car);
        } else {
            deletedCars.push_back(car);
        }
    }

    finDeleted.close();

    if (!foundInDeleted) {
        cout << "Car with license plate " << licensePlate << " not found in Deleted transport.txt" << endl;
        return;
    }

    ofstream fout(R"(D:\Course Work\Code\Database\Cars.txt)", ios::out | ios::trunc);
    if (!fout.is_open()) {
        cerr << "Error opening file: Cars.txt" << endl;
        return;
    }

    for (const CarData& car : newCars) {
        fout << car.type << "\t" << car.brand << "\t" << car.model << "\t"
             << car.color << "\t" << car.fuel << "\t" << car.mileage << "\t"
             << car.doors << "\t" << car.year << "\t" << car.price << "\t"
             << car.status << "\t" << car.licensePlate << endl;
    }

    fout.close();

    ofstream foutDeleted(R"(D:\Course Work\Code\Database\Deleted transport.txt)", ios::out | ios::trunc);
    if (!foutDeleted.is_open()) {
        cerr << "Error opening file: Deleted transport.txt" << endl;
        return;
    }

    for (const CarData& car : deletedCars) {
        foutDeleted << car.type << "\t" << car.brand << "\t" << car.model << "\t"
                    << car.color << "\t" << car.fuel << "\t" << car.mileage << "\t"
                    << car.doors << "\t" << car.year << "\t" << car.price << "\t"
                    << car.status << "\t" << car.licensePlate << endl;
    }

    foutDeleted.close();
    cout << "Car with license plate " << licensePlate << " returned successfully." << endl;
}


void SortCars(vector<CarData>& cars, int criteria, bool ch) {
    if (criteria == 1) {
        sort(cars.begin(), cars.end(), [ch](const CarData& a, const CarData& b) {
            return ch ? a.year < b.year : a.year > b.year;
        });
    } else if (criteria == 2) {
        sort(cars.begin(), cars.end(), [ch](const CarData& a, const CarData& b) {
            return ch ? a.price < b.price : a.price > b.price;
        });
    } else if (criteria == 3) {
        sort(cars.begin(), cars.end(), [ch](const CarData& a, const CarData& b) {
            return ch ? a.mileage < b.mileage : a.mileage > b.mileage;
        });
    }
}

void Sort(const string& cr, const string& sorted, int criteria, bool ch) {
    vector<CarData> cars;
    ifstream finyear(R"(D:\Course Work\Code\Database\Cars.txt)");

    if (!finyear.is_open()) {
        cerr << "Error opening file: " << cr << endl;
        return;
    }

    string line;
    while (getline(finyear, line)) {
        istringstream iss(line);
        CarData car;
        iss >> car.type >> car.brand >> car.model >> car.color >> car.fuel >> car.mileage
            >> car.doors >> car.year >> car.price >> car.status >> car.licensePlate;
        cars.push_back(car);
    }

    finyear.close();

    SortCars(cars, criteria, ch);

    ofstream foutyear(sorted, ios::out | ios::trunc);
    if (!foutyear.is_open()) {
        cerr << "Error opening file: " << sorted << endl;
        return;
    }

    for (const CarData& car : cars) {
        foutyear << car.type << "\t" << car.brand << "\t" << car.model << "\t"
                 << car.color << "\t" << car.fuel << "\t" << car.mileage << "\t"
                 << car.doors << "\t" << car.year << "\t" << car.price << "\t"
                 << car.status << "\t" << car.licensePlate << endl;

        cout << "Type: " << car.type << "\n"
             << "Brand: " << car.brand << "\n"
             << "Model: " << car.model << "\n"
             << "Color: " << car.color << "\n"
             << "Fuel: " << car.fuel << "L/100km\n"
             << "Mileage: " << car.mileage << " km\n"
             << "Number of doors: " << car.doors << "\n"
             << "Year of production: " << car.year << "\n"
             << "Price: " << car.price << " dollars\n"
             << "Vehicle availability status: " << car.status << "\n"
             << "License plate number of the car: " << car.licensePlate << endl;
    }

    foutyear.close();
}



void SearchCarsByBrand(const string& brand) {
    vector<CarData> cars;
    ifstream finser(R"(D:\Course Work\Code\Database\Cars.txt)");

    if (!finser.is_open()) {
        cerr << "Error opening file: Cars.txt" << endl;
        return;
    }

    string line;
    while (getline(finser, line)) {
        istringstream iss(line);
        CarData car;
        iss >> car.type >> car.brand >> car.model >> car.color >> car.fuel >> car.mileage >> car.doors >> car.year >> car.price >> car.status >> car.licensePlate;
        cars.push_back(car);
    }

    finser.close();

    ofstream foutser(R"(D:\Course Work\Code\Database\Search for a car by brand.txt)",
                     ios::out | ios::trunc);

    if (!foutser.is_open()) {
        cerr << "Error opening file: Search for a car by brand.txt" << endl;
        return;
    }

    bool found = false;
    for (const CarData& car : cars) {
        if (car.brand == brand) {
            found = true;
            foutser << car.type << "\t" << car.brand << "\t" << car.model << "\t"
                 << car.color << "\t" << car.fuel << "\t" << car.mileage << "\t" << car.doors << "\t"
                 << car.year << "\t" << car.price << "\t" << car.status << "\t"
                 << car.licensePlate << endl;
            cout << "Type: " << car.type << "\n"
                 << "Brand: " << car.brand << "\n"
                 << "Model: " << car.model << "\n"
                 << "Color: " << car.color << "\n"
                 << "Fuel: " << car.fuel << "L/100km\n"
                 << "Mileage: " << car.mileage << " km\n"
                 << "Number of doors: " << car.doors << "\n"
                 << "Year of production: " << car.year << "\n"
                 << "Price: " << car.price << " dollars\n"
                 << "Vehicle availability status: " << car.status << "\n"
                 << "License plate number of the car: " << car.licensePlate << endl;

        }
    }

    foutser.close();

    if (!found) {
        cout << "Cars with brand " << brand << " not found." << endl;
    }
}


void SearchCarsByModel(const string& model) {
    vector<CarData> cars;
    ifstream finser(R"(D:\Course Work\Code\Database\Cars.txt)");

    if (!finser.is_open()) {
        cerr << "Error opening file: Cars.txt" << endl;
        return;
    }

    string line;
    while (getline(finser, line)) {
        istringstream iss(line);
        CarData car;
        iss >> car.type >> car.brand >> car.model >> car.color >> car.fuel >> car.mileage >> car.doors >> car.year >> car.price >> car.status >> car.licensePlate;
        cars.push_back(car);
    }

    finser.close();

    ofstream foutser(R"(D:\Course Work\Code\Database\Search for a car by model.txt)",
                     ios::out | ios::trunc);

    if (!foutser.is_open()) {
        cerr << "Error opening file: Search for a car by model.txt" << endl;
        return;
    }

    bool found = false;
    for (const CarData& car : cars) {
        if (car.model == model) {
            found = true;
            foutser << car.type << "\t" << car.brand << "\t" << car.model << "\t"
                    << car.color << "\t" << car.fuel << "\t" << car.mileage << "\t" << car.doors << "\t"
                    << car.year << "\t" << car.price << "\t" << car.status << "\t"
                    << car.licensePlate << endl;
            cout << "Type: " << car.type << "\n"
                 << "Brand: " << car.brand << "\n"
                 << "Model: " << car.model << "\n"
                 << "Color: " << car.color << "\n"
                 << "Fuel: " << car.fuel << "L/100km\n"
                 << "Mileage: " << car.mileage << " km\n"
                 << "Number of doors: " << car.doors << "\n"
                 << "Year of production: " << car.year << "\n"
                 << "Price: " << car.price << " dollars\n"
                 << "Vehicle availability status: " << car.status << "\n"
                 << "License plate number of the car: " << car.licensePlate << endl;

        }
    }

    foutser.close();

    if (!found) {
        cout << "Cars with model " << model << " not found." << endl;
    }
}

void SearchCarsByColor(const string& color) {
    vector<CarData> cars;
    ifstream finser(R"(D:\Course Work\Code\Database\Cars.txt)");

    if (!finser.is_open()) {
        cerr << "Error opening file: Cars.txt" << endl;
        return;
    }

    string line;
    while (getline(finser, line)) {
        istringstream iss(line);
        CarData car;
        iss >> car.type >> car.brand >> car.model >> car.color >> car.fuel >> car.mileage >> car.doors >> car.year >> car.price >> car.status >> car.licensePlate;
        cars.push_back(car);
    }

    finser.close();

    ofstream foutser(R"(D:\Course Work\Code\Database\Search for a car by color.txt)",
                     ios::out | ios::trunc);

    if (!foutser.is_open()) {
        cerr << "Error opening file: Search for a car by color.txt" << endl;
        return;
    }

    bool found = false;
    for (const CarData& car : cars) {
        if (car.color == color) {
            found = true;
            foutser << car.type << "\t" << car.brand << "\t" << car.model << "\t"
                    << car.color << "\t" << car.fuel << "\t" << car.mileage << "\t" << car.doors << "\t"
                    << car.year << "\t" << car.price << "\t" << car.status << "\t"
                    << car.licensePlate << endl;
            cout << "Type: " << car.type << "\n"
                 << "Brand: " << car.brand << "\n"
                 << "Model: " << car.model << "\n"
                 << "Color: " << car.color << "\n"
                 << "Fuel: " << car.fuel << "L/100km\n"
                 << "Mileage: " << car.mileage << " km\n"
                 << "Number of doors: " << car.doors << "\n"
                 << "Year of production: " << car.year << "\n"
                 << "Price: " << car.price << " dollars\n"
                 << "Vehicle availability status: " << car.status << "\n"
                 << "License plate number of the car: " << car.licensePlate << endl;

        }
    }
    foutser.close();

    if (!found) {
        cout << "Cars with color " << color << " not found." << endl;
    }
}

void SearchCarsByType(const string& type) {
    vector<CarData> cars;
    ifstream finser(R"(D:\Course Work\Code\Database\Cars.txt)");

    if (!finser.is_open()) {
        cerr << "Error opening file: Cars.txt" << endl;
        return;
    }

    string line;
    while (getline(finser, line)) {
        istringstream iss(line);
        CarData car;
        iss >> car.type >> car.brand >> car.model >> car.color >> car.fuel >> car.mileage >> car.doors >> car.year >> car.price >> car.status >> car.licensePlate;
        cars.push_back(car);
    }

    finser.close();

    ofstream foutser(R"(D:\Course Work\Code\Database\Search for a car by type.txt)",
                     ios::out | ios::trunc);

    if (!foutser.is_open()) {
        cerr << "Error opening file: Search for a car by type.txt" << endl;
        return;
    }

    bool found = false;
    for (const CarData& car : cars) {
        if (car.type == type) {
            found = true;
            foutser << car.type << "\t" << car.brand << "\t" << car.model << "\t"
                    << car.color << "\t" << car.fuel << "\t" << car.mileage << "\t" << car.doors << "\t"
                    << car.year << "\t" << car.price << "\t" << car.status << "\t"
                    << car.licensePlate << endl;
            cout << "Type: " << car.type << "\n"
                 << "Brand: " << car.brand << "\n"
                 << "Model: " << car.model << "\n"
                 << "Color: " << car.color << "\n"
                 << "Fuel: " << car.fuel << "L/100km\n"
                 << "Mileage: " << car.mileage << " km\n"
                 << "Number of doors: " << car.doors << "\n"
                 << "Year of production: " << car.year << "\n"
                 << "Price: " << car.price << " dollars\n"
                 << "Vehicle availability status: " << car.status << "\n"
                 << "License plate number of the car: " << car.licensePlate << endl;

        }
    }
    foutser.close();

    if (!found) {
        cout << "Cars with type " << type << " not found." << endl;
    }
}


void SearchCarsByStatus(const string& status) {
    vector<CarData> cars;
    ifstream finser(R"(D:\Course Work\Code\Database\Cars.txt)");

    if (!finser.is_open()) {
        cerr << "Error opening file: Cars.txt" << endl;
        return;
    }

    string line;
    while (getline(finser, line)) {
        istringstream iss(line);
        CarData car;
        iss >> car.type >> car.brand >> car.model >> car.color >> car.fuel >> car.mileage >> car.doors >> car.year >> car.price >> car.status >> car.licensePlate;
        cars.push_back(car);
    }

    finser.close();

    ofstream foutser(R"(D:\Course Work\Code\Database\Search for a car by status.txt)",
                     ios::out | ios::trunc);

    if (!foutser.is_open()) {
        cerr << "Error opening file: Search for a car by status.txt" << endl;
        return;
    }

    bool found = false;
    for (const CarData& car : cars) {
        if (car.status == status) {
            found = true;
            foutser << car.type << "\t" << car.brand << "\t" << car.model << "\t"
                    << car.color << "\t" << car.fuel << "\t" << car.mileage << "\t" << car.doors << "\t"
                    << car.year << "\t" << car.price << "\t" << car.status << "\t"
                    << car.licensePlate << endl;
            cout << "Type: " << car.type << "\n"
                 << "Brand: " << car.brand << "\n"
                 << "Model: " << car.model << "\n"
                 << "Color: " << car.color << "\n"
                 << "Fuel: " << car.fuel << "L/100km\n"
                 << "Mileage: " << car.mileage << " km\n"
                 << "Number of doors: " << car.doors << "\n"
                 << "Year of production: " << car.year << "\n"
                 << "Price: " << car.price << " dollars\n"
                 << "Vehicle availability status: " << car.status << "\n"
                 << "License plate number of the car: " << car.licensePlate << endl;

        }
    }
    foutser.close();

    if (!found) {
        cout << "Cars with status " << status << " not found." << endl;
    }
}


void SearchCarsByModBr(const string& brand,const string& model) {
    vector<CarData> cars;
    ifstream finser(R"(D:\Course Work\Code\Database\Cars.txt)");

    if (!finser.is_open()) {
        cerr << "Error opening file: Cars.txt" << endl;
        return;
    }

    string line;
    while (getline(finser, line)) {
        istringstream iss(line);
        CarData car;
        iss >> car.type >> car.brand >> car.model >> car.color >> car.fuel >> car.mileage >> car.doors >> car.year >> car.price >> car.status >> car.licensePlate;
        cars.push_back(car);
    }

    finser.close();

    ofstream foutser(R"(D:\Course Work\Code\Database\Search for a car by brand and model.txt)",
                     ios::out | ios::trunc);

    if (!foutser.is_open()) {
        cerr << "Error opening file: Search for a car by brand and model.txt" << endl;
        return;
    }

    bool found = false;
    for (const CarData& car : cars) {
        if (car.brand == brand && car.model == model) {
            found = true;
            foutser << car.type << "\t" << car.brand << "\t" << car.model << "\t"
                    << car.color << "\t" << car.fuel << "\t" << car.mileage << "\t" << car.doors << "\t"
                    << car.year << "\t" << car.price << "\t" << car.status << "\t"
                    << car.licensePlate << endl;
            cout << "Type: " << car.type << "\n"
                 << "Brand: " << car.brand << "\n"
                 << "Model: " << car.model << "\n"
                 << "Color: " << car.color << "\n"
                 << "Fuel: " << car.fuel << "L/100km\n"
                 << "Mileage: " << car.mileage << " km\n"
                 << "Number of doors: " << car.doors << "\n"
                 << "Year of production: " << car.year << "\n"
                 << "Price: " << car.price << " dollars\n"
                 << "Vehicle availability status: " << car.status << "\n"
                 << "License plate number of the car: " << car.licensePlate << endl;

        }
    }
    foutser.close();

    if (!found) {
        cout << "Cars with brand " << brand <<" and model " << model << " not found." << endl;
    }
}



vector<CarData> SearchCars(const string& filname) {
    vector<CarData> cars;
    ifstream fin(R"(D:\Course Work\Code\Database\Cars.txt)");

    if (!fin.is_open()) {
        cerr << "Error opening file: " << filname << endl;
        return cars;
    }

    string line;
    while (getline(fin, line)) {
        istringstream iss(line);
        CarData car;
        iss >> car.type >> car.brand >> car.model >> car.color >> car.fuel >> car.mileage >> car.doors >> car.year >> car.price >> car.status >> car.licensePlate;
        cars.push_back(car);
    }

    fin.close();
    return cars;
}

void printCar(const CarData& car, const string& name) {
        ofstream fout(name, ios::out | ios::trunc);
        if (!fout.is_open()) {
            cerr << "Error opening file: " << name << endl;
            return;
        }
    fout << car.type << "\t" << car.brand << "\t" << car.model << "\t"
            << car.color << "\t" << car.fuel << "\t" << car.mileage << "\t" << car.doors << "\t"
            << car.year << "\t" << car.price << "\t" << car.status << "\t"
            << car.licensePlate << endl;
    fout.close();
}

void printCars(const CarData& car) {
        cout << "Type: " << car.type << "\n"
             << "Brand: " << car.brand << "\n"
             << "Model: " << car.model << "\n"
             << "Color: " << car.color << "\n"
             << "Fuel: " << car.fuel << "L/100km\n"
             << "Mileage: " << car.mileage << " km\n"
             << "Number of doors: " << car.doors << "\n"
             << "Year of production: " << car.year << "\n"
             << "Price: " << car.price << " dollars\n"
             << "Vehicle availability status: " << car.status << "\n"
             << "License plate number of the car: " << car.licensePlate << endl;

}

CarData findCheapestCar(const vector<CarData>& cars) {
    if (cars.empty()) {

        return CarData();
    }
    return *min_element(cars.begin(), cars.end(), [](const CarData& a, const CarData& b) {
        return a.price < b.price;
    });
}


CarData findExpensiveCar(const vector<CarData>& cars) {
    if (cars.empty()) {
        return CarData();
    }
    return *max_element(cars.begin(), cars.end(), [](const CarData& a, const CarData& b) {
        return a.price < b.price;
    });
}

CarData findLowestMileage(const vector<CarData>& cars) {
    if (cars.empty()) {

        return CarData();
    }
    return *min_element(cars.begin(), cars.end(), [](const CarData& a, const CarData& b) {
        return a.mileage < b.mileage;
    });
}

CarData findHighestMileage(const vector<CarData>& cars) {
    if (cars.empty()) {
        return CarData();
    }
    return *max_element(cars.begin(), cars.end(), [](const CarData& a, const CarData& b) {
        return a.mileage < b.mileage;
    });
}


CarData findMostEconomical(const vector<CarData>& cars) {
    if (cars.empty()) {
        return CarData();
    }
    return *min_element(cars.begin(), cars.end(), [](const CarData& a, const CarData& b) {
        return a.fuel < b.fuel;
    });
}


CarData findLeastEconomical(const vector<CarData>& cars) {
    if (cars.empty()) {

        return CarData();
    }
    return *max_element(cars.begin(), cars.end(), [](const CarData& a, const CarData& b) {
        return a.fuel < b.fuel;
    });
}


CarData findOldest(const vector<CarData>& cars) {
    if (cars.empty()) {

        return CarData();
    }
    return *min_element(cars.begin(), cars.end(), [](const CarData& a, const CarData& b) {
        return a.year < b.year;
    });
}


CarData findYoungest(const vector<CarData>& cars) {
    if (cars.empty()) {
        return CarData();
    }
    return *max_element(cars.begin(), cars.end(), [](const CarData& a, const CarData& b) {
        return a.year < b.year;
    });
}




void ReadSed(Sedan &sedan){
    ifstream finSed(R"(D:\Course Work\Code\Database\Sedan.txt)");
    if (!finSed.is_open()) {
        cerr << "Error opening file: Sedan.txt" << endl;
        return;
    }
    shared_ptr<string> type{new string{""}};
    shared_ptr<string> brand{new string{""}};
    shared_ptr<string> model{new string{""}};
    shared_ptr<string> color{new string{""}};
    shared_ptr<double> fuel{new double{0.0}};
    shared_ptr<double> mileage{new double{0.0}};
    shared_ptr<int> doors{new int{0}};
    shared_ptr<int> production{new int{0}};
    shared_ptr<double> price{new double {0.0}};
    shared_ptr<string> inventoryStatus{new string{""}};
    shared_ptr<string> licenseplate{new string{""}};
    shared_ptr<string> typeofroof{new string{""}};
    shared_ptr<int> maxspeed{new int{0}};
    shared_ptr<string> engineCapacity{new string {""}};
    shared_ptr<string> power{new string {""}};
    shared_ptr<string> engineType{new string {""}};
    while(finSed >> *type >> *brand >> *model >> *color >> *fuel >> *mileage >> *doors >> *production >> *price >>
    *inventoryStatus >> *licenseplate >> *typeofroof >> *maxspeed >> *engineCapacity >> *power >> *engineType){
        cout << "Type: " << *type  << "\n"  << "Brand: " << *brand << "\n" << "Model: " << *model << "\n" << "Color: "
             << *color << "\n" << "Fuel :" << *fuel << " 100km" <<"\n" << "Mileage: " << *mileage << " km" << "\n" << "Number of doors: " << *doors << "\n" << "Year of production: "
             << *production << "\n" << "Price: " << *price << " dollars" <<"\n" << "Vehicle availability status (for example, 'available', 'sold', 'reserved') : "
             << *inventoryStatus << "\n" << "License plate number of the car: " << *licenseplate << "\n" << "Type of roof: " << *typeofroof << "\n" << "Max speed: " << *maxspeed
             << "km/h" << "\n" << "Engine capacity: " << *engineCapacity << "/L" <<"\n" << "Power:"
             << *power << "/HP" << "\n" << "Engine type(patrol,diesel,gas): " <<*engineType << endl;
    }
    finSed.close();
}


void ReadVan(Van &van){
    ifstream finVan(R"(D:\Course Work\Code\Database\Van.txt)");
    if (!finVan.is_open()) {
        cerr << "Error opening file: " << endl;
    }
    shared_ptr<string> type{new string{""}};
    shared_ptr<string> brand{new string{""}};
    shared_ptr<string> model{new string{""}};
    shared_ptr<string> color{new string{""}};
    shared_ptr<double> fuel{new double{0.0}};
    shared_ptr<double> mileage{new double{0.0}};
    shared_ptr<int> doors{new int{0}};
    shared_ptr<int> production{new int{0}};
    shared_ptr<double> price{new double {0.0}};
    shared_ptr<string> inventoryStatus{new string{""}};
    shared_ptr<string> licenseplate{new string{""}};
    shared_ptr<int> payloadCapacity{new int{0}};
    shared_ptr<int> sleepingCapacity{new int{0}};
    shared_ptr<string> engineCapacity{new string {""}};
    shared_ptr<string> power{new string {""}};
    shared_ptr<string> engineType{new string {""}};
    while(finVan >> *type >> *brand >> *model >> *color >> *fuel >> *mileage >> *doors >> *production >> *price >>
                 *inventoryStatus >> *licenseplate >> *payloadCapacity >> *sleepingCapacity >> *engineCapacity >> *power >> *engineType){
        cout << "Type: " << *type  << "\n"  << "Brand: " << *brand << "\n" << "Model: " << *model << "\n" << "Color: "
             << *color << "\n" << "Fuel :" << *fuel << " 100km" <<"\n" << "Mileage: " << *mileage << " km" << "\n"  "Number of doors: " << *doors << "\n" << "Year of production: "
             << *production << "\n" << "Price: " << *price << " dollars" <<"\n" << "Vehicle availability status (for example, 'available', 'sold', 'reserved') : "
             << *inventoryStatus << "\n" << "License plate number of the car: " << *licenseplate << "\n"  << " Payload capacity: " << *payloadCapacity << "\n" << " Sleeping capacity: " << *sleepingCapacity
             << "km/h" << "\n" << "Engine capacity: " << *engineCapacity << "/L" <<"\n" << "Power:"
             << *power << "/HP" << "\n" << "Engine type(patrol,diesel,gas): " <<*engineType << endl;
    }
    finVan.close();
}



void ReadCars(Cars &cars){
    ifstream finCar(R"(D:\Course Work\Code\Database\Cars.txt)");
    if (!finCar.is_open()) {
        cerr << "Error opening file: " << endl;
    }
    shared_ptr<string> type{new string{""}};
    shared_ptr<string> brand{new string{""}};
    shared_ptr<string> model{new string{""}};
    shared_ptr<string> color{new string{""}};
    shared_ptr<double> fuel{new double{0.0}};
    shared_ptr<double> mileage{new double{0.0}};
    shared_ptr<int> doors{new int{0}};
    shared_ptr<int> production{new int{0}};
    shared_ptr<double> price{new double {0.0}};
    shared_ptr<string> inventoryStatus{new string{""}};
    shared_ptr<string> licenseplate{new string{""}};
    while(finCar >> *type >> *brand >> *model >> *color >> *fuel >> *mileage >> *doors >> *production >> *price >>
                 *inventoryStatus >> *licenseplate){
        cout << "Type: " << *type  << "\n"  << "Brand: " << *brand << "\n" << "Model: " << *model << "\n" << "Color: "
             << *color << "\n" << "Fuel :" << *fuel << " 100km" <<"\n" << "Mileage: " << *mileage << " km" << "\n"  "Number of doors: " << *doors << "\n" << "Year of production: "
             << *production << "\n" << "Price: " << *price << " dollars" <<"\n" << "Vehicle availability status (for example, 'available', 'sold', 'reserved') : "
             << *inventoryStatus << "\n" << "License plate number of the car: " << *licenseplate << endl;
    }
    finCar.close();
}


void BuyOrReserveCar(vector<CarData> &cars, const Users &user) {
    cout << "Enter the license plate number of the car you want to buy or reserve: ";
    string licensePlate;
    cin >> licensePlate;

    ifstream finCar(R"(D:\Course Work\Code\Database\Cars.txt)");
    if (!finCar) {
        cerr << "Error opening file!" << endl;
        return;
    }

    string line;
    vector<CarData> carList;
    while (getline(finCar, line)) {
        istringstream iss(line);
        CarData car;
        iss >> car.type >> car.brand >> car.model >> car.color >> car.fuel >> car.mileage
            >> car.doors >> car.year >> car.price >> car.status >> car.licensePlate;
        carList.push_back(car);
    }
    finCar.close();

    bool found = false;
    CarData *selectedCar = nullptr;
    for (auto &car : carList) {
        if (car.licensePlate == licensePlate) {
            found = true;
            selectedCar = &car;
            break;
        }
    }

    if (!found) {
        cout << "The car with this license plate was not found." << endl;
        return;
    }

    if (selectedCar->status != "Available") {
        cout << "This vehicle is no longer available for purchase or reservation." << endl;
        return;
    }

    cout << "Enter an action (buy or reserve): ";
    string action;
    cin >> action;

    if (action == "buy" || action == "reserve") {
        selectedCar->status = (action == "buy") ? "Sold" : "Reserved";

        ofstream fout(action == "buy" ? R"(D:\Course Work\Code\Database\Bought cars by users.txt)"
                                      : R"(D:\Course Work\Code\Database\Reserved cars by users.txt)",
                      ios_base::app);
        fout << "User ID: " << user.getUserID() << "\t" << "Name: " << user.getName() << "\t"
             << "Phone: " << user.getPhone() << "\t" << "Email: " << user.getEmail() << endl;
        fout << "Car details: " << selectedCar->type << "\t" << selectedCar->brand << "\t" << selectedCar->model << "\t"
             << selectedCar->color << "\t" << selectedCar->fuel << "\t" << selectedCar->mileage << "\t"
             << selectedCar->doors << "\t" << selectedCar->year << "\t" << selectedCar->price << "\t"
             << selectedCar->status << "\t" << selectedCar->licensePlate << endl << endl;
        fout.close();

        ofstream foutCar(R"(D:\Course Work\Code\Database\Cars.txt)");
        for (const auto &car : carList) {
            foutCar << car.type << "\t" << car.brand << "\t" << car.model << "\t"
                    << car.color << "\t" << car.fuel << "\t" << car.mileage << "\t"
                    << car.doors << "\t" << car.year << "\t" << car.price << "\t"
                    << car.status << "\t" << car.licensePlate << endl;
        }
        foutCar.close();

        cout << "The operation has been successfully completed. The vehicle status has been updated." << endl;
    } else {
        cout << "Wrong action. You can only buy or reserve." << endl;
    }
}

