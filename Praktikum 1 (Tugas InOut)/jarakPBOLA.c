#include <stdio.h>

int main(){
    int v0, t, g;
    
    float y;
    printf("Masukan kecepatan awal (v0):");
    scanf("%d", &v0);
    printf("Masukan waktu (t):");
    scanf("%d", &t);
    printf("Masukan gravitasi (g):");
    scanf("%d", &g);

    // Menghitung jarak
    y = v0 * t - 0.5 * (g * t * t);

    printf("jarak yang ditumpuh: %f meter\n", y);

    return 0;
}