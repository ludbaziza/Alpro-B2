/*  Nama File     : tetris2.c
    Deskripsi     : Membuat Susunan Karakter "*"
    Pembuat       : Muhammad Abdul Aziz - 24060121140150
    Tgl Pembuatan : Selasa 29/03/2022 09:40 WIB
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
        for(i=1;i<=N;i++){
            for(j = 1; j <= i; j++){
                printf("* ");
            }
            printf("\n");
        }
        for(i = N; i >= 1; i--){
            for(j = 2; j <= i; j++){
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



