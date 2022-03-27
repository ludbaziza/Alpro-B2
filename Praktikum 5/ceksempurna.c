/*  Nama File     : cekprima.c
    Deskripsi     : memasukkan sebuah inputan bilangan integer untuk menentukan apakah bilangan tersebut prima atau bukan
    Pembuat       : Muhammad Abdul Aziz - 24060121140150
    Tgl Pembuatan : Minggu 27/03/2022 13:00 WIB
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    // Kamus
    int N,i,sempurna;

    sempurna = 0;
    printf("Masukkan bilangan yang menurutmu Sempurna: ");
    scanf("%d",&N);

    for(i=1; i<N ;i++){
        if (N % i == 0){
            sempurna = sempurna + i;
        }
    }
    if (N == sempurna){
        printf("Bilangan Sempurna");
    }
    else{
        printf("Bukan bilangan Sempurna");
    }
    return 0;
}
