
#ifndef EXERCISE3_EXERCISE3_H
#define EXERCISE3_EXERCISE3_H
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
    polynomial& operator=(polynomial& other);
    ~polynomial();
    friend std::ostream& operator<<(std::ostream& output, const polynomial& p);
};
#endif //EXERCISE3_EXERCISE3_H
