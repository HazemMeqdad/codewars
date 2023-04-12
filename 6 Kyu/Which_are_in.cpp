// https://www.codewars.com/kata/550554fd08b86f84fe000a58
#include <vector>
#include <string>
#include <algorithm>


class WhichAreIn
{
  public:
  static std::vector<std::string> inArray(std::vector<std::string> &array1, std::vector<std::string> &array2);
};

std::vector<std::string> WhichAreIn::inArray(std::vector<std::string> &array1, std::vector<std::string> &array2) {
    std::vector<std::string> arr = {};
    for (auto a2 : array2){
        for (auto a1 : array1) {
            if ((a2.find(a1) != std::string::npos) && (std::find(arr.begin(), arr.end(), a1) == arr.end())) {
                arr.push_back(a1);
            }
        }
    }
    std::sort(arr.begin(), arr.end());
    return arr;
}