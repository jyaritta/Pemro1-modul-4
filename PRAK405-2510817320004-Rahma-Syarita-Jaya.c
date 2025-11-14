#include <stdio.h>

int main(){
    int maks, angka, hasil_akhir = 0;
    scanf("%d %d", &maks, &angka);
    
    for(int i = 1; i <= maks; i++){
        int hasil = 0;
        for (int j = i; j >= 1; j--){
            hasil += j * angka;
            printf("(%d * %d)", j, angka);
                if(j - 1 != 0){
                    printf(" + ");
                } else{
                    printf(" = %d\n", hasil); 
                }
        } 
        hasil_akhir += hasil;
    }
    printf("%d", hasil_akhir);  
    return 0;
}