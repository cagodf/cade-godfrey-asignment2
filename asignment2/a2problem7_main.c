#include <stdio.h>
#include "a2problem7.h"

int main(void) {
    int target = 40;
    printf("Calculating Fib(%d)...\n", target);
    
    // Improved (Memoized) approach execution comparison check
    printf("Improved result: %llu\n", fibonacciImproved(target));
    printf("Iterative result: %llu\n", fibonacciIterative(target));
    printf("Recursive result: %llu\n", fibonacciRecursive(target));
    
    return 0;
}