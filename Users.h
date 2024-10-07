
#ifndef CODE_USERS_H
#define CODE_USERS_H


#include "iostream"
#include "Interface.h"

using namespace std;

class Users : public Interface1 {
private:
    int userId;
    string name;
    string phone;
    string email;
public:
    Users();
    Users(int userId, string name, string phone, string email);
    Users(const Users &other);
    Users(Users &&other);
    friend ostream &operator<<(ostream &os, const Users &obj);
    void setUserInfo();

    string getName() const { return name; }
    string getPhone() const { return phone; }
    string getEmail() const { return email; }
    int getUserID() const { return userId; }

    virtual void A3() override;
    virtual ~Users() {};
};


#endif //CODE_USERS_H
