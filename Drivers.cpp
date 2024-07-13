
#include "People.h"
#include "Drivers.h"

using namespace std;

//Drivers::Drivers()
//        : People(), number(0), placeOfResidence(""), ownCar("","",0,"","",0,0,Engine()){};
//Drivers::Drivers(string name, int age, double salary, string sal, double number, string placeOfResidence, Cars ownCar)
//        : People (name, age,  salary, sal), number{number}, placeOfResidence{placeOfResidence},ownCar(ownCar) {};
Drivers::Drivers(double number,string placeOfResidence)
        : number{number}, placeOfResidence{placeOfResidence}{}
Drivers::Drivers(People pepl, double number, std::string placeOfResidence)
        : People(name,age,salary,sal),number{number},placeOfResidence{placeOfResidence}{}
Drivers Drivers::operator=(const Drivers &rhs) {
    if (this == &rhs)
        return *this;
    else {
        Drivers::operator=(rhs);
        number = rhs.number;
        placeOfResidence = rhs.placeOfResidence;
        return *this;
    }
}
ostream &operator<<(ostream &os, const Drivers &obj){
    os<< " Phone number: " <<obj.number << " Place of residence: "<<obj.placeOfResidence; //<<  obj.ownCar;
    return os;
}
