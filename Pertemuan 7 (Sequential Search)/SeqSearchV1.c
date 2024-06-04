#include <stdio.h>

int SequentialSearchV1(int T[], int N, int X) {
    int i = 0;
    while (i < N) {
        if (T[i] == X) {
            return i;
        }
        i = i + 1;
    }
    return -1;
}

int main() {
    int T[] = {19, 1, 28, 5, 20, 15, 52, 13, 16, 29, 71, 65, 10, 18, 87, 5, 90, 35, 7, 11};
    int N = 20;
    int X;

    printf("Masukan nilai X: ");
    scanf("%d", &X);

    int IX = SequentialSearchV1(T, N, X);
    if (IX != -1) {
        printf("Nilai %d ditemukan pada index ke-%d.\n", X, IX);
    } else {
        printf("Nilai %d tidak ditemukan dalam array.\n", X);
    }

    return 0;
}
