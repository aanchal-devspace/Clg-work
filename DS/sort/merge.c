#include <stdio.h>
void merge(int arr[], int low, int mid, int high) {
    int i = low;
    int j = mid + 1;
    int k = low;
    int temp[100];
    while (i <= mid && j <= high) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }
    
    while (i <= mid) {
        temp[k++] = arr[i++];
    }
    while (j <= high) {
        temp[k++] = arr[j++];
    }
    
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i];
    }
}
void mergeSort(int arr[],int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

void display(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90, 88};
    int n = 8;
    
    printf("Original array: ");
    display(arr, n);
    
    mergeSort(arr, 0, n - 1);
    
    printf("Sorted array: ");
    display(arr, n);
    
    return 0;
}