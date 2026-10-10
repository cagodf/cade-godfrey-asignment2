#include "a2problem1.h"

// Helper function to compute the factorial of a small integer
static unsigned long long calculateFactorial(int num) {
    unsigned long long factorial = 1;
    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }
    return factorial;
}

// Helper function to compute the power of a base to an exponent
static float calculatePower(float base, int exp) {
    float result = 1.0f;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

float binomialDistribution(int k, int n, float p) {
    // Edge case handling: check if bounds are valid
    if (k < 0 || k > n || p < 0.0f || p > 1.0f) {
        return 0.0f;
    }

    //Calculate the combination nCr = n! / (k! * (n - k)!)
    unsigned long long nFact = calculateFactorial(n);
    unsigned long long kFact = calculateFactorial(k);
    unsigned long long nMinusKFact = calculateFactorial(n - k);
    float nCr = (float)nFact / (kFact * nMinusKFact);

    //Calculate the individual component powers
    float pToK = calculatePower(p, k);
    float oneMinusPToNMinusK = calculatePower(1.0f - p, n - k);

    //Calculate the final probability mass function
    return nCr * pToK * oneMinusPToNMinusK;
}