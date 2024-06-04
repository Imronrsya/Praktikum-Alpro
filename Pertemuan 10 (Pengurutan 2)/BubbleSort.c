#include <stdio.h>

void BubbleSort(int T[], int N) {
    int Pass, Temp;

    for(Pass = 0; Pass < N - 1; Pass++) {
        for(int K = N - 1; K > Pass; K--) {
            if(T[K] < T[K - 1]) {
                Temp = T[K];
                T[K] = T[K - 1];
                T[K - 1] = Temp;
            }
        }
    }
}

int main() {
    int arr[] = {7, 1, 4, 5, 3, 0, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    BubbleSort(arr, n);

    printf("Sorted array: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
