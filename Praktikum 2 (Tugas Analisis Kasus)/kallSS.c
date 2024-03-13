#include <stdio.h>

int main() {
    int iA, iB;
    char pilihan;

    printf("Masukkan bilangan pertama: ");
    scanf("%d", &iA);

    printf("Masukkan bilangan kedua: ");
    scanf("%d", &iB);

    printf("Pilih operasi a (tambah), b (kurang), c (kali), d (bagi dengan hasil float), e (bagi dengan hasil integer), f (modulus):\n");
    scanf(" %c", &pilihan);

    if(pilihan == 'a') {
        printf("Hasil: %d\n", iA + iB);
    } else if(pilihan == 'b') {
        printf("Hasil: %d\n", iA - iB);
    } else if(pilihan == 'c') {
        printf("Hasil: %d\n", iA * iB);
    } else if(pilihan == 'd') {
        printf("Hasil: %.2f\n", (float)iA / iB);
    } else if(pilihan == 'e') {
        printf("Hasil: %d\n", iA / iB);
    } else if(pilihan == 'f') {
        printf("Hasil: %d\n", iA % iB);
    } else {
        printf("Bukan pilihan menu yang benar\n");
    }

    return 0;
}
