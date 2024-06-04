#include <stdio.h>

void selectionSortDescending(int T[], int N) {
    int Pass, i, Temp, IMax;

    for (Pass = 0; Pass < N - 1; Pass++) {
        IMax = Pass;

        for (i = Pass + 1; i < N; i++) {
            if (T[i] > T[IMax]) {
                IMax = i;
            }
        }

        Temp = T[IMax];
        T[IMax] = T[Pass];
        T[Pass] = Temp;
    }
}

int main() {
    int T[] = {7, 1, 4, 5, 3, 0, 6};
    int N = sizeof(T) / sizeof(T[0]);
    int i;

    selectionSortDescending(T, N);

    printf("Array setelah diurutkan:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", T[i]);
    }
    printf("\n");

    return 0;
}
