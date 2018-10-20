//
// Created by dldms on 10/19/2018.
//

#ifndef LAB5_SUBTRACTION_OPERATION_HPP
#define LAB5_SUBTRACTION_OPERATION_HPP
class subtraction_operation : operation{

public:
    static const char operation_CODE = '-';
    subtraction_operation() {
        operation_type = operation_CODE;
    }

    int perform(int a, int b) override {return a-b;}

    virtual ~subtraction_operation() {};
};
#endif //LAB5_SUBTRACTION_OPERATION_HPP
