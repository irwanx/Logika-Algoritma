#include<stdio.h>
int main() {
	int b;
	printf("=========================\n");
	printf("Masukkan Angka= ");
	printf("=========================\n");
	scanf("%d", &b);
	if(b%6 == 0){
		printf("Kelipatan 2 Atau 3");
	} else {
		printf("Bukan Kelipatan 2 Atau 3");
	}
	return(0);
}
