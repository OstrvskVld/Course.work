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




//using namespace std;
//
//void Probels(){
//    cout<<endl<<"--------------------------"<<endl;
//};
//
//void AddVehicle(Vehicle &vehicle) {
//    cout << " You want to add new vehicle: " << endl;
//    cout << " What is the name of the transport? " << endl;
//    shared_ptr<string> nam{new string{""}};
//    cin >> *nam;
//    cout << " Is it available? " << endl;
//    shared_ptr<string> aval{new string{""}};
//    cin >> *aval;
//    cout << " Is it possible to bring from abroad? " << endl;
//    shared_ptr<string> deliv{new string{""}};
//    cin >> *deliv;
//    cout << " Enter age of vehicle: " << endl;
//    shared_ptr<double> age{new double{0}};
//    cin >> *age;
//    cout << " Type of vehicle: " << endl;
//    shared_ptr<string> typeOfVehicle{new string{""}};
//    cin >> *typeOfVehicle;
//    if (*aval == "No" && *deliv == "No")
//        throw AnotherVariant();
//    Vehicle vehic(*nam, *typeOfVehicle, *age, *aval, *deliv);
//    ofstream foutVe(R"(C:\Oop143\Laba_4\Vehicle.txt)",
//                    ios_base::app);
//    foutVe << vehic << "\t" << endl;
//    foutVe.close();
//    Probels();
//}
//
//
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


