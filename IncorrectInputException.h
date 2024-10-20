
#ifndef CODE_INCORRECTINPUTEXCEPTION_H
#define CODE_INCORRECTINPUTEXCEPTION_H

#include <iostream>

class IncorrectInputException : public runtime_error{
public:
    IncorrectInputException() : runtime_error("Incorrect input. Please try again.\n") {}
};

#endif //CODE_INCORRECTINPUTEXCEPTION_H
