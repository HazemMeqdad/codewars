// https://www.codewars.com/kata/54e6533c92449cc251001667
#include <iostream>
#include <vector>
using namespace std;

template <typename T> std::vector<T> uniqueInOrder(const std::vector<T>& it){
    std::vector<T> re;
    for (int i = 0;i<(int)it.size();i++) {
        if (i==0)
            re.push_back(it[0]);
        else if (it[i] != it[i-1])
            re.push_back(it[i]);
    }
    return re;
}
vector<char> uniqueInOrder(const string& it){
    vector<char> re;
    for (int i = 0;i<(int)it.size();i++) {
        if (i==0)
            re.push_back(it[0]);
        else if (it[i] != it[i-1])
            re.push_back(it[i]);
    }
    return re;
}