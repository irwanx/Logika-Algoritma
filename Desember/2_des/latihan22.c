#include<stdio.h>
int main(){
	int a;
	printf("Masukkan Nilai:\t");
	scanf("%d", &a);
	if(a>100){
		printf("Hasilnya Adalah: %d", a/25);
	} else if(a>=50 && a<=99){
		printf("Hasilnya Adalah: %d", a/20);
	} else {
		printf("Hasilnya Adalah: %d", a*20);
	}
	return 0;
}
