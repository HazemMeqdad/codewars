// https://www.codewars.com/kata/54da5a58ea159efa38000836
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int findOdd(const std::vector<int>& numbers){
    map<int, int> cn;
    for (int i : numbers){
        if (cn.find(i) == cn.end())
            cn[i] = 1;
        else
            cn[i]++;
    }
    map<int, int>::iterator it = cn.begin();
    while (it != cn.end()){
        if (it->second % 2 != 0) {
            return it->first;
        }
        it++;
    }
    return 0;
}