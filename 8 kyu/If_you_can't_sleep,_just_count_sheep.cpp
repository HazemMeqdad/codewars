// https://www.codewars.com/kata/5b077ebdaf15be5c7f000077
#include <string>

std::string countSheep(int number) {
    std::string result = "";
    for (int i = 0;i<number;i++) 
        result += std::to_string(i+1) + " sheep...";
    return result;
}
