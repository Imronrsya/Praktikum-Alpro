#include <stdio.h>

void BinSearch1(int T[], int N, int X, int *Found, int *IX) {
    int Atas = 0;
    int Bawah = N - 1;
    int Tengah = (Atas + Bawah) / 2;

    while (Atas <= Bawah && T[Tengah] != X) {
        if (T[Tengah] > X) {
            Atas = Tengah + 1;
        } else {
            Bawah = Tengah - 1;
        }
        Tengah = (Atas + Bawah) / 2;
    }

    if (T[Tengah] == X) {
        *Found = 1;
        *IX = Tengah + 1;
    } else {
        *Found = 0;
        *IX = 0;
    }
}

int main() {
    int T[] = {1, 4, 6, 7, 10, 12, 18, 21, 29, 30, 41, 44, 47};
    int N = sizeof(T) / sizeof(T[0]);
    int X;
    int Found;
    int IX;

    printf("Masukan nilai X: ");
    scanf("%d", &X);

    BinSearch1(T, N, X, &Found, &IX);

    if (Found) {
        printf("Nilai %d ditemukan pada index ke-%d.\n", X, IX);
    } else {
        printf("Nilai %d tidak ditemukan dalam array.\n", X);
    }

    return 0;
}
