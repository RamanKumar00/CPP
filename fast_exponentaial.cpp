#include <iostream>
long long modularExponentiation(long long base, long long exponent, long long modulus)
{
    long long result = 1;
    base = base % modulus;

    if (base == 0)
        return 0;

    while (exponent > 0)
    {

        if (exponent % 2 == 1)
            result = (result * base) % modulus;

        exponent = exponent >> 1;
        base = (base * base) % modulus;
    }
    return result;
}

int main()
{
    long long base, exponent, modulus;
    std::cout << "Enter base: ";
    std::cin >> base;
    std::cout << "Enter exponent: ";
    std::cin >> exponent;
    std::cout << "Enter modulus: ";
    std::cin >> modulus;

    std::cout << "Result: " << modularExponentiation(base, exponent, modulus) << std::endl;

    return 0;
}
