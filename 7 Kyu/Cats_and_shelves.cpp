// https://www.codewars.com/kata/62c93765cef6f10030dfa92b
unsigned int Cats(unsigned int start, unsigned int finish) {
    unsigned int position = start;
    unsigned int result = 0;

    while (true) {
        if (position == finish) break;
        if (position + 3 <= finish) position += 3;
        else position++;
        result++;
    }
    return result;
}
