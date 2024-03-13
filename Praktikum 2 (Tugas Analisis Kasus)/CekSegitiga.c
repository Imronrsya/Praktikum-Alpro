#include <stdio.h>

int main(){

    int A, B, C;
    printf("Masukan sisi A:", A);
    scanf("%d", &A);
    printf("Masukan sisi B:", B);
    scanf("%d", &B);
    printf("Masukan sisi C:", C);
    scanf("%d", &C);

    if(A == B && B == C){
        printf("Segitiga sama sisi\n");
    }
    else if(A == C && A != B){
        printf("Segitiga sama kaki\n");
    }
    else if(A > 0 && B > 0 && C > 0){
        printf("Segitiga sembarang\n");
    }
    else if(A == 0 || B == 0 || C == 0){
        printf("Terdapat nilai yang bukan sisi segitiga\n");
    }

    return 0;
}