#include<stdio.h>
int main()
{
	int jumdet, jam, menit, detik, sisa;
	printf("Masukkan jumlah detik= ");scanf("%d", &jumdet);
	jam=jumdet/3600;
	sisa=jumdet-(jam*3600);
	menit=sisa/60;
	detik=sisa-(menit*60);
	printf("jam=%d", jam);
	printf("menit=%d", menit);
	printf("detik=%d", detik);
	return(0);
}
