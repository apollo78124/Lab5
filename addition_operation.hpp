//
// Created by dldms on 10/19/2018.
//

#ifndef LAB5_ADDITION_OPERATION_HPP
#define LAB5_ADDITION_OPERATION_HPP
class addition_operation : operation{

public:
    static const char operation_CODE = '+';
    addition_operation() {
        operation_type = operation_CODE;
    }

    int perform(int a, int b) override {return a+b;}

    virtual ~addition_operation() {};
};

#endif //LAB5_ADDITION_OPERATION_HPP
