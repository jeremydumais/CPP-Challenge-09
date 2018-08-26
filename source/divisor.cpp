#include "..\include\divisor.h"
#include <algorithm>

using namespace std;

std::vector<unsigned int> divisorHelper::getDivisors(unsigned int p_number)
{
    std::vector<unsigned int> retVal;
    if (p_number==1)
        retVal.push_back(1);
    for(unsigned int i=1;i<p_number;i++)
    {
        if (p_number % i == 0)
            retVal.push_back(i);
    }
    return retVal;
}
