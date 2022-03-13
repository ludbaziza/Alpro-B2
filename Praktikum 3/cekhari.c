//Nama File 	: cekhari.c
//Deskripsi 	: menampilkan nama-nama hari yang dimasukkan
//Pembuat   	: [Muhammad Abdul Aziz - 24060121140150]
//Tgl Pembuatan	: [rabu, 09 03 2022 21:10 WIB

#include <stdio.h>

int main(){
    //kamus
    int h;

    //algoritma
    printf("masukkan nomor hari: ");
    scanf("%d", &h);

    switch (h){
    case 1 :
        printf("Senin");
        break;
    case 2 :
        printf("Selasa");
        break;
    case 3 :
        printf("Rabu");
        break;
    case 4 :
        printf("Kamis");
        break;
    case 5 :
        printf("Jum'at");
        break;
    case 6 :
        printf("Sabtu");
        break;
    case 7 :
        printf("Minggu");
        break;
    default :
        printf("Masukan Nomor Hari Tidak Tepat");
    }
    return 0;
}


