
#include "Vehicle.h"
#include <iostream>

using namespace std;

Vehicle::Vehicle()
        : Vehicle("","",0,"",""){}
Vehicle::Vehicle(double age) : age{age} {}
Vehicle::Vehicle(std::string name, std::string availability, string del)
        : name(name), age(age), availability(availability), del(del){}
Vehicle::Vehicle(string name, string typeOfVehicle, double age, string availability)
        : name(name), typeOfVehicle(typeOfVehicle), age(age), availability(availability) {}
Vehicle::Vehicle(string name, string typeOfVehicle, double age, string availability,string del)
        : name(name), typeOfVehicle(typeOfVehicle), age(age), availability(availability), del(del) {}
Vehicle::Vehicle(const Vehicle &other) {
    name=other.name;
    typeOfVehicle=other.typeOfVehicle;
    age=other.age;
    availability=other.availability;
    del=other.del;
}
Vehicle::Vehicle(Vehicle &&other)
        :name(other.name), typeOfVehicle(other.typeOfVehicle),age(other.age),availability(other.availability),del(other.del){
    other.name= "";
    other.typeOfVehicle= "";
    other.age = 0;
    other.availability = "";
    other.del = "";
}

Vehicle Vehicle::operator=(const Vehicle &rhs) {
    if(this==&rhs)
        return *this;
    else{
        name=rhs.name;
        age=rhs.age;
        typeOfVehicle=rhs.typeOfVehicle;
        availability=rhs.availability;
        del=rhs.del;
        return *this;
    }
}
ostream &operator<<(ostream &os, const Vehicle &obj){
    os<<obj.name << "\t"<<obj.del <<"\t"<<obj.availability << "\t" << obj.age << "\t"<< obj.typeOfVehicle<< endl;
    return os;
}

//void Vehicle::Delivery() const {
//    if (del == "1") {
//        cout << " Transport can be delivered ";
//    }
//    if (del == "2") {
//        cout << " Transport can be delivered ";
//    }
//}

//void Vehicle::GetVehicle() const {
//    cout << " Name of transport: " << name << " Year of release: " << age << " Type of transport: "
//         << typeOfVehicle << " Is it available: " << availability << "  " << endl;
//
//}
//string Vehicle::GetVehic() {
//    cout << " What is the name of the transport? " << name<< " Is it possible to bring from abroad " << del
//    << " Is it available: " << availability << "  " << endl;
//}


