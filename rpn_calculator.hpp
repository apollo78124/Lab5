#include "addition_operation.hpp"
#include "subtraction operation.hpp"
#include "multiplication operation.hpp"
#include "division operation.hpp"
#include "abstract_operation.hpp"
#include <stack>

#ifndef LAB5_RPN_CALCULATOR_HPP
#define LAB5_RPN_CALCULATOR_HPP

using namespace std;
class rpn_calculator : operation{

private:
    int result;
    stack<int> mystack;
    operation *operation_type(char op) {
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
    }

    void perform(operation& o1) {
        int a = mystack.top();
        mystack.pop();
        int b = mystack.top();
        mystack.pop();

        int result = o1.perform(b, a);

        mystack.push(result);
    }

public:
    int process_form(string formula) {
        int process_form(string formula) {
            istringstream iss{formula};
            string s1;
            while (iss >> s1) {
                istringstream iss2{s1};
                int i;
                if (iss2 >> i) {
                    mystack.push(i);
                } else {
                    c = s1[0];
                    operation *op = operation_type(s1[0]);
                    perform(op);
                    delete op;
                }
            }
            result = mystack.top();
            mystack.pop();
            return result;
        }
    }

};

#endif //LAB5_RPN_CALCULATOR_HPP
