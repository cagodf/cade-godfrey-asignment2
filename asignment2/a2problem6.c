#include "a2problem6.h"

int power(int base, int exponent) {
    // Base Case: exponent equal to 1
    if (exponent == 1) {
        return base;
    }
    
    return base * power(base, exponent - 1);
}