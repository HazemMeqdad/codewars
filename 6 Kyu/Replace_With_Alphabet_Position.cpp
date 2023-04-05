// https://www.codewars.com/kata/546f922b54af40e1e90001da
#include <string>
#include <algorithm>


const char alphabets[] = "abcdefghijklmnopqrstuvwxyz";


int getAlphabetPosition(char alphabet) {
    int position = 0;
    for (int i = 0;i < 26; i++) {
        if (tolower(alphabet) == alphabets[i]) {
            position = i+1;
            break;
        }
    }
    return position;
}

std::string alphabet_position(const std::string &text) {
    std::string new_text = "";
    for (int i = 0; i < (int)std::size(text) ; i++) {
        
        int position = getAlphabetPosition(text[i]);
        if (position != 0) {
            if (size(new_text) == 0) {
                new_text += std::to_string(position);
                continue;
            }
            new_text +=  " " + std::to_string(position);
        }
    }
    return new_text;
}
