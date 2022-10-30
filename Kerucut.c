#include<stdio.h>

void main() {
	float phi = 3.14;
	int r;
	int tinggi;
	
	printf("Masukkan nilai jari jari : ");
	scanf("%d", &r);
	
	printf("Masukkan tinggi : ");
	scanf("%d", &tinggi);
	
	//process
	float volumeKerucut = (phi * ( r * r ) * tinggi)/3;
	
	printf("\nVolume Kerucut adalah %f ", volumeKerucut);
}
