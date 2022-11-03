#include<stdio.h> 
int main() // fungsi utama
{
	int bil1, bil2, bil3, jumlah; // deklarasi
	printf( "Masukkan bilangan 1= ");scanf("%d", &bil1); // print = menampilkan, scan = perintah input 
	printf("Masukkan bilangan 2= ");scanf("%d", &bil2); // "%d" = untuk tipe bilangan bulat (+ -) 3 tipe= short, integer, long
	printf("Masukkan bilangan 3= ");scanf("%d", &bil3);
	jumlah=bil1+bil2+bil3;
	printf("Jumlah 3 bilangan=%d", jumlah);
	return(0); //menghapus semua yg sudah tampil/terproses
}
