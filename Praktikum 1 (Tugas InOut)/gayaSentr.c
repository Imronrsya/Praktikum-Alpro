#include <stdio.h>

int main(){
    int m, v, r;
    
    float F;
    printf("Masukan massa (m):");
    scanf("%d", &m);
    printf("Masukan kecepatan (v):");
    scanf("%d", &v);
    printf("Masukan jari-jari (r):");
    scanf("%d", &r);

    // Menghitung jarak
    F = m * (v * v / r);

    printf("jarak yang ditumpuh: %f newton\n", F);

    return 0;
}