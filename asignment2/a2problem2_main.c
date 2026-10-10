#include <stdio.h>
#include "a2problem2.h"

int main(void) {
    printf("Factorial of 5: %llu\n", calculateFactorial(5));
    printf("Total function calls: %d\n", countFunctionCalls());
    printf("Factorial of 10: %llu\n", calculateFactorial(10));
    printf("Total function calls: %d\n", countFunctionCalls());
    printf("Factorial of -3: %llu\n", calculateFactorial(-3));
    printf("Total function calls: %d\n", countFunctionCalls());
}