#include "abstract_operation.hpp"

#ifndef LAB5_ADDITION_OPERATION_HPP
#define LAB5_ADDITION_OPERATION_HPP
class addition_operation : public abstract_operation{

public:
    static const char ADDITION_CODE = '+';
    addition_operation() : abstract_operation(ADDITION_CODE) {};

    /**
     * Perform a + b
     * @param a
     * @param b
     * @return a+b
     */
    int perform(int a, int b) override {return a+b;}

    virtual ~addition_operation() {};
};

#endif //LAB5_ADDITION_OPERATION_HPP
