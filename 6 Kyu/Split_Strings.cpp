// https://www.codewars.com/kata/515de9ae9dcfc28eb6000001
#include <string>
#include <vector>

std::vector<std::string> solution(const std::string &s)
{
    std::vector<std::string> results = {};
    int position = 0;
    for (int i = 0;i<s.size();) {
        results.push_back(std::string{s[i]} + (s[i+1] == '\0' ? '_' : s[i+1]));
        i += 2;
    }
    return results;
}