

#ifndef EXERCISE4_EXERCISE4_H
#define EXERCISE4_EXERCISE4_H
#include <iostream>
#include <string>
#include <vector>
class polynomial
{
private:
    int degree;
    std::vector<int> coeffi_s;  //coefficient vector
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
#endif //EXERCISE4_EXERCISE4_H
