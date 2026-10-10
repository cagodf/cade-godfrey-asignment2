#include "a2problem4.h"

int checkSet(int input[], int input_length) {
    // Check if the input array is not empty
    return (input_length > 0) ? 1 : 0;
}

// Check if a specific element exists within an array 
static int contains(int arr[], int len, int val) {
    for (int i = 0; i < len; i++) {
        if (arr[i] == val) return 1;
    }
    return 0;
}

int findIntersection(int input1[], int input1_length, int input2[], int input2_length) {
    int matches = 0;
    // Iterate through items of array 1 and check if they belong to array 2
    for (int i = 0; i < input1_length; i++) {
        // Skip duplicates in input1
        if (i > 0 && contains(input1, i, input1[i])) continue;
        
        if (contains(input2, input2_length, input1[i])) {
            matches++;
        }
    }
    return matches;
}

int findUnion(int input1[], int input1_length, int input2[], int input2_length) {
    int distinctElements = 0;
    
    // Count distinct items from the first array
    for (int i = 0; i < input1_length; i++) {
        if (!contains(input1, i, input1[i])) distinctElements++;
    }
    
    // Count distinct elements from the second array not already in the union
    for (int j = 0; j < input2_length; j++) {
        if (!contains(input2, j, input2[j]) && !contains(input1, input1_length, input2[j])) {
            distinctElements++;
        }
    }
    return distinctElements;
}

float calculateJaccard(int input1[], int input1_length, int input2[], int input2_length) {
    int intersectionCount = findIntersection(input1, input1_length, input2, input2_length);
    int unionCount = findUnion(input1, input1_length, input2, input2_length);
    
    if (unionCount == 0) return 0.0f;
    return (float)intersectionCount / unionCount;
}