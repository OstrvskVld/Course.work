
#ifndef CODE_INCORRECTINPUTEXCEPTION_H
#define CODE_INCORRECTINPUTEXCEPTION_H

#include <iostream>
class IncorrectInputException : public std::exception{
public:
    IncorrectInputException() = default;
    ~IncorrectInputException() = default;

    const char* what() const noexcept override {
        return "Incorrect input. Please try again.";
    }
};

#endif //CODE_INCORRECTINPUTEXCEPTION_H
