#include <stdio.h>

int main() {
    int N, i, j, prima;
    
    printf("Masukkan nilai N: ");
    scanf("%d", &N);
    
    if(N <= 0) {
        printf("N harus lebih besar dari 0\n");
        return 0;
    }
    
    printf("Bilangan Primanya adalah: ");
    for(i = 2; i <= N; i++) {
        prima = 1;
        for(j = 2; j * j <= i; j++) {
            if(i % j == 0) {
                prima = 0;
                break;
            }
        }
        if(prima) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    
    return 0;
}
