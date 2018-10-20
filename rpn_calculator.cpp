#include <stack>
#include <iostream>
#include <sstream>
#include "rpn_calculator.hpp"

operation *rpn_calculator::operation_type(char op) {
    switch (op) {
        case addition_operation::ADDITION_CODE:
            return new addition_operation();
        case division_operation::DIVISION_CODE:
            return new division_operation();
        case multiplication_operation::MULTIPLICATION_CODE:
            return new multiplication_operation();
        case subtraction_operation::SUBTRACTION_CODE:
            return new subtraction_operation();
    }
    return nullptr;
};

void rpn_calculator::perform(operation* o1) {
    int a = mystack.top();
    mystack.pop();
    int b = mystack.top();
    mystack.pop();

    int result = o1->perform(b, a);

    mystack.push(result);
}


int rpn_calculator::process_formula(std::string form) {
    char c;
    istringstream iss{form};
    string string1;
    while (iss >> string1) {
        istringstream iss2{string1};
        int i;
        if (iss2 >> i) {
            mystack.push(i);
        } else {
            c = string1[0];
            operation *op = operation_type(string1[0]);
            perform(op);
            delete op;
        }
    }
    result = mystack.top();
    mystack.pop();
    return result;
}