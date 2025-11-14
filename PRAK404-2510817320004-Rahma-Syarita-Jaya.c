#include <stdio.h>

void input(float *a, float *b){
    printf("Masukkan nilai pertama : ");
    scanf("%f", a);
    printf("Masukkan nilai kedua : ");
    scanf("%f", b);
}

int main(){
    int pilihan;
    float a, b;
    do{
        printf("Pilih program\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit\n");
        printf("Masukkan Pilihan : ");
        scanf("%d", &pilihan);

        switch (pilihan){
        case 1 | 2 | 3:
            input(&a, &b);
            if (pilihan == 1){
                printf("Penjumlahan antara %.2f dengan %0.2f adalah %.2f\n\n", a, b, a+b); 
            } else if (pilihan == 2){
               printf("Pengurangan antara %.2f dengan %.2f adalah %.2f\n\n", a, b, a-b); 
            } else {
                printf("Perkalian antara %.2f dengan %.2f adalah %.2f\n\n", a, b, a*b); 
            }
            break;
        case 4:
            input(&a, &b);
            while (b == 0)
            {
                printf("Bilangan %.2f tidak bisa dibagi 0.\nsilahkan coba input nilai kedua kembali: ", a);
                scanf("%f", &b);
            }
            printf("Pembagian antara %.2f dengan %.2f adalah %.2f\n\n", a, b, a/b); 
            break;
        case 5:
            printf("Terimakasih, telah menggunakan kalkulator RAHMA");
            break;
        default:
            printf("Input anda salah, silahkan coba lagi\n\n");
            break;
        }
    
    } while (pilihan !=5);

     return 0;
}