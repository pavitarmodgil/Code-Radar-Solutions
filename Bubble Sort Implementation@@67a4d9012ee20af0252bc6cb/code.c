#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int temp;

    for (int i = 0; i < n - 1; i++) {
        int swapped = 0; // Reset swap flag at the beginning of each iteration
        
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) { 
                // Correct swap logic
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                
                swapped = 1; // Mark swap occurred
            }
        }

        // If no swap happened in this pass, array is already sorted
        if (!swapped)
            break;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]); // Print numbers with spaces
    }
    printf("\n"); // New line at the end
}


