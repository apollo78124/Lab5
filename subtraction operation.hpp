#include "abstract_operation.hpp"

#ifndef LAB5_SUBTRACTION_OPERATION_HPP
#define LAB5_SUBTRACTION_OPERATION_HPP
class subtraction_operation : public abstract_operation{

public:
    static const char SUBTRACTION_CODE = '-';
    subtraction_operation() : abstract_operation(SUBTRACTION_CODE) {};

    /**
     * Perform a - b on the parameters.
     * @param a
     * @param b
     * @return a-b
     */
    int perform(int a, int b) override {return a-b;}

    virtual ~subtraction_operation() {};
};
#endif //LAB5_SUBTRACTION_OPERATION_HPP
