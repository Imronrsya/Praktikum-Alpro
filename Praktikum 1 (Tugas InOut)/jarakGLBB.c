#include <stdio.h>

int main(){
    int v0, t, a;
    
    float S;
    printf("Masukan kecepatan awal (v0):");
    scanf("%d", &v0);
    printf("Masukan waktu (t):");
    scanf("%d", &t);
    printf("Masukan jarak (a):");
    scanf("%d", &a);

    //Menghitung jarak
    S = v0 * t + 0.5* (a * t * t);

    printf("jarak yang ditempuh: %f meter\n", S);

    return 0;
}
