#include <stdio.h>

void InsertionSort(int T[], int N) {
    int i, Temp, Pass;

    for(Pass = 1; Pass < N; Pass++) {
        Temp = T[Pass];
        i = Pass - 1;

        while(i >= 0 && T[i] > Temp) {
            T[i + 1] = T[i];
            i = i - 1;
        }
        T[i + 1] = Temp;
    }
}

int main() {
    int arr[] = {7, 1, 4, 5, 3, 0, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    InsertionSort(arr, n);

    printf("Sorted array: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
