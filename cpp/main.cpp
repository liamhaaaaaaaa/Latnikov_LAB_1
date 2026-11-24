#include <iostream>

#include "prime_numbers.h"

int main()
{
    long long first;
    long long second;

    std::cout << "Enter two natural numbers: ";

    if (!(std::cin >> first >> second) || first < 1 || second < 1) {
        std::cerr << "Error: enter two natural numbers.\n";
        return 1;
    }

    for (long long prime : getPrimesBetween(first, second)) {
        std::cout << prime << '\n';
    }

    return 0;
}
