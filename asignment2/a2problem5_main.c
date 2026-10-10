#include <stdio.h>
#include "a2problem5.h"

int main(void) {
    int A[] = {1, 2, 5, 7, 8};
    int B[] = {1, 3, 4, 6};
    int C[9];
    
    mergeArrays(A, 5, B, 4, C);
    
    printf("Merged output: ");
    for (int idx = 0; idx < 9; idx++) {
        printf("%d ", C[idx]);
    }
    printf("\n");
    return 0;
}