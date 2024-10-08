

#ifndef CODE_ANOTHERVARIANT_H
#define CODE_ANOTHERVARIANT_H

#include <iostream>
class AnotherVariant: public std::exception{
public:
    AnotherVariant() = default;
    ~AnotherVariant() = default;

    const char* what() const noexcept override {
        return "Incorrect vehicle status. Allowed values: Available, Sold, Reserved.";
    }
};

#endif //CODE_ANOTHERVARIANT_H
