#include <array>
#include <string>

std::array<std::string, 3> fixTheMeerkat(std::array<std::string, 3> arr) {
  std::string first_elemnt = arr[0];
  arr[0] = arr[2];
  arr[2] = first_elemnt;
  return arr;
}