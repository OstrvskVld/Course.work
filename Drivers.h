

#ifndef CODE_DRIVERS_H
#define CODE_DRIVERS_H


#include "People.h"
#include "Cars.h"

class Drivers : public People{
private:
    double number;
    string placeOfResidence;
//    Cars ownCar;
public:
    Drivers();
    Drivers(string name, int age, double salary,string sal,double number,string placeOfResidence,Cars ownCar);
    Drivers(double number,string placeOfResidence);
    Drivers(People pepl,double number,string placeOfResidence);
    friend ostream &operator <<(ostream &os,const Drivers &obj);
    Drivers operator=(const Drivers& rhs);
//    virtual void Salary() override;
    virtual ~Drivers(){};
};


#endif //CODE_DRIVERS_H
