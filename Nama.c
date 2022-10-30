#include<stdio.h>

void main() {
	char nama[50];
	char nim[20];
	char alamat[100];
	
	int tanggalLahir = 16;
	char noHp[20] = "6281357198115";
 
 	printf("Biodata Mahasiswa \n");
 	
 	printf("Nama mu siapa ? ");
 	scanf("%s", nama);
 	
 	printf("NIM kamu berapa ?");
 	scanf("%s", nim);
 	
 	printf("Nama Lengkap : %s \n", nama);
 	printf("NIM : %s \n", nim);
 	printf("Tanggal Lahir : %i \n", tanggalLahir);
 	printf("No HP : %s \n", noHp);
}
