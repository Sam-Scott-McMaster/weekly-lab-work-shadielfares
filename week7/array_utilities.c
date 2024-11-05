#include "array_utilities.h"
#include <stdio.h>
#include <stdlib.h>

int find_index(int array[], int size, int key){
    for (int i = 0; i < size; i++){
        if (array[i] == key){
            return i;
        }
    }
    return -1;
}

int* find_pointer(int array[], int size, int key) {
    for (int* ptr = array; ptr < array + size; ptr++) {
        if (*ptr == key) {
            // Return pointer to the first occurrence
            return ptr;
        }
    }
    // Return NULL if the key is not found
    return NULL;
}

int count(int array[], int size, int key){
    int occurrences = 0;
    int* ptr = array;
    int remaining_size = size;

    while ((ptr = find_pointer(ptr, remaining_size, key)) != NULL){
        occurrences++;
        ptr++;
        remaining_size = size - (ptr - array);
    }
    return occurrences;
}

int count2d(int array[][5], int rows, int cols, int key) {
    int total_occurrences = 0;
    for (int i = 0; i < rows; i++) {
        total_occurrences += count(array[i], cols, key); 
    }
    return total_occurrences;
}
