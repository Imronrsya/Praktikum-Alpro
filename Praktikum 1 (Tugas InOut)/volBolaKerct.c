#include <stdio.h>

int main(){
    float r, Vb, Vk, PHI = 3.1415;

    printf("Masukan jari-jari lingkaran (r):");
    scanf("%f", &r);

    // Menghitung volume bola
    Vb = 4.0/3.0 * (PHI * r * r * r);

    // Menghitung volume kerucut
    Vk = 0.5 * Vb;

    printf("volume bola : %f kubik/n", Vb);
    printf("volume kerucut : %f kubik/n", Vk);

    return 0;
}