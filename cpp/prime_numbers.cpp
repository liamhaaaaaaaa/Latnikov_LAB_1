#include "prime_numbers.h"

#include <algorithm>

bool isPrime(long long number)
{
    if (number < 2) {
        return false;
    }

    if (number == 2) {
        return true;
    }

    if (number % 2 == 0) {
        return false;
    }

    for (long long divisor = 3; divisor <= number / divisor; divisor += 2) {
        if (number % divisor == 0) {
            return false;
        }
    }

    return true;
}

std::vector<long long> getPrimesBetween(long long first, long long second)
{
    if (first > second) {
        std::swap(first, second);
    }

    std::vector<long long> result;

    for (long long number = first + 1; number < second; ++number) {
        if (isPrime(number)) {
            result.push_back(number);
        }
    }

    return result;
}
