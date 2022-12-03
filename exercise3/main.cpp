#include <iostream>
#include "exercise3.h"
int main(int argc, char const *argv[])
{
    int degree = 0;
    std::cout<<"set the p1\'s degree is 3:\n";
    polynomial p1(3);
    std::cout<<p1<<std::endl;
    std::cout<<"set the p2\'s degree is 5:\n";
    polynomial p2(5);
    std::cout<<p2<<std::endl;
    std::cout<<"then set the p2 to be equal to p1:\n";
    p2 = p1;
    std::cout<<p2<<std::endl;
    return 0;
}

