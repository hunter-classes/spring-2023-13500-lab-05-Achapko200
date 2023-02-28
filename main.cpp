#include <iostream>
#include "funcs.h"

int main()
{
    // Test isDivisibleBy function
    int n = 100;
    int d = 25;
    bool divisible = isDivisibleBy(n, d);
    std::cout << n << " is divisible by " << d << ": " << (divisible ? "Yes" : "No") << std::endl;

    n = 35;
    d = 17;
    divisible = isDivisibleBy(n, d);
    std::cout << n << " is divisible by " << d << ": " << (divisible ? "Yes" : "No") << std::endl;

    // Test isPrime function
    n = 7;
    bool prime = isPrime(n);
    std::cout << n << " is prime: " << (prime ? "Yes" : "No") << std::endl;

    n = 12;
    prime = isPrime(n);
    std::cout << n << " is prime: " << (prime ? "Yes" : "No") << std::endl;

    // Test nextPrime function
    n = 14;
    int next_prime = nextPrime(n);
    std::cout << "The smallest prime greater than " << n << " is: " << next_prime << std::endl;

    n = 17;
    next_prime = nextPrime(n);
    std::cout << "The smallest prime greater than " << n << " is: " << next_prime << std::endl;

    // Test countPrimes function
    int a = 5;
    int b = 25;
    int num_primes = countPrimes(a, b);
    std::cout << "The number of prime numbers between " << a << " and " << b << " is: " << num_primes << std::endl;

    // Test isTwinPrime function
    n = 17;
    bool twin_prime = isTwinPrime(n);
    std::cout << n << " is a twin prime: " << (twin_prime ? "Yes" : "No") << std::endl;

    n = 13;
    twin_prime = isTwinPrime(n);
    std::cout << n << " is a twin prime: " << (twin_prime ? "Yes" : "No") << std::endl;

    // Test nextTwinPrime function
    n = 14;
    int next_twin_prime = nextTwinPrime(n);
    std::cout << "The smallest twin prime greater than " << n << " is: " << next_twin_prime << std::endl;

    n = 17;
    next_twin_prime = nextTwinPrime(n);
    std::cout << "The smallest twin prime greater than " << n << " is: " << next_twin_prime << std::endl;

    // Test largestTwinPrime function
    a = 5;
    b = 18;
    int largest_twin_prime = largestTwinPrime(a, b);
    std::cout << "The largest twin prime between " << a << " and " << b << " is: " << largest_twin_prime << std::endl;

    a = 1;
    b = 31;
    largest_twin_prime = largestTwinPrime(a, b);
    std::cout << "The largest twin prime between " << a << " and " << b << " is: " << largest_twin_prime << std::endl;

    a = 14;
    b = 16;
    largest_twin_prime = largestTwinPrime(a, b);
    std::cout << "The largest twin prime between " << a << " and " << b << " is: " << largest_twin_prime << std::endl;

    return 0;
}
