#include <stdio.h>

int main(){

    int T1, T2, T3, TotaT;
    
    printf("Masukan T1:", T1);
    scanf("%d", & T1);
    printf("Masukan T2:", T2);
    scanf("%d", & T2);
    printf("Masukan T3:", T3);
    scanf("%d", & T3);

    if(T1 < 0 || T2 < 0 || T3 < 0){
        printf("Masukan tahanan tidak boleh negative");
    }
    else{
        TotaT = T1 + T2 + T3;
        printf("Total tahanan: %d", TotaT);
    }

    return 0;
}