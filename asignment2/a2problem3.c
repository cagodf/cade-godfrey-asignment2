#include "a2problem3.h"

// Function to compute X raised to the power of n
int power(int X, int n) {
    int res = 1;
    for (int i = 0; i < n; i++) {
        res *= X;
    }
    return res;
}
/* Recursive function to compute factorial of n */
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

//Checks if the input is a prime number
static int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int generatePrime(int L, int R, int i) {
    int primeCount = 0;
    // Iterate from L to R to find the i-th prime number
    for (int current = L; current <= R; current++) {
        if (isPrime(current)) {
            primeCount++;
            if (primeCount == i) {
                return current;
            }
        }
    }
    // If fewer than i primes exist, back to 0
    return 0;
}

float computeSeries(int X, int n, int L, int R) {
    float sum = (float)X; // Initialize series with base of X
    
    for (int i = 1; i <= n; i++) {
        int p_i = generatePrime(L, R, i);
        float term = (float)power(X, i) / factorial(i) + p_i;
        sum += term;
    }
    
    return sum;
}