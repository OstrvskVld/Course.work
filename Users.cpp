#include "iostream"
#include "Users.h"
#include <string>
#include <fstream>

using namespace std;


int Users::getNextUserId() {
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

Users::Users()
        : userId{1}, name{""}, phone{""}, email{""} {}

Users::Users(int userId,string name, string phone, string email)
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
    userId = getNextUserId();
    cout << "Enter name: " << endl;
    cin.ignore();
    getline(cin, name);
    cout << "Enter phone: " << endl;
    getline(cin, phone);
    cout << "Enter email: " << endl;
    getline(cin, email);
    ofstream fout(R"(D:\Course Work\Code\Database\Users.txt)", ios_base::app);
    if (!fout) {
        cerr << "Error opening file!" << endl;
        return;
    }

    fout << "User ID: " << userId << "\tName: " << name << "\tPhone: " << phone << "\tEmail: " << email << "\n";
    fout.close();

}

bool Users::loginUser(const string& name, const string& phone) {
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

int Users::getUserID() const {
    return userId;
}

string Users::getName() const {
    return name;
}

string Users::getPhone() const {
    return phone;
}

string Users::getEmail() const {
    return email;
}

void Users::A3() {
}
