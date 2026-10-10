#include <stdio.h>
#include "a2problem4.h"

int main(void) {
    int s1[] = {1, 2, 5, 6};
    int s2[] = {2, 4, 5, 8};
    printf("Intersection: %d\n", findIntersection(s1, 4, s2, 4));
    printf("Union: %d\n", findUnion(s1, 4, s2, 4));
    printf("Similarity: %f\n", calculateJaccard(s1, 4, s2, 4));
    return 0;
}