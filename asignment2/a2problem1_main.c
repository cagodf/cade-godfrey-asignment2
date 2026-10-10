#include <stdio.h>
#include "a2problem1.h"

int main(void) {
    printf("Result 1: %f\n", binomialDistribution(4, 6, 0.3f)); // Expected ~0.059535
    printf("Result 2: %f\n", binomialDistribution(3, 5, 0.5f)); // Expected ~0.312500
    return 0;
}