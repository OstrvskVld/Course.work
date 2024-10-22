#ifndef CODE_CANCELEXCEPTION_H
#define CODE_CANCELEXCEPTION_H

#include <iostream>
using namespace std;

class CancelException : public exception
{
public:
    CancelException() = default;
    ~CancelException() = default;
    const char *what() const noexcept override{
        return "Operation canceled.";
    };
};

#endif
