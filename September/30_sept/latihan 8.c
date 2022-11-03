#include<stdio.h>
int main()
{
	int totgaji, gapok, untu, umak, ut, p;
	printf("Gaji Pokok= ");scanf("%d", &gapok);
	printf("Uang Tunjangan= ");scanf("%d", &untu);
	printf("Uang Makan= ");scanf("%d", &umak);
	printf("Uang Transportasi= ");scanf("%d", &ut);
	printf("Potongan= ");scanf("%d", &p);
	totgaji=(gapok+untu+umak+ut)-p;
	printf("Total Gaji=%d", totgaji);
	return(0);
}
