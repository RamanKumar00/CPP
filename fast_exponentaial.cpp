#include <iostream>
using namespace std;
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
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;
    cout << "Enter modulus: ";
    cin >> modulus;

    std::cout << "Result: " << modularExponentiation(base, exponent, modulus) << std::endl;

    return 0;
}
