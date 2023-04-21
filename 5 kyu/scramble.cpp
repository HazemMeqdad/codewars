// https://www.codewars.com/kata/55c04b4cc56a697bb0000048
#include <string>
#include <unordered_map>

bool scramble(const std::string& s1, const std::string& s2) {
    std::unordered_map<char, int> freq;
    
    // Count frequency of characters in s1
    for (char c : s1) {
        freq[c]++;
    }
    
    // Subtract frequency of characters in s2
    for (char c : s2) {
        freq[c]--;
        if (freq[c] < 0) {
            return false;
        }
    }
    
    return true;
}