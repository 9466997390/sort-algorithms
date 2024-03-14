#include<iostream>
using namespace std;

void printarr(int arr[], int size) {
    
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {3, 4, 53, 56, 12, 89};
    int size = sizeof(arr) / sizeof(arr[0]);

    // bubble sort
    for(int i = 0; i < size - 1; i++) {
        bool check = false;
        for(int j = 0; j < size - i - 1; j++) {
            if(arr[j] > arr[j+1]) {
                // swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

                check = true;
            }
        }
        if(check == false){
            break;
        }
    }

    printarr(arr, size);
    return 0;
}