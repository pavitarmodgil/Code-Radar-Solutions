void binarySearch(int arr[], int n,int target) {
    int left =0;
    int right = n-1;
    int mid = (left+right) / 2;

    if(arr[mid]==target){
        return mid;
    } else if(arr[mid]<target) {
        left = mid +1;
    } else if( arr[mid]>target) {
        right = mid-1;
    }
    return -1;
}

