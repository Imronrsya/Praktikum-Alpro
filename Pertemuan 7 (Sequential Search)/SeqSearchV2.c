#include <stdio.h>
#include <stdbool.h>

int SequentialSearchV2(int T[], int N, int X) {
    bool Found = false;
    int i = 0;
    while (i < N && !Found) {
        if (T[i] == X) {
            Found = true;
        } else {
            i = i + 1;
        }
    }
    if (Found) {
        return i;
    } else {
        return -1;
    }
}

int main() {
    int T[] = {19, 1, 28, 5, 20, 15, 52, 13, 16, 29, 71, 65, 10, 18, 87, 5, 90, 35, 7, 11};
    int N = 20;
    int X;

    printf("Masukan nilai X: ");
    scanf("%d", &X);

    int IX = SequentialSearchV2(T, N, X);
    if (IX != -1) {
        printf("Nilai %d ditemukan pada index ke-%d.\n", X, IX);
    } else {
        printf("Nilai %d tidak ditemukan dalam array.\n", X);
    }

    return 0;
}
