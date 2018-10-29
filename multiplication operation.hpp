#include "abstract_operation.hpp"

#ifndef LAB5_MULTIPLICATION_OPERATION_HPP
#define LAB5_MULTIPLICATION_OPERATION_HPP

class multiplication_operation : public abstract_operation{

public:
    static const char MULTIPLICATION_CODE = '*';
    multiplication_operation() : abstract_operation(MULTIPLICATION_CODE) {};

    /**
     * Override the * operation.
     * @param a
     * @param b
     * @return a multiplied by b.
     */
    int perform(int a, int b) override {return a*b;}

    /**
     * Destruct operator.
     */
    virtual ~multiplication_operation() {};
};
#endif //LAB5_MULTIPLICATION_OPERATION_HPP
