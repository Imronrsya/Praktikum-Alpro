#include <stdio.h>

int main(){

    int nomorBulan;
    printf("Masukan nomor Bulan:", nomorBulan);
    scanf("%d", &nomorBulan);
    
    if (nomorBulan == 1){
        printf("Januari\n", nomorBulan);
    }
    else if (nomorBulan == 2){
        printf("Februari\n", nomorBulan);
    }
    else if (nomorBulan == 3){
        printf("Maret\n", nomorBulan);
    }
    else if (nomorBulan == 4){
        printf("April\n", nomorBulan);
    }
    else if (nomorBulan == 5){
        printf("Mei\n", nomorBulan);
    }
    else if (nomorBulan == 6){
        printf("Juni\n", nomorBulan);
    }
    else if (nomorBulan == 7){
        printf("Juli\n", nomorBulan);
    }
    else if (nomorBulan == 8){
        printf("Agustus\n", nomorBulan);
    }
    else if (nomorBulan == 9){
        printf("September\n", nomorBulan);
    }
    else if (nomorBulan == 10){
        printf("Oktober\n", nomorBulan);
    }
    else if (nomorBulan == 11){
        printf("November\n", nomorBulan);
    }
    else if (nomorBulan == 12){
        printf("Desember\n", nomorBulan);
    }
    else {
        printf("Masukan nomor bulan tidak tepat\n", nomorBulan);
    }

    return 0;
   
}