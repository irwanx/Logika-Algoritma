#include <stdio.h>

int main() {
    printf("## Program Bahasa C Menghitung Gaji Seorang Karyawan ##");
    printf("\n========================================================\n");
    // deklarasi pakai integer
    int gaji_direktur, gaji_wakil, gaji_sekretaris, gaji_bagian_keuangan, gaji_kepala_bagian, gaji_staff, uang_makan, uang_transport, potongan;
    int jarak_direktur, jarak_wakil, jarak_sekretaris, jarak_bagian_keuangan, jarak_kepala_bagian, jarak_staff;
    int total_gaji_direktur, total_gaji_wakil, total_gaji_sekretaris, total_gaji_bagian_keuangan, total_gaji_kepala_bagian, total_gaji_staff, total_gaji_seluruh_karyawan;
    // process input gaji - transport
    printf("Masukkan Jumlah Gaji Direktur = ");scanf("%d", & gaji_direktur);
    printf("Masukkan Jumlah Gaji Wakil = ");scanf("%d", & gaji_wakil);
    printf("Masukkan Jumlah Gaji Sekretaris = ");scanf("%d", & gaji_sekretaris);
    printf("Masukkan Jumlah Gaji Bagian Keuangan = ");scanf("%d", & gaji_bagian_keuangan);
    printf("Masukkan Jumlah Gaji Kepala Bagian = ");scanf("%d", & gaji_kepala_bagian);
    printf("Masukkan Jumlah Gaji Staff = ");scanf("%d", & gaji_staff);
    printf("Masukkan Jumlah Uang Makan= ");scanf("%d", & uang_makan);
    printf("Masukkan Jumlah Potongan Gaji = ");scanf("%d", & potongan);
    printf("Masukkan Jumlah Uang Transport = ");scanf("%d", & uang_transport);
    // process input jarak
    printf("Jarak Rumah Direktur Ke Perusahaan = ");scanf("%d", & jarak_direktur);
    printf("Jarak Rumah Wakil Ke Perusahaan = ");scanf("%d", & jarak_wakil);
    printf("Jarak Rumah Sekretaris Ke Perusahaan = ");scanf("%d", & jarak_sekretaris);
    printf("Jarak Rumah Bagian Keuangan Ke Perusahaan = ");scanf("%d", & jarak_bagian_keuangan);
    printf("Jarak Rumah Kepala Bagian Ke Perusahaan = ");scanf("%d", & jarak_kepala_bagian);
    printf("Jarak Rumah Staff Ke Perusahaan = ");scanf("%d", & jarak_staff);
    if (jarak_direktur < 11) {
        total_gaji_direktur = (uang_makan + gaji_direktur - potongan) + uang_transport / 3;
    } else if (jarak_direktur < 21) {
        total_gaji_direktur = (uang_makan + gaji_direktur - potongan) + uang_transport / 3 * 2;
    } else if (jarak_direktur < 31) {
        total_gaji_direktur = (uang_makan + gaji_direktur - potongan) + uang_transport;
    }
    if (jarak_wakil < 11) {
        total_gaji_wakil = (uang_makan + gaji_wakil - potongan) + uang_transport / 3;
    } else if (jarak_wakil < 21) {
        total_gaji_wakil = (uang_makan + gaji_wakil - potongan) + uang_transport / 3 * 2;
    } else {
        total_gaji_wakil = (gaji_wakil + gaji_wakil - potongan) + uang_transport;
    }
    if (jarak_sekretaris < 11) {
        total_gaji_sekretaris = (uang_makan + gaji_sekretaris - potongan) + uang_transport / 3;
    } else if (jarak_sekretaris < 21) {
        total_gaji_sekretaris = (uang_makan + gaji_sekretaris - potongan) + uang_transport / 3 * 2;
    } else {
        total_gaji_sekretaris = (uang_makan + gaji_sekretaris - potongan) + uang_transport;
    }
    if (jarak_bagian_keuangan < 11) {
        total_gaji_bagian_keuangan = (uang_makan + gaji_bagian_keuangan - potongan) + uang_transport / 3;
    } else if (jarak_bagian_keuangan < 21) {
        total_gaji_bagian_keuangan = (uang_makan + gaji_bagian_keuangan - potongan) + uang_transport / 3 * 2;
    } else {
        total_gaji_bagian_keuangan = (uang_makan + gaji_bagian_keuangan - potongan) + uang_transport;
    }
    if (jarak_kepala_bagian < 11) {
        total_gaji_kepala_bagian = (uang_makan + gaji_kepala_bagian - potongan) + uang_transport / 3;
    } else if (jarak_kepala_bagian < 21) {
        total_gaji_kepala_bagian = (uang_makan + gaji_kepala_bagian - potongan) + uang_transport / 3 * 2;
    } else {
        total_gaji_kepala_bagian = (uang_makan + gaji_kepala_bagian - potongan) + uang_transport;
    }
    if (jarak_staff < 11) {
        total_gaji_staff = (uang_makan + gaji_staff - potongan) + uang_transport / 3;
    } else if (jarak_staff < 21) {
        total_gaji_staff = (uang_makan + gaji_staff - potongan) + uang_transport / 3 * 2;
    } else {
        total_gaji_staff = (uang_makan + gaji_staff - potongan) + uang_transport;
    }
    // total seluruh gaji karyawan
    total_gaji_seluruh_karyawan = total_gaji_direktur + total_gaji_wakil + total_gaji_sekretaris + total_gaji_bagian_keuangan + total_gaji_kepala_bagian + total_gaji_staff;
    // output
    printf("\n====================================\n");
    printf("Total Gaji Direktur = %d", total_gaji_direktur);
    printf("\n====================================\n");
    printf("Total Gaji Wakil = %d", total_gaji_wakil);
    printf("\n====================================\n");
    printf("Total Gaji Sekretaris = %d", total_gaji_sekretaris);
    printf("\n====================================\n");
    printf("Total Gaji Bagian Keuangan= %d", total_gaji_bagian_keuangan);
    printf("\n====================================\n");
    printf("Total Gaji Kepala Bagian= %d", total_gaji_kepala_bagian);
    printf("\n====================================\n");
    printf("Total Gaji Staff = %d", total_gaji_staff);
    printf("\n====================================\n");
    printf("Total Gaji Seluruh Karyawan = %d", total_gaji_seluruh_karyawan);
    printf("\n====================================\n");
    return (0);
}