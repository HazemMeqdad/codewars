// https://www.codewars.com/kata/54da539698b8a2ad76000228
#include <vector>
#include <string>

bool isValidWalk(std::vector<char> walk) {
    if ((int)walk.size() != 10) return false;
    int northSouth = 0;
    int eastWest = 0;
    for (int i = 0;i<(int)walk.size();i++) {
        switch (walk[i]){
            case 'n': {northSouth++;break;} // North
            case 's': {northSouth--;break;} // South
            case 'w': {eastWest--;break;}   // west
            case 'e': {eastWest++;break;}   // east
        }

    }
    return (northSouth == 0) && (eastWest == 0);
}