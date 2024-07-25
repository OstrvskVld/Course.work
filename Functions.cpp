#include "Vehicle.h"
#include "Functions.h"
#include <iostream>
#include "memory"
#include <fstream>
#include "Cars.h"
#include "Engine.h"
#include "Bike.h"
#include "WrongType.h"
#include "AnotherVariant.h"
#include "People.h"
#include "Drivers.h"
#include "vector"




using namespace std;

//void Probels(){
//    cout<<endl<<"--------------------------"<<endl;
//};

void AddCars(Cars &cars) {
    cout << " You want to add a new car: " << endl;
    cout << " What type of transportation? " << endl;
    shared_ptr<string> type{new string{""}};
    cin >> *type;
    cars.setType(*type);
    if (*type != "Sedan" && *type != "Van") {
        throw AnotherVariant();
    }
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
    if (*inventoryStatus != "Available" && *inventoryStatus != "Sold" && *inventoryStatus != "Reserved") {
        throw AnotherVariant();
    }
//    if (*inventoryStatus == "Sold" && "Reserved")
//        throw AnotherVariant();
    Cars car(*type,*brand, *model, *color, *fuel, *doors,*production,
             *price, *inventoryStatus);
    ofstream foutCar(R"(D:\Course Work\Code\Cars.txt)",
                    ios_base::app);
    foutCar << "Type: " << *type  << "\t"  << "Brand: " << *brand << "\t" << "Model: " << *model << "\t" << "Color: "
    << *color << "\t" << "Fuel :" << *fuel << " 100km" <<"\t" << "Number of doors: " << *doors << "\t" << "Year of production: "
    << *production << "\t" << "Price: " << *price << " dollars" <<"\t" << "Vehicle availability status (for example, 'available', 'sold', 'reserved') :"
    << *inventoryStatus << endl;
    foutCar.close();
//    Probels();
}


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
//void ReadVehicle(Vehicle &vehicle){
//    ifstream finE(R"(C:\Oop143\Laba_4\Vehicle.txt)");
//    if (!finE.is_open()) {
//        cerr << "Error opening file: " << endl;
//    }
//    shared_ptr<string> nam{new string{""}};
//    shared_ptr<string> aval{new string{""}};
//    shared_ptr<string> deliv{new string{""}};
//    shared_ptr<double> age{new double{0.0}};
//    shared_ptr<string> typeOfVehicle{new string{""}};
//    while(finE >> *nam >> *deliv >> *aval >> *age >> *typeOfVehicle){
//        cout << *nam << "\t" << *deliv << "\t" << *aval << "\t" << *age << "\t" << *typeOfVehicle << "\t" << endl;
//    }
//    finE.close();
//}
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


