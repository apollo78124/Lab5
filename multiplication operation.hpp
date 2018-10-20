//
// Created by dldms on 10/19/2018.
//

#ifndef LAB5_MULTIPLICATION_OPERATION_HPP
#define LAB5_MULTIPLICATION_OPERATION_HPP

class multiplication_operation : operation{

public:
    static const char operation_CODE = '*';
    multiplication_operation() {
        operation_type = operation_CODE;
    }

    int perform(int a, int b) override {return a*b;}

    virtual ~multiplication_operation() {};
};
#endif //LAB5_MULTIPLICATION_OPERATION_HPP
