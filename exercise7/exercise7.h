
#ifndef EXERCISE7_EXERCISE7_H
#define EXERCISE7_EXERCISE7_H
#define INI_LEN 1
#include <iostream>
#include <algorithm>
template<class numType>
class Iterator
{
public:
    numType* iter;
    numType* iter_end;
    Iterator()
    {
        iter = new numType;
        iter_end = new numType;
    }
    ~Iterator()
    = default;
    void operator++(int)     //operator++，后置操作符的参数必须是int
    {
        (this->iter)++;
        while(true)
        {
            if(*(this->iter) % 2 == 0)  //如果下一个是偶数
            {
                this->iter++;           //则再往下走一个
            }
            else
            {
                break;
            }
        }
    }
    bool operator==(Iterator& it2)
    {
        while(this->iter!=this->iter_end && it2.iter!=it2.iter_end)
        {
            if(*(this->iter) != *(it2.iter))
            {
                return false;
            }
            this->iter++;
            it2.iter++;
        }
        return true;
    }
    bool operator!=(Iterator& it2)
    {
        while(this->iter!=this->iter_end && it2.iter!=it2.iter_end)
        {
            if(*(this->iter) != *(it2.iter))
            {
                return true;
            }
            this->iter++;
            it2.iter++;
        }
        return false;
    }
    Iterator& operator=(Iterator& it2)
    {
        while(this->iter!=this->iter_end && it2.iter!=it2.iter_end)
        {
            if(*(this->iter) != *(it2.iter))
            {
                *this->iter = *it2.iter;
            }
            this->iter++;
            it2.iter++;
        }
        return *this;
    }
    numType& operator*()
    {
        return *(this->iter);
    }
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
        if(element_num == ini_len)     //如果满了，则重新分配内存
        {
            auto* new_alloc = new numType[ini_len*2];    //扩展一倍的内存
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
        numbers[element_num++] = num;
    }
    void number_sort()
    {
        std::sort(numbers, numbers + element_num);
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

#endif //EXERCISE7_EXERCISE7_H
