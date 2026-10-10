#include "a2problem2.h"

int countFunctionCalls(void) {
    // increase a counter the function is called and return the count
    static int static_count = 0;
    static_count++;
    return static_count;
}

unsigned long long int calculateFactorial(int n) {
    // Increment tracker
    countFunctionCalls();

    // make sure n is positive
    if (n < 0) {
        return (unsigned long long int)-1;
    }

    // Base Case
    if (n == 0) {
        return 1;
    }
    return (unsigned long long int)n * calculateFactorial(n - 1);
}