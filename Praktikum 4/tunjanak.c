/* Nama File     : tunjanak
   Deskripsi     : menghitung besarnya tunjangan anak yang diberikan, dan kemudian menampilkan besarnya tunjangan anak tersebut
   Pembuat       : 24060121140150-Muhammad Abdul Aziz
   Tgl Pembuatan : sabtu, 19 maret 2022
*/

# include<stdio.h>

int main(){

    //kamus
    int a,g,hasil;
    //algoritma
    printf("program menghitung tunjangan anak yang diterima\n");
    printf("masukan jumlah anak = ");
    scanf("%d", &a);
    printf("masukan besarnya gaji pokok = ");
    scanf("%d", &g);

    if (a>=0 && a<3){
        hasil = a*(0.1 * g);
        printf("maka tunjangan anak yang diperoleh %d",hasil);
    }
    else if (a>=3) {
        hasil = 3 * (0.1 * g);
        printf("maka tunjangan anak yang diperoleh %d",hasil);
    }
    else{  //(a<0)
        printf("masukan tunjangan salah!!");
    }
        return 0;
}

