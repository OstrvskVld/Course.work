
#include "iostream"
#include "Customers.h"

using namespace std;


Customers::Customers()
: Customers(0,"","",""){}
Customers::Customers(int customerId, string name, string phone, string email)
: customerId{customerId}, name{name}, phone{phone}, email{email} {}
Customers::Customers (const Customers &other) {
    customerId=other.customerId;
    name=other.name;
    phone=other.phone;
    email=other.email;
}
Customers::Customers(Customers &&other)
        :customerId(other.customerId), name(other.name),phone(other.phone),email(other.email){
    other.customerId= 0;
    other.name= "";
    other.phone = "";
    other.email = "";
}
ostream &operator<<(ostream &os, const Customers &obj){
    os<<obj.customerId << "\t"<<obj.name <<"\t"<<obj.phone << "\t" << obj.email  << endl;
    return os;
}

//Customers Customers::operator=(const Customers &rhs) {
//    if(this==&rhs)
//        return *this;
//    else{
//        customerId=rhs.customerId;
//        name=rhs.name;
//        phone=rhs.phone;
//        email=rhs.email;
//        return *this;
//    }
//}
void Customers::A3() {
    Customers::A3();
}
