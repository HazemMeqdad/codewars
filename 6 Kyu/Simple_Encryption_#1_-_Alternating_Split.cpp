// https://www.codewars.com/kata/57814d79a56c88e3e0000786
#include <string>
#include <cmath>

std::string encrypt(std::string text, int n) {
    // if text is empty or n=0
    if (n <= 0 || text == "") return text;
    std::string odd_pos, even_pos = "";
    // Loop on word if index is even will add to even_pos
    // if index is odd will be add to odd_pos
    for (int i = 0;i<(int)text.size();i++) {
        if (i % 2 == 0) even_pos += text[i];
        else odd_pos += text[i];
    }
    // return odd_pos + even_pos if not need to re-encrypt text to other count
    // if need it will use recursion to re-use this function to be n=0
    return (n-1 == 0) ? odd_pos + even_pos : encrypt(odd_pos + even_pos, n-1);
}

std::string decrypt(std::string encryptedText, int n) {
    // if text is empty or n=0
    if (n <= 0 || encryptedText == "") return encryptedText;
    std::string r = "";
    // get avrage length of word to get first char on the orginal text
    int av = std::round((int)encryptedText.size() / 2);
    // loop on the text it will be add first char [i+av] and second char [i] etc...  
    for (int i = 0;i<=av;i++) {
        if(i+av <= (int)encryptedText.size()-1) r += encryptedText[i+av];
        if (r.size() != encryptedText.size()) r += encryptedText[i];
    }
    // return result if not need to re-decrypt text to other count
    // if need it will use recursion to re-use this function to be n=0
    return (n-1 == 0) ? r : decrypt(r, n-1);
}