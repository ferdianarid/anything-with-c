#include<stdio.h>

int main() {
	int detik1, detik2, detik3, total;
	int hours1, minutes1, second1;
	int hours2, minutes2, second2;
	int hours3, minutes3, second3;
	float rataRata;
	char namapemain1[40];
	char namapemain2[40];
	char namapemain3[40];
	
	printf("Masukkan Pemain 1 : ");
	scanf("%s", &namapemain1);
	
	printf("Masukkan detik permainan anda : ");
	scanf("%d", &detik1);
	
	printf("Masukkan Pemain 2 : ");
	scanf("%s", &namapemain2);
	
	printf("Masukkan detik permainan anda : ");
	scanf("%d", &detik2);
	
	printf("Masukkan Pemain 3 : ");
	scanf("%s", &namapemain3);
	
	printf("Masukkan detik permainan anda : ");
	scanf("%d", &detik3);
	
	hours1 = detik1 / 3600;
	minutes1 = (detik1 - hours1*3600) / 60;
	second1 = detik1 - hours1*3600 - minutes1*60;
	
	hours2 = detik2 / 3600;
	minutes2 = (detik2 - hours2*3600) / 60;
	second2 = detik2 - hours2*3600 - minutes2*60;
	
	hours3 = detik3 / 3600;
	minutes3 = (detik3 - hours3*3600) / 60;
	second3 = detik3 - hours3*3600 - minutes3*60;
	
	total = detik1 + detik2 + detik3;
	rataRata = total / 3;
	
	printf("\n");
	
	printf("%s : %i hours : %i minutes : %i second \n", namapemain1, hours1, minutes1, second1);
	printf("%s : %i hours : %i minutes : %i second \n", namapemain2, hours2, minutes2, second2);
	printf("%s : %i hours : %i minutes : %i second \n", namapemain3, hours3, minutes3, second3);
	
	printf("\n");
	
	if(detik1 >= 0 && detik1 <= 3600) {
		printf("%s : BERHASIL \n", namapemain1);
	} else if(detik1 > 3600) {
		printf("%s : GAGAL \n", namapemain1);
	} else {
		printf("Inputan Salah");
	}
	
	if(detik2 >= 0 && detik2 <= 3600) {
		printf("%s : BERHASIL \n", namapemain2);
	} else if(detik2 > 3600) {
		printf("%s : GAGAL \n", namapemain2);
	} else {
		printf("Inputan Salah");
	}
	
	if(detik3 >= 0 && detik3 <= 3600) {
		printf("%s : BERHASIL \n", namapemain3);
	} else if(detik3 > 3600) {
		printf("%s : GAGAL \n", namapemain3);
	} else {
		printf("Inputan Salah");
	}
	
	printf("\n");
	
	printf("Total detik permainan : %d \n", total);
	printf("Rata-rata detik permainan : %f \n", rataRata);
	
	printf("\n");
}
