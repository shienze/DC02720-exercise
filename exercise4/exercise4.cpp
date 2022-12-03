#include "exercise4.h"
#include <iostream>
#include <string>
polynomial::polynomial(int degree) : degree(degree), poly("")
{
    for(int i = 1;i<=degree;i++)
        coeffi_s.push_back(i);
    construct_p();
}

void polynomial::construct_p()
{
    int i;
    char temp[10];
    sprintf(temp, "%d+", coeffi_s[0]);               //construct the polynomial
    poly += std::string(temp);
    for(i = 1;i<degree - 1;i++)
    {
        sprintf(temp, "%dz%d+", coeffi_s[i], i);               //construct the polynomial
        poly += std::string(temp);
    }
    sprintf(temp, "%dz%d", coeffi_s[i], i);
    poly += std::string(temp);
}

polynomial::~polynomial()
{
    coeffi_s.clear();
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
            new_p->coeffi_s[i] = this->coeffi_s[i] + other.coeffi_s[i];
    }
    else
    {
        if(this->degree > other.degree)
        {
            for(i = 0;i<other.degree;i++)
                new_p->coeffi_s[i] = this->coeffi_s[i] + other.coeffi_s[i];
            for(i = other.degree;i<this->degree;i++)
            {
                new_p->coeffi_s[i] = this->coeffi_s[i];
            }
        }
        else
        {
            for(i = 0;i<this->degree;i++)
                new_p->coeffi_s[i] = this->coeffi_s[i] + other.coeffi_s[i];
            for(i = this->degree;i<other.degree;i++)
            {
                new_p->coeffi_s[i] = other.coeffi_s[i];
            }
        }
    }
    new_p->construct_p();
    return *new_p;
}