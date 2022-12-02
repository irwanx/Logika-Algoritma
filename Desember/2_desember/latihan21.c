#include<stdio.h>
int main(){
	int a;
	printf("Masukkan jumlah unit terjual:\t");
	scanf("%d", &a);
	if(a>2){
		printf("Unit yang terjual %d bonusnya 2 juta", a);
	} else if(a == 2){
		printf("Unit yang terjual %d bonusnya 1 juta", a);
	} else {
		printf("Unit yang terjual %d bonusnya 0", a);
	}
	return 0;
}
