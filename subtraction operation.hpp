#include "abstract_operation.hpp"

#ifndef LAB5_SUBTRACTION_OPERATION_HPP
#define LAB5_SUBTRACTION_OPERATION_HPP
class subtraction_operation : public abstract_operation{

public:
    static const char SUBTRACTION_CODE = '-';
    subtraction_operation() : abstract_operation(SUBTRACTION_CODE) {};

    int perform(int a, int b) override {return a-b;}

    virtual ~subtraction_operation() {};
};
#endif //LAB5_SUBTRACTION_OPERATION_HPP
