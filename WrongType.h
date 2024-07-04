

#ifndef CODE_WRONGTYPE_H
#define CODE_WRONGTYPE_H

#include <iostream>
class WrongType: public std::exception{
public:
    WrongType() = default;
    ~WrongType() = default;

    const char *what() const noexcept override{
        return "Program is failed!!!";
    };
};

#endif //CODE_WRONGTYPE_H
