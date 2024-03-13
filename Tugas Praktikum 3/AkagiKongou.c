#include <stdio.h>

int main() {
  int A, B, C, babak;

  printf("Masukkan angka yang dipilih Akagi: ");
  scanf("%d", &A);
  printf("Masukkan angka yang dipilih Kongou: ");
  scanf("%d", &B);

  babak = 1;

  while (B > 0) {
    C = A - B;
    A = B;
    B = C;

    printf("Babak %d\n", babak);
    printf("C = %d\n", C);
    printf("A = %d\n", A);
    printf("B = %d\n", B);

    babak++;
  }

  if (B == 0) {
    printf("Pemenangnya adalah Kongou\n");
  } else {
    printf("Pemenangnya adalah Akagi\n");
  }

  return 0;
}
