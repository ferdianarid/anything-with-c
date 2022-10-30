#include<stdio.h>

int jumlah(int a, int b) {
	int total;
	total = a + b;
	return total;
}

int kali(int x, int z) {
	int total;
	total = x * z;
	return total;
}

int kurang(int n, int m) {
	int total;
	total = n - m;
	return total;
}

float bagi(int p, int q) {
	float total;
	total = p / (float)q; //casting as float
	return total;
}

int main() {
	int a, b, hasilJumlah, hasilKali, hasilKurang;
	double hasilBagi;
	
	printf("Masukkan angka 1 : ");
	scanf("%d", &a);
	
	printf("Masukkan angka 2 : ");
	scanf("%d", &b);
	
	hasilJumlah = jumlah(a, b);
	hasilKali = kali(a, b);
	hasilKurang = kurang(a, b);
	hasilBagi = bagi(a, b);
	
	printf("\n");
	
	printf("Hasil Jumlah : %i \n", hasilJumlah);
	printf("Hasil Kali : %i \n", hasilKali);
	printf("Hasil Kurang : %i \n", hasilKurang);
	printf("Hasil Bagi : %f \n", hasilBagi);
	
	return (0);
}
