#include <stdio.h>

int main(){
    int i, jumlah, k, n;

    printf("Masukkan k : ");
    scanf("%d", &k);
    printf("Masukkan n : ");
    scanf("%d", &n);

    jumlah = 1;
    for(i = 1; jumlah <= n; i++){
        if(i % k != 0){
            printf("%d", i);
            jumlah++;
        }
    }

    return 0;
}
