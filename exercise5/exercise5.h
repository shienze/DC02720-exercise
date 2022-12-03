

#ifndef EXERCISE5_EXERCISE5_H
#define EXERCISE5_EXERCISE5_H
#include <iostream>
template<class numberType>
class Stack
{
private:
    numberType* numbers;
    int max_size;
public:
    int current_top;           //the top index of stack
    Stack(int max) : max_size(max), current_top(0)
    {
        numbers = new numberType[max_size];
    }
    ~Stack()
    {
        delete[] numbers;
    }
    void error_handling(const char* error)
    {
        std::cout<<error<<std::endl;
    }
    numberType top()
    {
        return numbers[current_top - 1];
    }
    void pop()
    {
        if(current_top == 0)
        {
            error_handling("stack-underflow!");
            return;
        }
        current_top--;
    }
    void push(numberType num)
    {
        if(current_top >= max_size)
        {
            error_handling("stack-overflow!");
            return;
        }
        numbers[current_top++] = num;
    }
    void clear()
    {
        current_top = 0;
    }
    int size()
    {
        return current_top;
    }
    bool full()
    {
        return (current_top == max_size);
    }
    bool empty()
    {
        return (current_top==0);
    }

};
#endif //EXERCISE5_EXERCISE5_H
