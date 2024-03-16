#include <stdio.h>

int main(){
    int n, i;

    printf("Masukan Bilangan : ");
    scanf("%d", &n);
    printf("Faktor bilangan adalah : ");


    for(i = 1; i <= n; i++){
        if(n % i == 0){
            printf("%d", i);

            if(i != n){
                printf(", ");
            }
        }
    }

    printf("\n");

    return 0;
}