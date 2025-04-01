#include <stdio.h>

void selectionSort(int arr[], int n) {
    for(int i=0;i<n-1;i++) {
        int minindex = i;
        for(int j=0;j<n;j++){
            if(arr[j] < arr[minindex]) {
                minindex = j;
            }
        }

        if (minindex != i) {
            temp = arr[i];
            arr[i] = arr[minindex];
            arr[minindex] = temp;
        }
    }
}

void printArray (int arr[], int n) {
    for(int i=0;i<n;i++) {
        printf("%d ", arr[i]);
    }
}