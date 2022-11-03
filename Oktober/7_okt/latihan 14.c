#include<stdio.h>
int main(){
	int bil;
	printf("Masukkan Angka= ");
	scanf("%d", &bil);
	if(bil % 5 == 0){
		printf("Merupakan bilangan kelipatan 5");
	}
	return(0);
}
