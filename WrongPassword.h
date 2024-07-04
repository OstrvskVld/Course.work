
#ifndef CODE_WRONGPASSWORD_H
#define CODE_WRONGPASSWORD_H

#include <iostream>

class WrongPassword: public std::exception{
public:
    WrongPassword() = default;
    ~WrongPassword() = default;

    const char *what() const noexcept override{
        return "Password is wrong! Try again!";
    }
};

#endif //CODE_WRONGPASSWORD_H
