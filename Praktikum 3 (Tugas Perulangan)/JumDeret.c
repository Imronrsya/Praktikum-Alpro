#include <stdio.h>

int main(){

    int n, i, total = 0;

    printf("Masukan bilangan:");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        total += i;
    }

    printf("Jumlah total deret bilangan: %d\n", total);

    return 0;
}