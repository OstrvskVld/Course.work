
#ifndef CODE_INTERFACE_H
#define CODE_INTERFACE_H


#include <iostream>
using namespace std;

class Interface{
public:
    virtual void A1()=0;
    virtual void A2()=0;
    virtual void A3()=0;

};
class Interface1 : public Interface{
public:
//    virtual void A1() override{
//        cout << " Cars: ";
//    }
    virtual void A1() override{
        cout << " Sedan: ";
    }
    virtual void A2() override{
        cout << " Van: ";
    }
    virtual void A3() override{
        cout << " Customers: ";
    }
    virtual ~Interface1(){};
};

#endif //CODE_INTERFACE_H
