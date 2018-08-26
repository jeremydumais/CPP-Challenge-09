#include "..\include\divisor.h"
#include <algorithm>

using namespace std;

std::vector<unsigned> divisorHelper::getDivisors(unsigned p_number)
{
    std::vector<unsigned> retVal;
    if (p_number==1)
        retVal.push_back(1);
    else
    {
        for(unsigned i=1;i<=sqrt(p_number);i++)
        {
            if (p_number % i == 0)
            {
                retVal.push_back(i);
                if (p_number/i != i && i != 1)
                    retVal.push_back(p_number/i);
            }
        }
    }
    return retVal;
}
