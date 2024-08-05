#include "Vehicle.h"
#include "Functions.h"
#include <iostream>
#include "memory"
#include <fstream>
#include "Cars.h"
#include "Van.h"
#include "Sedan.h"
#include "Engine.h"
#include "Bike.h"
#include "WrongType.h"
#include "AnotherVariant.h"
#include "People.h"
#include "Drivers.h"
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
    cout << " You want to add a new car: " << endl;
//    cout << " What type of transportation? " << endl;
    shared_ptr<string> type{new string{""}};
//    cin >> *type;
//    cars.setType(*type);
        for (int attempts = 0; attempts < 3; ++attempts) {
            cout << " What type of transportation? (Sedan or Van): ";
            cin >> *type;
            if (*type == "Sedan" || *type == "Van") {
                break;
            } else {
                cout << " Incorrect input. Please try again. " << endl;
            }
        }
        if (*type != "Sedan" && *type != "Van") {
            cout << " Too many incorrect attempts. Exiting program. " << endl;
            exit(1);
        }
    cars.setType(*type);
    cout << " What is the brand of the transport? " << endl;
    shared_ptr<string> brand{new string{""}};
    cin >> *brand;
    cars.setBrand(*brand);
    cout << " What is the model of the car? " << endl;
    shared_ptr<string> model{new string{""}};
    cin >> *model;
    cars.setModel(*model);
    cout << " What is the color of the car? " << endl;
    shared_ptr<string> color{new string{""}};
    cin >> *color;
    cars.setColor(*color);
    cout << " What is the fuel consumption on 100km? " << endl;
    shared_ptr<double> fuel{new double{0.0}};
    cin >> *fuel;
    cars.setFuel(*fuel);
    cout << " What is the mileage of the car? " << endl;
    shared_ptr<double> mileage{new double{0.0}};
    cin >> *mileage;
    cars.setMileage(*mileage);
    cout << " How many doors? " << endl;
    shared_ptr<int> doors{new int{0}};
    cin >> *doors;
    cars.setDoors(*doors);
    cout << " What is the year of production? " << endl;
    shared_ptr<int> production{new int{0}};
    cin >> *production;
    cars.setYear(*production);
    cout << " What is the price of the car? " << endl;
    shared_ptr<double> price{new double {0.0}};
    cin >> *price;
    cars.setPrice(*price);
    cout << " Vehicle availability status (for example, 'available', 'sold', 'reserved') : " << endl;
    shared_ptr<string> inventoryStatus{new string{""}};
    cin >> *inventoryStatus;
    cars.setStatus(*inventoryStatus);
    cout << "License plate number of the car: "  << endl;
    shared_ptr<string> licenseplate{new string{""}};
    cin >> *licenseplate;
    cars.setPlate(*licenseplate);
    if (*inventoryStatus != "Available" && *inventoryStatus != "Sold" && *inventoryStatus != "Reserved") {
        throw AnotherVariant();
    }
//    if (*inventoryStatus == "Sold" && "Reserved")
//        throw AnotherVariant();
    Cars car(*type,*brand, *model, *color, *fuel, *mileage, *doors,*production,
             *price, *inventoryStatus,*licenseplate);
    ofstream foutCar(R"(D:\Course Work\Code\Database\Cars.txt)",
                    ios_base::app);
    foutCar << *type  << "\t"  << *brand << "\t"  << *model << "\t"
    << *color << "\t"  << *fuel  <<"\t"  << *mileage  <<"\t"  << *doors << "\t"
    << *production << "\t"  << *price <<"\t"
    << *inventoryStatus << "\t" << *licenseplate << endl;
    foutCar.close();
    Probels();
}
void AddinfSed(Sedan &sedan){
    Engine engine1;
    Cars car1;
//    cout << " You want to add more about the sedan: " << endl;
    cout << " Choose which sedan you want to know more about: " << endl;
    ifstream finCar(R"(D:\Course Work\Code\Database\Cars.txt)");
    if (!finCar.is_open())
        cerr << "Error opening file: " << endl;
    shared_ptr<string> nazvmar{new string{""}};
    cout << " What is the brand of the transport? " << endl;
    cin >> *nazvmar;
    shared_ptr<string> nazvamod{new string{""}};
    cout << " What is the model of the car? " << endl;
    cin >> *nazvamod;
    shared_ptr<string> type{new string{""}};
    car1.setType(*type);
    shared_ptr<string> brand{new string{""}};
    car1.setBrand(*brand);
    shared_ptr<string> model{new string{""}};
    car1.setModel(*model);
    shared_ptr<string> color{new string{""}};
    car1.setColor(*color);
    shared_ptr<double> fuel{new double{0.0}};
    car1.setFuel(*fuel);
    shared_ptr<double> mileage{new double{0.0}};
    car1.setMileage(*mileage);
    shared_ptr<int> doors{new int{0}};
    car1.setDoors(*doors);
    shared_ptr<int> production{new int{0}};
    car1.setYear(*production);
    shared_ptr<double> price{new double {0.0}};
    car1.setPrice(*price);
    shared_ptr<string> inventoryStatus{new string{""}};
    car1.setStatus(*inventoryStatus);
    shared_ptr<string> licenseplate{new string{""}};
    car1.setPlate(*licenseplate);
    while (finCar >> *type >> *brand >> *model >> *color >> *fuel >> *mileage >> *doors >> *production >> *price >>
                  *inventoryStatus >> *licenseplate) {
        Cars cars(*type, *brand, *model, *color, *fuel, *mileage, *doors, *production,
                  *price, *inventoryStatus,*licenseplate);
        if (cars.getBrand() == *nazvmar && cars.getModel() == *nazvamod) {
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
            cout << " Type of roof: " << endl;
            shared_ptr<string> typeofroof{new string{""}};
            cin >> *typeofroof;
            sedan.setTypeofroof(*typeofroof);
            cout << " Max speed: " << endl;
            shared_ptr<int> maxspeed{new int{0}};
            cin >> *maxspeed;
            sedan.setSpeed(*maxspeed);
            cout << " Engine characteristics: " << endl;
            cout << " Engine capacity: " << endl;
            shared_ptr<string> engineCapacity{new string{""}};
            cin >> *engineCapacity;
            sedan.getEngine().setCapacity(*engineCapacity);
            cout << " Power: " << endl;
            shared_ptr<string> power{new string{""}};
            cin >> *power;
            sedan.getEngine().setPower(*power);
            cout << " Engine type: " << endl;
            shared_ptr<string> engineType{new string{""}};
            cin >> *engineType;
            sedan.getEngine().setType(*engineType);
            Sedan sedan1(*type,  *licenseplate, *brand, *inventoryStatus, *model, *color, *fuel,*mileage, *doors, *production, *price,
                         *typeofroof,
                         *maxspeed, Engine(*engineCapacity, *power, *engineType));
            ofstream foutSed(R"(D:\Course Work\Code\Database\Sedan.txt)",
                             ios_base::app);
            foutSed << *type << "\t" << *brand << "\t" << *model << "\t"
                    << *color << "\t" << *fuel << "\t" << *mileage << "\t" << *doors << "\t"
                    << *production  << *price << "\t"
                    << *inventoryStatus << "\t" << *licenseplate << "\t"<< *typeofroof << "\t"
                    << *maxspeed << "\t" << *engineCapacity << "\t" << *power <<
                    "\t" << *engineType << endl;
//            sedan = Sedan(cars);

//            cout << "Type: " << *type  << "\n"  << "Brand: " << *brand << "\n" << "Model: " << *model << "\n" << "Color: "
//                 << *color << "\n" << "Fuel :" << *fuel << " 100km" <<"\n" << "Number of doors: " << *doors << "\n" << "Year of production: "
//                 << *production << "\n" << "Price: " << *price << " dollars" <<"\n" << "Vehicle availability status (for example, 'available', 'sold', 'reserved') : "
//                 << *inventoryStatus << "\n" << "Type of roof: " << *typeofroof << "\n" << "Max speed: " << *maxspeed
//                 << "km/h" << "\n" << "Engine capacity: " << *engineCapacity << "/L" <<"\n" << "Power:"
//                 << *power << "/HP" << "\n" << "Engine type(patrol,diesel,gas): " <<*engineType << endl;
            foutSed.close();
//            Probels();
        }
//            foutCar << vehic << "\t" << endl;
    }
    }

void AddinfVan(Van &van){
    Engine engine2;
    Cars car1;
//    cout << " You want to add more about the sedan: " << endl;
    cout << " Choose which van you want to know more about: " << endl;
    ifstream finCar(R"(D:\Course Work\Code\Database\Cars.txt)");
    if (!finCar.is_open())
        cerr << "Error opening file: " << endl;
    shared_ptr<string> nazvmar{new string{""}};
    cout << " What is the brand of the transport? " << endl;
    cin >> *nazvmar;
    shared_ptr<string> nazvamod{new string{""}};
    cout << " What is the model of the car? " << endl;
    cin >> *nazvamod;
    shared_ptr<string> type{new string{""}};
    car1.setType(*type);
    shared_ptr<string> brand{new string{""}};
    car1.setBrand(*brand);
    shared_ptr<string> model{new string{""}};
    car1.setModel(*model);
    shared_ptr<string> color{new string{""}};
    car1.setColor(*color);
    shared_ptr<double> fuel{new double{0.0}};
    car1.setFuel(*fuel);
    shared_ptr<double> mileage{new double{0.0}};
    car1.setMileage(*mileage);
    shared_ptr<int> doors{new int{0}};
    car1.setDoors(*doors);
    shared_ptr<int> production{new int{0}};
    car1.setYear(*production);
    shared_ptr<double> price{new double {0.0}};
    car1.setPrice(*price);
    shared_ptr<string> inventoryStatus{new string{""}};
    car1.setStatus(*inventoryStatus);
    shared_ptr<string> licenseplate{new string{""}};
    car1.setPlate(*licenseplate);
    while (finCar >> *type >> *brand >> *model >> *color >> *fuel >> *mileage >> *doors >> *production >> *price >>
                  *inventoryStatus >> *licenseplate) {
        Cars cars(*type, *brand, *model, *color, *fuel, *mileage, *doors, *production,
                  *price, *inventoryStatus, *licenseplate);
        if (cars.getBrand() == *nazvmar && cars.getModel() == *nazvamod) {
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
            cout << " What is the van's payload capacity? " << endl;
            shared_ptr<int> payloadCapacity{new int{0}};
            cin >> *payloadCapacity;
            van.setPayloadCap(*payloadCapacity);
            cout << " What is the van`s sleeping capacity? " << endl;
            shared_ptr<int> sleepingCapacity{new int{0}};
            cin >> *sleepingCapacity;
            van.setSleepCap(*sleepingCapacity);
            cout << " Engine characteristics: " << endl;
            cout << " Engine capacity: " << endl;
            shared_ptr<string> engineCapacity{new string{""}};
            cin >> *engineCapacity;
            van.getEngine().setCapacity(*engineCapacity);
            cout << " Power: " << endl;
            shared_ptr<string> power{new string{""}};
            cin >> *power;
            van.getEngine().setPower(*power);
            cout << " Engine type: " << endl;
            shared_ptr<string> engineType{new string{""}};
            cin >> *engineType;
            van.getEngine().setType(*engineType);
            Van van1(*type, *brand, *licenseplate, *inventoryStatus, *model, *color, *fuel, *mileage, *doors, *production, *price,
                         *payloadCapacity,
                         *sleepingCapacity, Engine(*engineCapacity, *power, *engineType));
            ofstream foutVan(R"(D:\Course Work\Code\Database\Van.txt)",
                             ios_base::app);
            foutVan << *type << "\t" << *brand << "\t" << *model << "\t"
                    << *color << "\t" << *fuel << "\t" << *mileage << "\t" << *doors << "\t"
                    << *production << "\t" << *price << "\t"
                    << *inventoryStatus << "\t" <<*licenseplate << "\t" << *payloadCapacity << "\t"
                    << *sleepingCapacity << "\t" << *engineCapacity << "\t" << *power <<
                    "\t" << *engineType << endl;
//            sedan = Sedan(cars);

//            cout << "Type: " << *type  << "\n"  << "Brand: " << *brand << "\n" << "Model: " << *model << "\n" << "Color: "
//                 << *color << "\n" << "Fuel :" << *fuel << " 100km" <<"\n" << "Number of doors: " << *doors << "\n" << "Year of production: "
//                 << *production << "\n" << "Price: " << *price << " dollars" <<"\n" << "Vehicle availability status (for example, 'available', 'sold', 'reserved') : "
//                 << *inventoryStatus << "\n" << "Type of roof: " << *typeofroof << "\n" << "Max speed: " << *maxspeed
//                 << "km/h" << "\n" << "Engine capacity: " << *engineCapacity << "/L" <<"\n" << "Power:"
//                 << *power << "/HP" << "\n" << "Engine type(patrol,diesel,gas): " <<*engineType << endl;
            foutVan.close();
//            Probels();
        }
//            foutCar << vehic << "\t" << endl;
    }
}


struct CarData {
    string type;
    string brand;
    string model;
    string color;
    double fuel;
    int doors;
    int year;
    double price;
    string status;
    string licensePlate;
    double mileage;
};
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

    ofstream foutyear(sorted, ios_base::app);
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









//    finCar.close();
//
//    cout << " Type of roof: " << endl;
//    shared_ptr<string> typeofroof{new string{""}};
//    cin >> *typeofroof;
//    cout << " Max speed: " << endl;
//    shared_ptr<int> maxspeed{new int{0}};
//    cin >> *maxspeed;
//    cout <<" Engine characteristics: " << endl;
//    cout << " Engine capacity: " << endl;
//    shared_ptr<string> engineCapacity{new string {""}};
//    cin >> *engineCapacity;
//    cout << " Power: " << endl;
//    shared_ptr<string> power{new string {""}};
//    cin >> *power;
//    cout << " Engine type: " << endl;
//    shared_ptr<string> engineType{new string {""}};
//    cin >> *engineType;
//}


//void AddPersonal(People &people){
//    cout << " You want to add new person: " << endl;
//    cout << " What is the employee`s name? " << endl;
//    shared_ptr <string> nam{new string {""}};
//    cin >> *nam;
//    cout << " Age: " << endl;
//    shared_ptr <int> ag{new int {0}};
//    cin >> *ag;
//    cout << " Amount of salary: " << endl;
//    shared_ptr <double> sal{new double {0}};
//    cin >> *sal;
//    cout << " Salary is/is not received? " << endl;
//    shared_ptr <string> ifsal{new string {""}};
//    cin >> *ifsal;
//    People pepl(*nam,*ag,*sal,*ifsal);
//    ofstream foutPeople(R"(C:\Oop143\Laba_4\People.txt)",
//                        ios_base::app);
//    foutPeople << pepl << "\t" << endl;
//    foutPeople.close();
//    Probels();
//
//
//}
//void ReadPersonal(People &people){
//    ifstream finE(R"(C:\Oop143\Laba_4\People.txt)");
//    if (!finE.is_open()) {
//        cerr << "Error opening file: " << endl;
//    }
//
//    shared_ptr <string> nam{new string {""}};
//    shared_ptr <int> ag{new int {0}};
//    shared_ptr <double> sal{new double {0}};
//    shared_ptr <string> ifsal{new string {""}};
//
//    while (finE >> *nam >> *ag >> *sal >> *ifsal) {
//        cout << *nam << " " << *ag << "\t" << *sal << "\t" << *ifsal << "\t" << endl;
//    }
//    finE.close();
//}
//
void ReadSed(Sedan &sedan){
    ifstream finSed(R"(D:\Course Work\Code\Database\Sedan.txt)");
    if (!finSed.is_open()) {
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
    shared_ptr<string> typeofroof{new string{""}};
    shared_ptr<int> maxspeed{new int{0}};
    shared_ptr<string> engineCapacity{new string {""}};
    shared_ptr<string> power{new string {""}};
    shared_ptr<string> engineType{new string {""}};
    while(finSed >> *type >> *brand >> *model >> *color >> *fuel >> *mileage >> *doors >> *production >> *price >>
    *inventoryStatus >> *typeofroof >> *maxspeed >> *engineCapacity >> *power >> *engineType){
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
                 *inventoryStatus >> *payloadCapacity >> *sleepingCapacity >> *engineCapacity >> *power >> *engineType){
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
//
//void BuyACar(Vehicle &vehicle) {
//    cout << " You want to buy a vehicle: " << endl;
//    cout << " Choose which vehicle you want to buy: " << endl;
//    ifstream finE(R"(C:\Oop143\Laba_4\Vehicle.txt)");
//    if (!finE.is_open())
//        cerr << "Error opening file: " << endl;
//
//
//    shared_ptr<string> nazv{new string{""}};
//    cin >> *nazv;
//    shared_ptr<string> nam{new string{""}};
//    shared_ptr<string> aval{new string{""}};
//    shared_ptr<string> deliv{new string{""}};
//    shared_ptr<double> age{new double{0}};
//    shared_ptr<string> typeOfVehicle{new string{""}};
//    while (finE >> *nam >> *aval >> *deliv >> *age >> *typeOfVehicle) {
//        cout << *nam << " " << *aval << " " << *deliv << " " << *age << " " << *typeOfVehicle << " " << endl;
//
//        if (*nam == *nazv) {
//            Vehicle vehic(*nam, *typeOfVehicle, *age, *aval, *deliv);
//            ofstream foutCar(R"(C:\Oop143\Laba_4\Purchase.txt)",
//                             ios_base::app);
//            foutCar << vehic << "\t" << endl;
//            break;
//        }
//    }
//    finE.close();
//}
//
//
//
//
//
//
//
//


