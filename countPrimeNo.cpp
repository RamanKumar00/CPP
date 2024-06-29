#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1) 
    {
        return false; // 0 and 1 are not prime numbers
    }

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return false; // If n is divisible by any number other than 1 and itself, it is not prime
        }
    }

    return true; // If no divisors were found, n is prime
}

int main()
{
    int count = 0;
    for (int i = 1; i <= 40; i++)
    {
        if (isPrime(i))
        {
            count++;
        }
    }

    cout << "The number of prime numbers between 1 and 40 is: " << count << endl;

    return 0;
}
