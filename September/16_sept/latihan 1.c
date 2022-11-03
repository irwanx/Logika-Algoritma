#include<stdio.h>
int main()
{
	float luas, alas, tinggi; 
	printf( "Alas= ");scanf("%f", &alas);
	printf( "Tinggi= ");scanf("%f", &tinggi);
	luas=(alas*tinggi)/2;
	printf("Luas Segitiga=%f", luas);
	return(0);
}
