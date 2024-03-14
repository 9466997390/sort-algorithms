#include<stdio.h>

void printarr(int arr[], int size) {
    
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    
    int arr[] = {3, 2, 6, 3, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    // selection sort
    for (int i = 0; i < size - 1; i++) {
        int minimum = i;
        for(int current = i+1; current < size; current++) {
            if(arr[minimum] > arr[current]) {
                minimum = current;
            }
        }
        int temp = arr[minimum];
        arr[minimum] = arr[i];
        arr[i] = temp;
    }

    printarr(arr, size);
    return 0;
}