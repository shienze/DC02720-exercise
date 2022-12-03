#include "exercise6.h"
#include <algorithm>
#include <vector>
int main(int argc, char const *argv[])
{
    Vector<int> v1;
    v1.push_back(3);
    v1.push_back(2);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(9);
    v1.push_back(7);
    v1.push_back(8);
    v1.push_back(1);
    v1.push_back(10);
    v1.push_back(6);
    v1.push_back(3);
    v1.push_back(99);
    v1.Print();
    MyCompare<int> compare;
    Iterator<int> iter_begin, iter_end;
    iter_begin.iter = v1.begin();
    iter_end.iter = v1.end();
    std::cout<<"\nafter descending order......";
    std::sort(iter_begin.iter, iter_end.iter, compare);
    std::cout<<"\n";
    v1.Print();
    return 0;
}
