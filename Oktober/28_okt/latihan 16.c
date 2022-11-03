#include<stdio.h>
int main() {
	int b;
	printf("=========================\n");
	printf("Masukkan Angka= ");
	printf("=========================\n");
	scanf("%d", &b);
	if(b == 1){
		printf("Warna Merah");
	} else {
		printf("Warna Putih");
	}
	return(0);
}
