
#ifndef LAB5_ABSTRACT_OPERATION_HPP
#define LAB5_ABSTRACT_OPERATION_HPP
class abstract_operation {
private:
    char operation_type;

public:
    abstract_operation(char t) {
        operation_type = t;
    }

    char get_code() {
        return operation_type;
    }

    virtual ~abstract_operation() {};
};
#endif //LAB5_ABSTRACT_OPERATION_HPP
