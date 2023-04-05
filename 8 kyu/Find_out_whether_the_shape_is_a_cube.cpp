// https://www.codewars.com/kata/58d248c7012397a81800005c

bool is_cube(int volume, int side)
{
    if (volume <= 0 ) {
      return false;
    }
    return (volume / side) == side * side;
}