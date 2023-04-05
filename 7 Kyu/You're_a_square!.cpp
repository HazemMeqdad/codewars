// https://www.codewars.com/kata/54c27a33fb7da0db0100040e
#include <cmath>
#include <algorithm>

bool is_square(int n)
{
    if (n < 0) 
        return false;
    auto val = sqrt(n);
    return n == pow(round(val), 2);
}
