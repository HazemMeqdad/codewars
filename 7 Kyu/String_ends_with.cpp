// https://www.codewars.com/kata/51f2d1cafc9c0f745c00037d
#include <string>
bool solution(std::string const &str, std::string const &ending) {
    bool state = false;
    if (ending == "")
        return true;
    int p = 0;
    if (std::size(ending) > std::size(str))
        return false;
    for (int i = abs(int(std::size(str)-std::size(ending))); i < (int)std::size(str); i++,p++) {
        if (str[i] != ending[p]){
            state = false;
            break;
        } else {
            state = true;
        }
    }
    return state;
}