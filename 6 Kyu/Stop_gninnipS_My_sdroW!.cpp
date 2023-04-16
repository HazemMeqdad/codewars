// https://www.codewars.com/kata/5264d2b162488dc400000001
#include <iostream>
#include <string>
#include <vector>
using namespace std;

string reverseString(string str) {
    string result = "";
    for (int i = (int)str.size()-1;i>=0;i--)
        result += str[i];
    return result;
}

string spinWords(const std::string &str){
    vector<string> words;
    string temp = "";
    string result = "";
    // split the str by spaces
    for (int i = 0;i<(int)str.size();i++) {
        if (str[i] == ' '){
            words.push_back(temp);
            temp = "";
        } else 
            temp += str[i];
        if (i==(int)str.size()-1 && !temp.empty())
            words.push_back(temp);
    }
    // Append results
    for (int i = 0;i<(int)words.size();i++){
        if ((int)words[i].size() >= 5) {
            result += reverseString(words[i]);
        } else 
            result += words[i];
        if (i != (int)words.size()-1)
            result += ' ';
    }
    return result;
}