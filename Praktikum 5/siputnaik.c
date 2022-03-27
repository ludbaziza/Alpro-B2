/*  Nama File     : cekprima.c
    Deskripsi     : memasukkan sebuah inputan bilangan integer untuk menentukan apakah bilangan tersebut prima atau bukan
    Pembuat       : Muhammad Abdul Aziz - 24060121140150
    Tgl Pembuatan : Minggu 27/03/2022 14:30 WIB
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    // Kamus
    int i = 1;
    double h = 0.00, N;

    // Algoritma
    printf("Ketinggian lubang: ");
    scanf("%lf",&N);

    do {
        if (i % 2 != 0){
            h = h + 0.3;
        }
        else{
            h = h - 0.1;
        }
        i++;
    } while (h < N);
    printf("Dibutuhkan %d hari, siput akan mencapai ketinggian %.2f meter\n",i/2,N);

    return 0;
}
