#include "exercise10.h"
#include <iostream>
int main(int argc, char const *argv[])
{
    Vector v1;
    while (true)
    {
        std::cout<<"insert a positive integer data into the v1, and input -1, quit:";
        int data = 0;
        std::cin>>data;
        if(data == -1)
        {
            break;
        }
        v1.push_back(data);
    }
    std::cout<<"the size of v1 is:";
    std::cout<<v1.size();
    std::cout<<"\nthe average of v1 is:";
    Vector average;
    std::cout<<average(v1);
    return 0;
}
