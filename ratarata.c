#include<stdio.h>

void main() {
	int jumlah = 0;
	int bil[100], counter, n;
	float rataRata;
	
	printf("Masukkan n : ");
	scanf("%d", &n);
	
	printf("\n");
	
	for (counter = 0; counter < n; counter++) {
  		printf("Masukkan angka ke-%i : ", counter+1);
  		scanf("%d", &bil[counter]);
  	}
  	
  	for (counter = 0; counter < n; counter++) {
  		jumlah = jumlah + bil[counter];
 	}
  	
  	printf("\n");
  	
  	//process
  	rataRata = jumlah / n;
  	
  	printf("Rata - rata = %f \n", rataRata);
  	
  	// int main -> syarat harus ada return value -> pengolahan integer -> !void
  	// void main -> no return value || undefined || null
}
