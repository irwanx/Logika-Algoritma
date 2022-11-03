#include<stdio.h>
int main() {
	int a, b;
	printf("=========================\n");
	printf("Masukkan Angka A= ");
	scanf("%d", &a);
	printf("Masukkan Angka B= ");
	scanf("%d", &b);
	printf("=========================\n");
	if( a > b ){
		printf("A lebih Besar Daripada B");
	} else {
		printf("B lebih Besar Daripada A");
	}
	return(0);
}
