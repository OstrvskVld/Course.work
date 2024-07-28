

#ifndef CODE_ENGINE_H
#define CODE_ENGINE_H


#include <iostream>


using namespace std;

class Engine {
private:
    string engineCapacity,power,engineType;
public:
    string getCapacity() const;
    string getPower() const;
    string getType() const;

    void setCapacity(const string& newCapacity);
    void setPower(const string& newPower);
    void setType(const string & newType);


    Engine();
    Engine(string engineCapacity,string power,string engineType);
    Engine(const Engine &other);
    Engine operator=(const Engine &rhs);
    friend ostream &operator<<(ostream &os, const Engine &obj);
    ~Engine(){};
};


#endif //CODE_ENGINE_H
