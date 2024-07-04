
#ifndef CODE_INTERFACE_H
#define CODE_INTERFACE_H


#include <iostream>
using namespace std;

class Interface{
public:
    virtual void A1()=0;
    virtual void A2()=0;
    virtual void A3()=0;
    virtual void A4()=0;
    virtual void A5()=0;

};
class Interface1 : public Interface{
public:
    virtual void A1() override{
        cout << " Vehicle: ";
    }
    virtual void A2() override{
        cout << " Cars: ";
    }
    virtual void A3() override{
        cout << " People: ";
    }
    virtual void A4() override{
        cout << " Driver: ";
    }
    virtual void A5() override{
        cout << " Bikes: ";
    }

};

#endif //CODE_INTERFACE_H
