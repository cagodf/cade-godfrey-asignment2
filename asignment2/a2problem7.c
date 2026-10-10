#include "a2problem7.h"

// Standard recursive fibonacci sequence
unsigned long long int fibonacciRecursive(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

// iterative fibonacci sequence
unsigned long long int fibonacciIterative(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    
    unsigned long long int prev2 = 0, prev1 = 1, current = 0;
    for (int i = 2; i <= n; i++) {
        current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }
    return current;
}

// Helper function for the memoization table 
static unsigned long long int fibonacciHelper(int n, unsigned long long int memoTable[]) {
    if (n <= 0) return 0;
    if (n == 1) return 1;

    // Check if the calculation already exists inside thetable
    if (memoTable[n] != 0) {
        return memoTable[n];
    }

    // input calculated element to cache
    memoTable[n] = fibonacciHelper(n - 1, memoTable) + fibonacciHelper(n - 2, memoTable);
    return memoTable[n];
}

unsigned long long int fibonacciImproved(int n) {
    if (n <= 0) return 0;
    
    unsigned long long int memoTable[100] = {0};
    return fibonacciHelper(n, memoTable);
}