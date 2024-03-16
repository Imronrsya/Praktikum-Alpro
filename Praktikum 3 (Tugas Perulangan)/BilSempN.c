#include <stdio.h>

int main() {
    int N, i, j, sum, adaSempurna = 0;
    
    printf("Masukkan nilai N: ");
    scanf("%d", &N);
    
    if(N <= 0) {
        printf("N harus lebih besar dari 0\n");
        return 0;
    }
    
    for(i = 1; i <= N; i++) {
        sum = 0;
        for(j = 1; j < i; j++) {
            if(i % j == 0) {
                sum += j;
            }
        }
        if(sum == i) {
            if(adaSempurna == 0) {
                printf("Bilangan Sempurnanya adalah: ");
                adaSempurna = 1;
            }
            printf("%d ", i);
        }
    }
    
    if(adaSempurna == 0) {
        printf("Tidak ada bilangan sempurna dalam rentang tersebut\n");
    } else {
        printf("\n");
    }
    
    return 0;
}
