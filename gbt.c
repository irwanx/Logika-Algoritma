#include <stdio.h>
#include <time.h>

int main() {
    struct tm * Sys_T;
    time_t Tval;
    Tval = time(NULL);
    Sys_T = localtime( & Tval);
    char judul_lagu[11][100] = { "O", "KARINA - NGATMOMBILUNG", "MENEPI - THE RAIN", "BILA HATIMU -THE RAIN", "KITA DAN KETIDAKMUNGKINAN - THE RAIN", "MENDENGAR KABAR - THE RAIN", "PISAH - GUYON WATON", "BERMAIN DENGAN HATIKU - THE RAIN", "KITA DAN KETIDAKMUNGKINAN - THE RAIN", "BEFORE YOU GO - LEWIS CAPALDI", "MEMILIH DIRINYA - NGATMOMBILUNG" };
    int i, /*length,*/ plus = 0, durasi_detik_lagu[11] = { 0, 315, 267, 230, 207, 207, 280, 251, 207,215, 295 }, jam, menit, detik, sisa, jj, mm, dd, ss;
    printf("\t\t\t\t\t  RECEIPTIFY\n"
        "\t\t\t\t\tLAST MONTH\n\n"
        "ORDER #0001 FOR IRWANX\n"
        "%s\n"
        "____________________________________________________________\n"
        "QTY  AMT\tITEM\n"
        "____________________________________________________________\n", asctime(Sys_T));
    //length = sizeof(durasi_detik_lagu)/sizeof(*durasi_detik_lagu);
    for (i = 1; i <= 10; i++) {
        jam = durasi_detik_lagu[i] / 3600;
        sisa = durasi_detik_lagu[i] - (jam * 3600);
        menit = sisa / 60;
        detik = sisa - (menit * 60);
        plus += durasi_detik_lagu[i];
        jj = plus / 3600;
        ss = plus - (jj * 3600);
        mm = ss / 60;
        dd = ss - (mm * 60);
        printf(" %i.  \t%i:%i\t     %s\n", i, menit, detik, judul_lagu[i]);
    }
    printf("____________________________________________________________\n"
        "ITEM COUNT\t\t     : 10\n"
        "TOTAL\t\t\t\t   : %i:%i\n"
        "____________________________________________________________\n"
        "CARD\t\t\t\t# : **** **** **** 2023\n"
        "AUTH CODE\t\t     : %i\n"
        "CARDHOLDER\t\t   :  IRWANX\n\n"
        "\t\t\t\tTHANK YOU FOR VISITING :*\n\n"
        "\t\t\t\t\tGITHUB : IRWANX", mm, dd, plus);
}
