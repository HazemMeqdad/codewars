// https://www.codewars.com/kata/5949481f86420f59480000e7
#include <string>
#include <vector>
#include <algorithm>

int sumVector(const std::vector<int> &arr) {
    int result = 0;
    for (int i = 0;i<arr.size();i++) {
        result += arr[i];
    }
    return result;
}

std::string odd_or_even(const std::vector<int> &arr)
{
    return (sumVector(arr)%2 == 0 ? "even" : "odd");
}
