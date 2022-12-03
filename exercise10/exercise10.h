#ifndef EXERCISE10_EXERCISE10_H
#define EXERCISE10_EXERCISE10_H
#include <vector>
using namespace std;
class Vector : public vector<int>
{
private:

public:
    Vector() = default;
    float operator()(Vector& v)
    {
        float sum;
        for(int i = 0;i<v.size();i++)
        {
            sum += 1.0*v[i];
        }
        return sum/v.size();
    }

    ~Vector(){}
};
#endif //EXERCISE10_EXERCISE10_H
