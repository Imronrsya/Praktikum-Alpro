#include <stdio.h>

void SEQSearchWithSentinel(int T[], int N, int X, int *IX) {
    T[N] = X;

    int i = 0;
    while (T[i] != X) {
        i++;
    }

    if (i < N) {
        *IX = i + 1;
    } else {
        *IX = 0; 
    }
}

int main() {
    int T[] = {19, 1, 28, 5, 20, 15, 52, 13, 16, 29}; 
    int N = 10;
    int X;
    int IX;

    printf("Masukan nilai X: ");
    scanf("%d", &X);

    SEQSearchWithSentinel(T, N, X, &IX);

    if (IX != 0) {
        printf("Nilai %d ditemukan pada index ke-%d.\n", X, IX);
    } else {
        printf("Nilai %d tidak ditemukan dalam array.\n", X);
    }

    return 0;
}
