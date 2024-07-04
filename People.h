
#ifndef CODE_PEOPLE_H
#define CODE_PEOPLE_H


#include <iostream>

using namespace std;

class People {
protected:
    string name;
    int age;
    double salary;
    string sal;
public:
    People();
    People(string name, int age, double salary,string sal);
    People(string name, int age, double salary);
    friend ostream &operator <<(ostream &os,const People &obj);
    People operator=(const People& rhs);
//    virtual void Salary() final;
    virtual ~People(){};
};


#endif //CODE_PEOPLE_H
