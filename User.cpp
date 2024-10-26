#include "iostream"
#include "User.h"
#include <string>
#include <fstream>

using namespace std;


int User::getNextUserId() {
    int maxUserId = 0;
    ifstream fin(R"(D:\Course Work\Code\Database\Users.txt)");
    if (fin.is_open()) {
        string line;
        while (getline(fin, line)) {
            size_t pos = line.find("User ID: ");
            if (pos != string::npos) {
                int id = stoi(line.substr(pos + 9));
                maxUserId = max(maxUserId, id);
            }
        }
        fin.close();
    }
    return maxUserId + 1;
}

User::User()
        : userId{1}, name{""}, phone{""}, email{""} {}

User::User(int userId, string name, string phone, string email)
        : userId{userId}, name{name}, phone{phone}, email{email} {}

User::User(const User &other) {
    userId = other.userId;
    name = other.name;
    phone = other.phone;
    email = other.email;
}

User::User(User &&other)
        : userId(other.userId), name(other.name), phone(other.phone), email(other.email) {
    other.userId = 0;
    other.name = "";
    other.phone = "";
    other.email = "";
}

ostream &operator<<(ostream &os, const User &obj) {
    os << obj.userId << "\t" << obj.name << "\t" << obj.phone << "\t" << obj.email << endl;
    return os;
}





void User::setUserInfo() {
    userId = getNextUserId();
    cout << "Enter name: " << endl;
    cin.ignore();
    getline(cin, name);
    cout << "Enter phone: " << endl;
    getline(cin, phone);
    cout << "Enter email: " << endl;
    getline(cin, email);
    ofstream fout(R"(D:\Course Work\Code\Database\Users.txt)", ios_base::app);
    if (fout.is_open()) {
        fout << "User ID: " << getUserID() << "\t"
                 << "Name: " << name << "\t"
                 << "Phone: " << phone << "\t"
                 << "Email: " << email << endl;
        fout.close();
    } else {
        cerr << "Error opening user info file!" << endl;
    }
    this->name = name;
    this->phone = phone;
    this->email = email;


}

bool User::loginUser(const string& name, const string& phone) {
    ifstream fin(R"(D:\Course Work\Code\Database\Users.txt)");
    if (!fin.is_open()) {
        cerr << "Error opening file!" << endl;
        return false;
    }

    string line;
    while (getline(fin, line)) {
        if (line.find("Name: " + name) != string::npos && line.find("Phone: " + phone) != string::npos) {
            fin.close();
            return true;
        }
    }
    fin.close();
    return false;
}

int User::getUserID() const {
    return userId;
}

string User::getName() const {
    return name;
}

string User::getPhone() const {
    return phone;
}

string User::getEmail() const {
    return email;
}

void User::A3() {
}
