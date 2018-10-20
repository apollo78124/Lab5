#include "addition_operation.hpp"
#include "subtraction_operation.hpp"
#include "multiplication operation.hpp"
#include "division operation.hpp"

#ifndef LAB5_RPN_CALCULATOR_HPP
#define LAB5_RPN_CALCULATOR_HPP


class rpn_calculator : operation{

private:
    int result;
    std::stack<int> s;
    operation* operation_type(char operation) {
        switch (operation) {
            case '+':  return addition_operation *a;
            case '-':  return subtraction_operation *s;
            case '*':  return multiplication_operation *m;
            case '/':  return division_operation *d;
            default: printf("wrong input");
        }
    }

    void perform(operation& o1) {
        switch (o1.operation_type) {
            case '+':  return addition_operation *a;
            case '-':  return subtraction_operation *s;
            case '*':  return multiplication_operation *m;
            case '/':  return division_operation *d;
            default: printf("wrong input");
        }
    }


};
#endif //LAB5_RPN_CALCULATOR_HPP
