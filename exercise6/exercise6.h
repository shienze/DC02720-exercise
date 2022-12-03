#ifndef EXERCISE6_EXERCISE6_H
#define EXERCISE6_EXERCISE6_H
#define INI_LEN 1
#include <iostream>
template<class numType>
class MyCompare
{
public:
    bool operator()(const numType& elem1, const numType& elem2)
    {
        return elem1 > elem2;
    }
};
template<class numType>
struct Iterator
{
    numType* iter;
};
template<class numType>
class Vector
{
private:
    numType* numbers;
    int ini_len;       //设置初始长度
    int element_num;   //元素的数量

public:
    Vector() : ini_len(INI_LEN), element_num(0)
    {
        numbers = new numType[INI_LEN];
    }
    ~Vector()
    {
        delete[] numbers;
        numbers = NULL;
    }
    void push_back(numType num)
    {
        static int i = 0;
        if(element_num == ini_len)     //如果满了，则重新分配内存
        {
            numType* new_alloc = new numType[ini_len*2];    //扩展一倍的内存
            for(int j = 0;j<element_num;j++)
            {
                new_alloc[j] = numbers[j];
            }
            if(numbers != NULL)
            {
                delete[] numbers;
                numbers = NULL;
            }
            numbers = new_alloc;
            ini_len = ini_len*2;           //扩展一倍
        }
        numbers[i] = num;
        i++;
        element_num++;
    }
    numType* begin()         //数组首地址
    {
        return numbers;
    }
    numType* end()           //数组末尾地址+1
    {
        return (numbers+element_num);
    }
    void Print()
    {
        for(int i = 0;i<element_num;i++)
        {
            std::cout<<numbers[i]<<"\t";
        }
    }
};

#endif //EXERCISE6_EXERCISE6_H
