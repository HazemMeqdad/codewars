// https://www.codewars.com/kata/525f50e3b73515a6db000b83
#include <string>

std::string getSameElementsFromArray(const int arr[10], int range, int start = 0) {
    std::string str = "";
    for (int i = start;i<(range+start);i++) {
        str += std::to_string(arr[i]);
    }
    return str;
}

std::string createPhoneNumber(const int arr [10]){
    return "(" + getSameElementsFromArray(arr, 3) + ")" + " " + getSameElementsFromArray(arr, 3, 3) + "-" + getSameElementsFromArray(arr, 4, 6);
}
