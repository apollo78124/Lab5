#include "addition_operation.hpp"
#include "subtraction operation.hpp"
#include "multiplication operation.hpp"
#include "division operation.hpp"
#include "abstract_operation.hpp"
#include <stack>
#include <iostream>

#ifndef LAB5_RPN_CALCULATOR_HPP
#define LAB5_RPN_CALCULATOR_HPP

using namespace std;
class rpn_calculator {

private:
    int result;
    stack<int> mystack;
    operation *operation_type(char op);

    void perform(operation* o1);

public:
    int process_formula(std::string form);

};

#endif //LAB5_RPN_CALCULATOR_HPP
