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

int main() {
    int n;
    scanf("%d", &n);
    int arr[n]; // Variable length array (C99+)

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, n);
    printArray(arr, n);

    return 0;
}
Explanation of Fixes:
Corrected the swap logic.

Moved the if (!swapped) break; outside the inner loop.

Fixed printArray so that elements are printed in one line with spaces.

Sample Input & Output:
Input:
Copy
Edit
5
64 34 25 12 22
Output:
Copy
Edit
12 22 25 34 64
This version of the program correctly sorts the array using Bubble Sort. 🚀







You said:
selection sort


ChatGPT said:
Selection Sort is another simple sorting algorithm. Here’s the corrected Selection Sort implementation in C:

How Selection Sort Works
Find the smallest element in the array and swap it with the first element.

Find the second smallest element and swap it with the second element.

Repeat this process until the entire array is sorted.

Corrected C Code for Selection Sort
c
Copy
Edit
#include <stdio.h>

void selectionSort(int arr[], int n) {
    int minIndex, temp;

    for (int i = 0; i < n - 1; i++) {
        minIndex = i; // Assume the first element is the smallest
        
        // Find the minimum element in the unsorted part
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element of the unsorted part
        if (minIndex != i) {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]); // Print numbers with spaces
    }
    printf("\n"); // New line at the end
}