#include "abstract_operation.hpp"

#ifndef LAB5_DIVISION_OPERATION_HPP
#define LAB5_DIVISION_OPERATION_HPP
class division_operation : public abstract_operation{

public:
    static const char DIVISION_CODE = '/';

    division_operation() : abstract_operation(DIVISION_CODE) {};

    int perform(int a, int b) override { return a/b;};

    virtual ~division_operation() {};
};
#endif //LAB5_DIVISION_OPERATION_HPP