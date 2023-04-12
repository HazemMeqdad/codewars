// https://www.codewars.com/kata/54b42f9314d9229fd6000d9c
#include <string>
#include <algorithm>

std::string remove_char(std::string word, char ch) {
    auto pos = word.find(ch);
    while (pos != std::string::npos) {
        word.erase(pos, 1);
        break;
    }
    return word;
}

std::string word_to_lower(std::string word) {
    for (int i = 0;i<(int)std::size(word);i++) 
        word[i] = std::tolower(word[i]);
    return word;
}

std::string duplicate_encoder(const std::string& word){
    std::string result = "";
    std::string copy_word = word_to_lower(word);
    for (int i = 0; i < (int)std::size(word);i++){
        char c = std::tolower(word[i]);
        std::string temp = remove_char(copy_word, c);
        if (temp.find(c) != std::string::npos) {
            result += ')';
        } else {
            result += '(';
        }
    }
    return result;
}