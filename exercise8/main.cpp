#include <vector>
#include <iostream>
int main(int argc, char const *argv[])
{
    std::vector<double> v1 = {-3.8, -0.4, 1.3, 3.9, 5.4, 8.2, -9.3, -7.4};
    double temp;
    for(int i = 0;i<v1.size() - 1;i++)
    {
        for(int j = i + 1;j<v1.size();j++)
        {
            if(v1[i]>v1[j])
            {
                temp = v1[i];
                v1[i] = v1[j];
                v1[j] = temp;
            }
        }
    }
    for(double v : v1)
    {
        std::cout<<v<<" ";
    }
    return 0;
}