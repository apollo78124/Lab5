#include "abstract_operation.hpp"

#ifndef LAB5_ADDITION_OPERATION_HPP
#define LAB5_ADDITION_OPERATION_HPP
class addition_operation : abstract_operation{

public:
    static const char ADDITION_CODE = '+';
    addition_operation() : abstract_operation(ADDITION_CODE) {};

    int perform(int a, int b) override {return a+b;}

    virtual ~addition_operation() {};
};

#endif //LAB5_ADDITION_OPERATION_HPP
