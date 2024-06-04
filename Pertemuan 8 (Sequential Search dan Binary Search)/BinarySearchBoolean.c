#include <stdio.h>
#include <stdbool.h>

void BinSearch1(int T[], int N, int X, bool *Found, int *IX) {
    int Atas = 0;
    int Bawah = N - 1;
    int Tengah;
    *Found = false;

    while (Atas <= Bawah && !(*Found)) {
        Tengah = (Atas + Bawah) / 2;

        if (T[Tengah] == X) {
            *Found = true;
            *IX = Tengah + 1;
        } else if (T[Tengah] < X) {
            Bawah = Tengah - 1;
        } else {
            Atas = Tengah + 1;
        }
    }

    if (!(*Found)) {
        *IX = 0;
    }
}

int main() {
    int T[] = {1, 4, 6, 7, 10, 12, 18, 21, 29, 30, 41, 44, 47};
    int N = sizeof(T) / sizeof(T[0]);
    int X;
    bool Found;
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
