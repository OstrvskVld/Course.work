
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
    bool loginUser(const string& name, const string& phone);

    static int getNextUserId();
    string getName() const;
    string getPhone() const;
    string getEmail() const;
    int getUserID() const;

    virtual void A3() override;
    virtual ~Users() {};
};


#endif //CODE_USERS_H
