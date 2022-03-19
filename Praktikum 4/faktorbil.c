/* Nama File     : faktorbil
   Deskripsi     :  menghitung besarnya tunjangan anak yang diberikan, dan kemudian menampilkan besarnya tunjangan anak tersebut
   Pembuat       : 24060121140150-Muhammad Abdul Aziz
   Tgl Pembuatan : sabtu, 19 maret 2022
*/
# include<stdio.h>

int main(){

    // kamus
    int N;
    int i;
    // algoritma
    printf("program mencari faktor dari suatu bilangan\n");
    printf("masukan angka yang ingin di cek faktornya = ");
    scanf("%d",&N);
    if(N<0){
        printf("masukan harus positif!!");
    }
    else if(N>0){
    i = 1;
    for(i = 1; i<=N;i++){
        if (N % i ==0){
         printf(" | %d",i);
        }
        }
    }
    else{ //{N=0}
        printf("faktor 0 ");
    }


    return 0;

}
