#include <stdio.h>
#include "a2problem1.h"

int main(void) {
    printf("Result 1: %f\n", binomialDistribution(4, 6, 0.3f));
    printf("Result 2: %f\n", binomialDistribution(3, 5, 0.5f));
    return 0;
}