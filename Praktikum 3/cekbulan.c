//Nama File 	: cekbulan.c
//Deskripsi 	: menampilkan nama-nama bulan yang dimasukkan
//Pembuat   	: [Muhammad Abdul Aziz - 24060121140150]
//Tgl Pembuatan	: [rabu, 09 03 2022 21:10 WIB

#include <stdio.h>

int main(){
    //kamus
    int b;

    //algoritma
    printf("masukkan nomor hari: ");
    scanf("%d", &b);

    switch (b){
    case 1 :
        printf("Januari");
        break;
    case 2 :
        printf("Februari");
        break;
    case 3 :
        printf("Maret");
        break;
    case 4 :
        printf("April");
        break;
    case 5 :
        printf("Mei");
        break;
    case 6 :
        printf("Juni");
        break;
    case 7 :
        printf("Juli");
        break;
    case 8 :
        printf("Agustus");
        break;
    case 9 :
        printf("September");
        break;
    case 10 :
        printf("Oktober");
        break;
    case 11 :
        printf("November");
        break;
    case 12 :
        printf("Desember");
        break;
    default :
        printf("Masukan Nomor Bulan Tidak Tepat");
    }
    return 0;
}
