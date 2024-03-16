#include <stdio.h>

int main() {
    int N, i, sum = 0;
    
    printf("Masukkan nilai N: ");
    scanf("%d", &N);
    
    if(N <= 0) {
        printf("N harus lebih besar dari 0\n");
        return 0;
    }
    
    for(i = 1; i < N; i++) {
        if(N % i == 0) {
            sum += i;
        }
    }
    
    if(sum == N) {
        printf("N adalah bilangan sempurna\n");
    } else {
        printf("N bukan bilangan sempurna\n");
    }
    
    return 0;
}
