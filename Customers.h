

#ifndef CODE_CUSTOMERS_H
#define CODE_CUSTOMERS_H

#include "iostream"

using namespace std;

class Customers {
private:
    int customerId;
    string name;
    string phone;
    string email;
public:
    Customers();
    Customers(int customerId,string name,string phone, string email);
    Customers(const Customers &other);
    Customers(Customers &&other);
    friend ostream &operator <<(ostream &os,const Customers &obj);
    Customers operator=(const Customers &rhs);
    ~Customers(){};
};


#endif //CODE_CUSTOMERS_H
