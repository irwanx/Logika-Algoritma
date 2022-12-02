#include <stdio.h>
int main(){
	int a;
	printf("Masukkan Nilai:\t");
	scanf("%d", &a);
	if(a>=90){
		printf("Nilai %d Adalah A", a);
	} else if(a<=89 && a>=80){
		printf("Nilai %d Adalah B", a);
	} else if(a<=79 && a>=70){
		printf("Nilai %d Adalah C", a);
	} else {
		printf("Nilai %d Adalah D", a);
	}
	return 0;
}
