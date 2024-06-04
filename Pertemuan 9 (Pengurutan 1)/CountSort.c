#include <stdio.h>

void findMinMax(int arr[], int n, int *min, int *max) {
    *min = arr[0];
    *max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}

void CountSORT(int T[], int N) {
    int ValMin, ValMax;
    findMinMax(T, N, &ValMin, &ValMax);
    
    int NBElmnt = ValMax - ValMin + 1;
    int TabCount[NBElmnt];
    
    for (int i = 0; i < NBElmnt; i++) {
        TabCount[i] = 0;
    }
    
    for (int i = 0; i < N; i++) {
        TabCount[T[i] - ValMin]++;
    }
    
    int k = 0;
    for (int i = 0; i < NBElmnt; i++) {
        while (TabCount[i] != 0) {
            T[k++] = i + ValMin;
            TabCount[i]--;
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int T[] = {4, 2, 2, 8, 3, 3, 1};
    int N = sizeof(T) / sizeof(T[0]);
    
    printf("Array sebelum diurutkan: \n");
    printArray(T, N);
    
    CountSORT(T, N);
    
    printf("Array setelah diurutkan: \n");
    printArray(T, N);
    
    return 0;
}
