
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

};
class Interface1 : public Interface{
public:
    virtual void A4() override{
        cout << "CARS " << endl;
    }
    virtual void A1() override{
        cout << "SEDAN " << endl;
    }
    virtual void A2() override{
        cout << "VAN " << endl;
    }
    virtual void A3() override{
        cout << "USER " << endl;
    }
    virtual ~Interface1(){};
};

#endif //CODE_INTERFACE_H
