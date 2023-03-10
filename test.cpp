#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("isDivisibleBy") {
    CHECK(isDivisibleBy(100, 25) == true);
    CHECK(isDivisibleBy(35, 17) == false);
    CHECK(isDivisibleBy(27, 3) == true);
}

TEST_CASE("isPrime") {
    CHECK(isPrime(2) == true);
    CHECK(isPrime(3) == true);
    CHECK(isPrime(4) == false);
    CHECK(isPrime(17) == true);
    CHECK(isPrime(18) == false);
}

TEST_CASE("nextPrime") {
    CHECK(nextPrime(14) == 17);
    CHECK(nextPrime(17) == 19);
    CHECK(nextPrime(31) == 37);
}

TEST_CASE("countPrimes") {
    CHECK(countPrimes(2, 10) == 4);
    CHECK(countPrimes(10, 20) == 2);
    CHECK(countPrimes(1, 100) == 25);
}

TEST_CASE("isTwinPrime") {
    CHECK(isTwinPrime(3) == true);
    CHECK(isTwinPrime(5) == true);
    CHECK(isTwinPrime(17) == true);
    CHECK(isTwinPrime(19) == true);
    CHECK(isTwinPrime(11) == false);
    CHECK(isTwinPrime(31) == false);
}

TEST_CASE("nextTwinPrime") {
    CHECK(nextTwinPrime(5) == 7);
    CHECK(nextTwinPrime(17) == 19);
    CHECK(nextTwinPrime(29) == 31);
}

TEST_CASE("largestTwinPrime") {
    CHECK(largestTwinPrime(5, 18) == 17);
    CHECK(largestTwinPrime(1, 31) == 31);
    CHECK(largestTwinPrime(14, 16) == -1);
}