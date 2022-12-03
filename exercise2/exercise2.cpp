#include "exercise2.h"
#include <iostream>
#include <string>
polynomial::polynomial(int degree)
{
    this->degree = degree;
    coefficients = new int[degree];
    poly = "";
    for(int i = 1;i<=degree;i++)
        coefficients[i-1] = i;
    construct_p();
}

void polynomial::construct_p()
{
    int i;
    char temp[10];
    sprintf(temp, "%d+", coefficients[0]);               //construct the polynomial
    poly += std::string(temp);
    for(i = 1;i<degree - 1;i++)
    {
        sprintf(temp, "%dz%d+", coefficients[i], i);               //construct the polynomial
        poly += std::string(temp);
    }
    sprintf(temp, "%dz%d", coefficients[i], i);
    poly += std::string(temp);
}

polynomial::~polynomial()
{
    delete[] coefficients;
}

std::ostream& operator<<(std::ostream& output, const polynomial& p)
{
    output<<p.poly;
    return output;
}
polynomial& polynomial::operator+(polynomial& other) const
{
    int i, degree;
    degree = (this->degree >= other.degree ? this->degree : other.degree);    //select the max degree
    polynomial* new_p = new polynomial(degree);
    new_p->poly = "";
    if(this->degree == other.degree)
    {
        for(i = 0;i<degree;i++)
            new_p->coefficients[i] = this->coefficients[i] + other.coefficients[i];
    }
    else
    {
        if(this->degree > other.degree)
        {
            for(i = 0;i<other.degree;i++)
                new_p->coefficients[i] = this->coefficients[i] + other.coefficients[i];
            for(i = other.degree;i<this->degree;i++)
            {
                new_p->coefficients[i] = this->coefficients[i];
            }
        }
        else
        {
            for(i = 0;i<this->degree;i++)
                new_p->coefficients[i] = this->coefficients[i] + other.coefficients[i];
            for(i = this->degree;i<other.degree;i++)
            {
                new_p->coefficients[i] = other.coefficients[i];
            }
        }
    }
    new_p->construct_p();
    return *new_p;
}