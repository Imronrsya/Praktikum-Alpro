#include <stdio.h>

int main(){
    
    int i;
    printf("Masukan bilangan integer: ", i);
    scanf("%d", &i);

    if (i > 0) {
        printf("Bilangan bulat positif\n", i);
    } else if (i == 0) {
        printf("Bilangan nol\n", i);
    } else if (i < 0) {
        printf("Bilangan bulat negative\n", i);
    }   

    return 0;
}