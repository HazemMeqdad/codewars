// https://www.codewars.com/kata/541c8630095125aba6000c00
#include <string>

int digital_root(int n){
    std::string num = std::to_string(n);
    if ((int)num.size() == 1)
        return n;
    n = 0;
    for (auto i : num) {
        n += std::stoi(std::string{i}.c_str());
    }
    return digital_root(n);
}
