// https://www.codewars.com/kata/5679aa472b8f57fb8c000047
#include <vector>

int calc_left_side(std::vector<int> numbers, int position) {
    int r = 0;
    if (position == 0)
        return 0;
    for (int i = position-1;i>=0;i--)
        r+=numbers[i];
    return r;
}

int calc_right_side(std::vector<int> numbers, int position) {
    int r = 0;
    if (position == (int)numbers.size()-1)
        return 0;
    for (int i = position+1;i<=(int)numbers.size()-1;i++)
        r+=numbers[i];
    return r;
}

int find_even_index (std::vector<int> numbers) {
    int pos = -1;
    for (int i = 0;i<(int)numbers.size();i++) {
        if (calc_left_side(numbers, i) == calc_right_side(numbers, i)){
            pos = i;
            break;
        }
    }
    return pos;
}
