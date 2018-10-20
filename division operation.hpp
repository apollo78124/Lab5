//
// Created by dldms on 10/19/2018.
//

#ifndef LAB5_DIVISION_OPERATION_HPP
#define LAB5_DIVISION_OPERATION_HPP
class division_operation : operation{

public:
    static const char operation_CODE = '/';
    division_operation() {
        operation_type = operation_CODE;
    }

    int perform(int a, int b) override { return a/b;}

    virtual ~division_operation() {};
};
#endif //LAB5_DIVISION_OPERATION_HPP
