#include<stdio.h>

void printarr(int array[], int size) {
    
    for(int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
}

int main() {
    
    int array[] = {3, 2, 6, 3, 8, 9};
    int size = sizeof(array) / sizeof(array[0]);

    // selection sort
    for (int i = 0; i < size - 1; i++) {
        int minimum = i;
        for(int current = i+1; current < size; current++) {
            if(array[minimum] > array[current]) {
                minimum = current;
            }
        }
        int temp = array[minimum];
        array[minimum] = array[i];
        array[i] = temp;
    }

    printarr(array, size);
    return 0;
}