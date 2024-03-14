#include<stdio.h>
#include<stdbool.h>

void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        bool check = false;
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j+1]) {
                // swap
                int x = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = x;
                check = true;
            }
        }
        if(check == false) {
            break;
        }
    }
}

void print(int arr[], int size) {
    
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int arr[] = {2, 4, 56, 5, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);
    print(arr, n);
    
    return 0;
}