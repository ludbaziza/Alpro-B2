/*  Nama File     : cekprima.c
    Deskripsi     : memasukkan sebuah inputan bilangan integer untuk menentukan apakah bilangan tersebut prima atau bukan
    Pembuat       : Muhammad Abdul Aziz - 24060121140150
    Tgl Pembuatan : Jum'at 25/03/2022 20:00 WIB
*/

#include <stdio.h>

int main(){
    int N ;
    int i ;
    int p ;

    i = 0;
    printf("Masukkan Bilangan Integer: ");
    scanf("%d", &N);

    if (N < 0){
        printf("Masukkan Bilangan Integer Harus Positif !");
    }
    else{
        for (i=2;i<=(sqrt(N));i++){
            if (N % i == 0){
            p = 1;
            break;
        }
            }
        if (p == 1){
            printf("Bukan Merupakan Bilangan Prima");
        }
        else{
            printf("Termasuk Bilangan Prima");
        }


        }
    return 0;
}




