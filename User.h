
#ifndef CODE_USER_H
#define CODE_USER_H


#include "iostream"
#include "Interface.h"

using namespace std;

class User : public Interface1 {
private:
    int userId;
    string name;
    string phone;
    string email;
public:
    User();
    User(int userId, string name, string phone, string email);
    User(const User &other);
    User(User &&other);
    friend ostream &operator<<(ostream &os, const User &obj);
    void setUserInfo();
    bool loginUser(const string& name, const string& phone);

    static int getNextUserId();
    string getName() const;
    string getPhone() const;
    string getEmail() const;
    int getUserID() const;

    virtual void A3() override;
    virtual ~User() {};
};


#endif //CODE_USER_H
