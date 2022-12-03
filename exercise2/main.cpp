#include <iostream>
#include "exercise2.h"
int main(int argc, char const *argv[])
{
    int degree = 0;
    std::cout<<"please input the degree:";
    std::cin>>degree;
    polynomial p1(degree);
    polynomial p2(degree + 2);
    std::cout<<p1<<std::endl;
    std::cout<<(p1+p2)<<std::endl;
    return 0;
}

