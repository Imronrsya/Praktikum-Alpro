#include <stdio.h>
#include <stdbool.h>

int main() {
    int Q, q, i, j, k;
    char b[50];
    char nama_buku[100][50];
    int stok_buku[100];
    int total_books = 0;
    bool Found;

    scanf("%d", &Q);

    for (i = 0; i < 100; i++) {
        for (k = 0; k < 50; k++) {
            nama_buku[i][k] = '\0';
        }
        stok_buku[i] = 0;
    }

    i = 0;
    while (i < Q) {
        scanf("%d", &q);
        scanf("%s", b);

        Found = false;
        j = 0;
        while (j <= total_books && !Found) {
            k = 0;
            while (b[k] != '\0' && nama_buku[j][k] != '\0' && b[k] == nama_buku[j][k]) {
                k++;
            }
            if (b[k] == '\0' && nama_buku[j][k] == '\0') {
                Found = true;
            } else {
                j++;
            }
        }

        if (q == 1) {
            if (Found) {
                printf("%d\n", stok_buku[j]);
            } else {
                printf("0\n");
            }
        } else if (q == 2) {
            if (!Found) {
                k = 0;
                while (b[k] != '\0') {
                    nama_buku[total_books][k] = b[k];
                    k++;
                }
                nama_buku[total_books][k] = '\0';
                stok_buku[total_books] = 1;
                total_books++;
            } else {
                stok_buku[j]++;
            }
            printf("Terima Kasih\n");
        } else {
            if (Found && stok_buku[j] > 0) {
                stok_buku[j]--;
                printf("Buku Berhasil Dipinjam\n");
            } else {
                printf("Maaf Stok Kosong\n");
            }
        }
        i++;
    }

    return 0;
}
