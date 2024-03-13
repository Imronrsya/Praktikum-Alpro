#include <stdio.h>

int main(){

    int nomorHari;
    printf("Masukan nomor Hari 1-7:", nomorHari);
    scanf("%d", &nomorHari);
    
    if (nomorHari == 1){
        printf("Senin\n", nomorHari);
    }
    else if (nomorHari == 2){
        printf("Selasa\n", nomorHari);
    }
    else if (nomorHari == 3){
        printf("Rabu\n", nomorHari);
    }
    else if (nomorHari == 4){
        printf("Kamis\n", nomorHari);
    }
    else if (nomorHari == 5){
        printf("Jumat\n", nomorHari);
    }
    else if (nomorHari == 6){
        printf("Sabtu\n", nomorHari);
    }
    else if (nomorHari == 7){
        printf("Minggu\n", nomorHari);
    }
    else {
        printf("Masukan nomor hari tidak tepat\n", nomorHari);
    }

    return 0;
   
}