#include<stdio.h>

int main() {
	int maxNumber, counter;
	int result[100];
	
	printf("Masukkan Angka Maksimal : ");
	scanf("%d", &maxNumber);
	
	printf("\n");
	
	for(counter = 0; counter < maxNumber; counter++) {
		if(counter % 2 != 0) {
			scanf("%d", &result[counter]);
			printf("%i ", counter);
		}
	}
	
	return 0;
}
