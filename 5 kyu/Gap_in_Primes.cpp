// https://www.codewars.com/kata/561e9c843a2ef5a40c0000a4
#include <cstddef>
#include <vector>
#include <cmath>

class GapInPrimes
{
public:
    static std::pair<long long, long long> gap(int g, long long m, long long n) {
        std::pair<long long, long long> my_pair = {0, 0};
        long long last_prime = 0;
        // Check all odd numbers from m to n for primality
        for (long long i = m + (m % 2 == 0 ? 1 : 0); i <= n; i += 2) {
            if (is_prime(i)) {
                if (i - last_prime == g) {
                    my_pair = {last_prime, i};
                    break;
                }
                last_prime = i;
            }
        }

        return my_pair;
    }

    static bool is_prime(long long n) {
        /*
            Find if this number prime or not
        */
        if (n < 2) {
            return false;
        }
        if (n == 2 || n == 3) {
            return true;
        }
        if (n % 2 == 0 || n % 3 == 0) {
            return false;
        }
        long long sqrt_n = sqrt(n);
        for (long long i = 5; i <= sqrt_n; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0) {
                return false;
            }
        }
        return true;
    }
};
