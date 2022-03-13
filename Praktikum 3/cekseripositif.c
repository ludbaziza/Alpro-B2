//Nama File 	: cekseripositif.c
//Deskripsi 	: menampilkan nilai kebenaran dari total masukkan
//Pembuat   	: [Muhammad Abdul Aziz - 24060121140150]
//Tgl Pembuatan	: [rabu, 09 03 2022 22:30 WIB

#include <stdio.h>

int main(){
    //Kamus
    float a, b, c, x;

    //Algoritma
    printf("Masukkan Nilai a: ");
    scanf("%f", &a);
    printf("Masukkan Nilai b: ");
    scanf("%f", &b);
    printf("Masukkan Nilai c: ");
    scanf("%f", &c);

    if (a >= 0 && b >= 0 && c >= 0){
        x = a + b + c;
    printf("%f", x);
    }else{
    printf("masukan tahanan tidak boleh negatif");
    }
    return 0;

}
