#include "a2problem5.h"

void mergeArrays(int A[], int size_a, int B[], int size_b, int C[]) {
    int i = 0, j = 0, k = 0;

    // loop through both arrays comparing indices
    while (i < size_a && j < size_b) {
        if (A[i] <= B[j]) {
            C[k++] = A[i++];
        } else {
            C[k++] = B[j++];
        }
    }

    // Flush terms inside array A
    while (i < size_a) {
        C[k++] = A[i++];
    }

    // Flush terms inside array B
    while (j < size_b) {
        C[k++] = B[j++];
    }
}