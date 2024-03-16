#include <stdio.h>

int main() {
    int N, isPrime = 1;

    printf("Masukkan bilangan integer positif: ");
    scanf("%d", &N);

    if (N <= 1) {
        printf("%d Bukan Bilangan Prima.\n", N);
        return 0;
    }

    for (int i = 2; i * i <= N; i++) {
        if (N % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime) {
        printf("%d adalah Bilangan Prima.\n", N);
    } else {
        printf("%d bukan Bilangan Prima.\n", N);
    }

    return 0;
}
