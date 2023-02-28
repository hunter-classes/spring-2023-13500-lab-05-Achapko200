#include "funcs.h"
#include <iostream>
using namespace std;

bool isDivisibleBy(int n, int d)
{
    return n % d == 0;
}

bool isPrime(int n)
{
    if (n < 2)
    {
        return false;
    }

    for (int i = 2; i < n/2; i++)
    {
        if (isDivisibleBy(n, i))
        {
            return false;
        }
    }

    return true;
}

int nextPrime(int n)
{
    int next = n + 1;
    while (!isPrime(next))
    {
        next++;
    }
    return next;
}

int countPrimes(int a, int b)
{
    int count = 0;
    for (int i = a; i <= b; i++)
    {
        if (isPrime(i))
        {
            count++;
        }
    }
    return count;
}

bool isTwinPrime(int n)
{
    return isPrime(n) && (isPrime(n - 2) || isPrime(n + 2));
}

int nextTwinPrime(int n)
{
    int next = n + 1;
    while (!isTwinPrime(next))
    {
        next++;
    }
    return next;
}

int largestTwinPrime(int a, int b)
{
    int largest = -1;
    for (int i = a; i <= b; i++)
    {
        if (isTwinPrime(i))
        {
            largest = i;
        }
    }
    return largest;
}
