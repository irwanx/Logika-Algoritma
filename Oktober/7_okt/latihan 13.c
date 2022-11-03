#include<stdio.h>
int main(){
	int bil;
	printf("Masukkan Angka= ");
	scanf("%d", &bil);
	if(bil % 2 == 1){
		printf("Bilangan ganjil");
	}
	return(0);
}
