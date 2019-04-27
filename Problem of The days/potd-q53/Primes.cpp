#include <vector>
#include "Primes.h"

std::vector<int> *genPrimes(int M) {
    std::vector<int> *v = new std::vector<int>();
    // your code here
     int small, big, i, flag;
     big = M;
     small = 2;
while (small < big)
    {
        flag = 0;

        for(i = 2; i <= small/2; ++i)
        {
            if(small % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            v->push_back(small);

        ++small;
    }
    return v;
}
