#include <stdio.h>

int main() {
  int angka[100], size, counter, posisi = 0;

  printf("Masukkan berapa banyak angka : ");
  scanf("%d", &size);

  printf("Masukkan %d Angka\n", size);
  
  printf("\n");

  printf("---- Mulai ----\n");
  
  for (counter = 0; counter < size; counter++) {
  	printf("Masukkan angka ke-%i : ", counter+1);
  	scanf("%d", &angka[counter]);
  }

  for (counter = 1; counter < size; counter++) {
  	if (angka[counter] < angka[posisi]) {
  		posisi = counter;
  	}
  }
  
  printf("\n");

  printf("Angka Minimum ada di posisi %d dan nilai nya adalah %d.\n", posisi+1, angka[posisi]);
  return 0;
  }
