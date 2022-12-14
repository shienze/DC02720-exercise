
#ifndef EXERCISE2_EXERCISE2_H
#define EXERCISE2_EXERCISE2_H
#include <iostream>
#include <string>
class polynomial
{
private:
    int degree;
    int* coefficients;
    std::string poly;
    void construct_p();
public:
    // polynomial() : degree(0), poly("")         //default constructor
    // {};
    polynomial(int degrees);
    polynomial& operator+(polynomial& other) const;
    ~polynomial();
    friend std::ostream& operator<<(std::ostream& output, const polynomial& p);
};

#endif //EXERCISE2_EXERCISE2_H
