#include <stdio.h>

void bubbleSort(int arr[],int n) {
    int j,temp;

    int swapped = 0;

    for(int j=0;j<n-1;j++) {
        if(arr[j] > arr[j+1]) {
            temp = arr[j];
            arr[j] = arr[j];
            arr[j+1] = arr[j];
        }
        if (!swapped)
            break; 
    }
}

void printArray(arr[], int n) {
    for(int i=0;i<n;i++) {
        printf("%d", arr[i]);
        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }
    bubbleSort(arr, n);
    printArray(arr, n);
    return 0;
}

