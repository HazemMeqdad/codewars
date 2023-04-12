// https://www.codewars.com/kata/54dc6f5a224c26032800005c
#include <vector>
#include <sstream>
#include <string>
#include <cctype>

class StockList {
public:
    static std::string stockSummary(std::vector<std::string> &lstOfArt, std::vector<std::string> &categories){
        std::string result = "";
        for (int i = 0;i<(int)std::size(categories);i++){
            int count = StockList::checkArt(lstOfArt, categories[i]);
            if (categories[i][0] == 'B' && count == 0) {
                result = "";
                break;
            }
            result += "(" + categories[i] + " : " + std::to_string(count) + ")";
            if (i == (int)std::size(categories)-1)
                break;
            result += " - ";
        }
        return result;
    };
    static int checkArt(std::vector<std::string> &lstOfArt, std::string category) {
        int count = 0;
        for (auto i : lstOfArt) {
            if (i[0] == category[0]) {
                count += std::stoi(splitSpacecs(i)[1]);
            }
        }
        return count;
    }
    static std::vector<std::string> splitSpacecs(std::string &str) {
        std::vector<std::string> words;
        std::stringstream ss(str);
        std::string word;
        while (ss >> word)
            words.push_back(word);
        return words;
    }
};
