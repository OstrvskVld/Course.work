

#ifndef CODE_ANOTHERVARIANT_H
#define CODE_ANOTHERVARIANT_H

#include <iostream>
class AnotherVariant: public std::exception{
public:
    AnotherVariant() = default;
    ~AnotherVariant() = default;

    const char *what() const noexcept override{
        return "Write correctly!";
    };
};

#endif //CODE_ANOTHERVARIANT_H
