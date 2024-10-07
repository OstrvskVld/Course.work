#include "iostream"
#include "Users.h"

using namespace std;

Users::Users()
        : Users(0, "", "", "") {}

Users::Users(int userId, string name, string phone, string email)
        : userId{userId}, name{name}, phone{phone}, email{email} {}

Users::Users(const Users &other) {
    userId = other.userId;
    name = other.name;
    phone = other.phone;
    email = other.email;
}

Users::Users(Users &&other)
        : userId(other.userId), name(other.name), phone(other.phone), email(other.email) {
    other.userId = 0;
    other.name = "";
    other.phone = "";
    other.email = "";
}

ostream &operator<<(ostream &os, const Users &obj) {
    os << obj.userId << "\t" << obj.name << "\t" << obj.phone << "\t" << obj.email << endl;
    return os;
}

void Users::setUserInfo() {
    cout << "Enter user ID: ";
    cin >> userId;
    cout << "Enter name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter phone: ";
    getline(cin, phone);
    cout << "Enter email: ";
    getline(cin, email);
}

void Users::A3() {
}
