/*  Nama File     : tetris1.c
    Deskripsi     : Membuat Susunan Karakter "*"
    Pembuat       : Muhammad Abdul Aziz - 24060121140150
    Tgl Pembuatan : Selasa 29/03/2022 09:30 WIB
*/

#include <stdio.h>

int main()
{
    //kamus
    int N;
    int i;
    int j;



    /* Algoritma */
    system("color A");
    printf("Masukkan Nilai N: ");
    scanf("%d", &N);

    if (N > 0){
        for(i = N; i >= 1; i--){
            for(j = 1; j <= i; j++){
                printf("* ");
            }
            printf("\n");
        }
    }
    else{
        printf("Masukkan Bilangan Integer N Harus Lebih Besar Dari 0");
    }

    return 0;
}


