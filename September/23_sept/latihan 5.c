#include<stdio.h> 
int main()
{
	int a, b, c, d;
	printf("Masukkan angka a= ");scanf("%d", &a);
	printf("Masukkan angka b= ");scanf("%d", &b);
	printf("Masukkan angka c= ");scanf("%d", &c);
	d=(a+b)*(b+c);
	printf("Hasilnya=%d", d);
	return(0);
}
