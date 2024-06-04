#include <stdio.h>


void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        printf("yuhu",arr[j]);

 
        while (j >= 0 && arr[j] > key) {
            printf("yapi",arr[j]);
            arr[j + 1] = arr[j];
            j = j - 1;
            printf("yipi",arr[j]);
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {12, 11, 13,10};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array sebelum diurutkan: \n");
    printArray(arr, n);

    insertionSort(arr, n);

    printf("Array setelah diurutkan: \n");
    printArray(arr, n);

    return 0;
}