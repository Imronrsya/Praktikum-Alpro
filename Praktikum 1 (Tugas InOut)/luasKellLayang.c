#include <stdio.h>

int main(){
    int s1, s2, d1, d2;

    float Luas, Kell;
    printf("Masuka sisi satu layang-layang (s1):");
    scanf("%d", &s1);
    printf("Masukan sisi dua layang-layang (s2):");
    scanf("%d", &s2);
    printf("Masukan diagonal satu layang-layanng (d1):");
    scanf("%d", &d1);
    printf("Masukan diagonal dua layang-layanng (d2):");
    scanf("%d", &d2);

    // Menghitung Luas 
    Luas = 0.5 * d1 * d2;

    // Menghitung Keliling
    Kell = 2 * (s1 + s2);

    printf("Luas layang-layang : %f meter/n", Luas);
    printf("Keliling layang-layang : %f meter/n", Kell);

    return 0;
}