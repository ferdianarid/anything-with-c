#include<stdio.h>

void main() {
	char mahasiswa1[30];
	char mahasiswa2[30];
	char mahasiswa3[30];
	
	int nilai1;
	int nilai2;
	int nilai3;
	
	printf("Nama Mahasiswa 1 : ");
	scanf("%s", mahasiswa1);
	
	printf("Nilai Mahasiswa 1 : ");
	scanf("%d", &nilai1);
	
	printf("\n");
	
	printf("Nama Mahasiswa 2 : ");
	scanf("%s", mahasiswa2);
	
	printf("Nilai Mahasiswa 2 : ");
	scanf("%d", &nilai2);
	
	printf("\n");
	
	printf("Nama Mahasiswa 3 : ");
	scanf("%s", mahasiswa3);
	
	printf("Nilai Mahasiswa 3 : ");
	scanf("%d", &nilai3);
	
	printf("\n");
	
	int totalNilai = nilai1 + nilai2 + nilai3;
	
	printf("Nama Mahasiswa 1 : %s \n", mahasiswa1);
	printf("Nilai Mahasiswa 1 : %i \n", nilai1);
	printf("\n");
	printf("Nama Mahasiswa 2 : %s \n", mahasiswa2);
	printf("Nilai Mahasiswa 2 : %i \n", nilai2);
	printf("\n");
	printf("Nama Mahasiswa 3 : %s \n", mahasiswa3);
	printf("Nilai Mahasiswa 3 : %i \n", nilai3);
	printf("\n");
	printf("Total Nilai : %i \n", totalNilai);
}
