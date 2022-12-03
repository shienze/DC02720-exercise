#include "exercise5.h"
#include <iostream>
int main(int argc, char const *argv[])
{
    Stack<char> s1(4);
    s1.push('a');
    s1.push('b');
    s1.push('n');
    std::cout<<"the size is:"<<s1.size()<<std::endl;
    std::cout<<"the top element is:"<<s1.top()<<std::endl;
    std::cout<<"pop an element and then the top is:";
    s1.pop();
    std::cout<<s1.top()<<std::endl;
    std::cout<<"test whether is full:";
    std::cout<<s1.full()<<std::endl;
    std::cout<<"test whether is empty:";
    std::cout<<s1.empty()<<std::endl;
    s1.pop();
    s1.pop();
    s1.pop();
    std::cout<<"the size is:"<<s1.size()<<std::endl;
    return 0;
}
