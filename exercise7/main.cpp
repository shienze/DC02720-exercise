#include "exercise7.h"
#include <vector>
int main(int argc, char const *argv[])
{
    Vector<int> v1;
    Iterator<int> it1;
    Vector<int> v2;
    Iterator<int> it2;
    while(true)
    {
        int data = 0;
        std::cout<<"please input a odd into the v1,input -1 quit:";
        std::cin>>data;
        if(data == -1)
        {
            break;
        }
        if(data %2 != 1)
        {
            std::cout<<"the even is not allowed to input!\n";
            continue;
        }
        v1.push_back(data);
    }
    v1.number_sort();
    v1.Print();
    while(true)
    {
        int data = 0;
        std::cout<<"please input a odd into the v2,input -1 quit:";
        std::cin>>data;
        if(data == -1)
        {
            break;
        }
        if(data %2 != 1)
        {
            std::cout<<"the even is not allowed to input!\n";
            continue;
        }
        v2.push_back(data);
    }
    v2.number_sort();
    v2.Print();
    it1.iter = v1.begin();
    it1.iter_end = v1.end();
    it2.iter = v2.begin();
    it2.iter_end = v2.end();

    if(*(v2.begin()) % 2 == 1)
    {
        std::cout<<"the first of v2 is:"<<*(v2.begin())<<std::endl;  //operator*()
    }
    else
    {
        std::cout<<"this is not odd!\n"<<std::endl;
    }
    std::cout<<"whether it1 is equal to it2:"<<(it1==it2)<<std::endl;

    it1.iter = v1.begin(), it2.iter = v2.begin();
    std::cout<<"whether it1 is not equal to it2:"<<(it1!=it2)<<std::endl;

    it1.iter = v1.begin(), it2.iter = v2.begin();
    it1 = it2;

    it1.iter = v1.begin(), it2.iter = v2.begin();
    std::cout<<"add the it1 one......\n";
    it1++;                         //operator++()
    if(*it1 % 2 == 1)
    {
        std::cout<<"this is a odd:"<<*it1<<std::endl;  //operator*()
    }
    else
    {
        std::cout<<"this is not odd!\n"<<std::endl;
    }
    Vector<int> v3;

    return 0;
}