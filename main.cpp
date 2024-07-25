#include <iostream>
#include "Vehicle.h"
#include "Cars.h"
#include "Sedan.h"
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
Cars cars("","","","",0,0,0,0,"");
//Vehicle vehicle("","",0,"","");
//Bike bike(vehicle,"","",0);
//People personal("",0,0,"");

int main() {
    Cars car;
    AddCars(car);
    car.printInfo();
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


