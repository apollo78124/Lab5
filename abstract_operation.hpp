#include "operation.hpp"

#ifndef LAB5_ABSTRACT_OPERATION_HPP
#define LAB5_ABSTRACT_OPERATION_HPP
class abstract_operation : public operation{
private:
    char operation_type;
public:
    abstract_operation(char t) : operation() {
        operation_type = t;
    }

    /**
     * Call the code for operations.
     * @return
     */
    char get_code() {
        return operation_type;
    }

    /**
     * Virtual destructor.
     */
    virtual ~abstract_operation() {};
};
#endif //LAB5_ABSTRACT_OPERATION_HPP
