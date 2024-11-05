// main.c
/*
 *Input: Array of integers
 *Output: Integer index of first occurance of key
 *Shadi El-Fares, Nov 4.2024
 */
// main.c

#include <stdio.h>
#include "array_utilities.h"

int main() {
    int array[] = {3, 5, 7, 9, 5, 11};
    int size = sizeof(array) / sizeof(array[0]);

    // Test cases
    int tests[] = {5, 9, 11, 1, 3};
    int num_tests = sizeof(tests) / sizeof(tests[0]);

    printf("Testing find_index:\n");

    for (int i = 0; i < num_tests; i++) {
        int key = tests[i];
        int index = find_index(array, size, key);
        if (index != -1) {
            printf("Key %d found at index %d\n", key, index);
        } else {
            printf("Key %d not found in the array\n", key);
        }
    }

    printf("\nTesting find_pointer:\n");

    for (int i = 0; i < num_tests; i++) {
        int key = tests[i];
        int* result = find_pointer(array, size, key);
        if (result != NULL) {
            printf("Key %d FOUND %d\n", key, *result);
        } else {
            printf("Key %d NOT FOUND\n", key);
        }
    }

    printf("\nTesting count:\n");

    for (int i = 0; i < num_tests; i++) {
        int key = tests[i];
        int occurrences = count(array, size, key);
        printf("Key %d appears %d times in the array\n", key, occurrences);
    }

    printf("\nTesting count2D:\n");

    int array2[3][5] = {
        {3, 5, 7, 5, 11},
        {5, 9, 5, 2, 5},
        {3, 6, 5, 5, 8}
    };
    
    int key = 5;

    int total_occurrences = count2d(array2, 3, 5, key); // Call count2d
    printf("Key %d appears %d times in the 2D array\n", key, total_occurrences);

    return 0;
}
