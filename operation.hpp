//
// Created by dldms on 10/19/2018.
//

#ifndef LAB5_OPERATION_HPP
#define LAB5_OPERATION_HPP
class operation {
public:
    virtual char get_code() = 0;
    virtual int perform(int a, int b) = 0;
    virtual ~operation();

};
#endif //LAB5_OPERATION_HPP
