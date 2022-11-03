#include<stdio.h>
int main()
{
	float L, K, J, P;
	P=3.14;
	printf("Jari-Jari= ");scanf("%f", &J);
	L=P*J*J;
	K=2*P*J;
	printf("Luas Lingkaran=%f", L);
	printf(" Keliling Lingkaran=%f", K);
	return(0);
}
