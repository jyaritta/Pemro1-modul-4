#include <stdio.h>

int main(){
    int angka;
    char huruf;
    scanf("%d %c", &angka, &huruf);

    for(int a = 1; a <= 50; a++){
        if (a % angka == 0){
            printf("%c ", huruf);
            } else {
            printf("%d ", a);
        }
    }
    return 0;  
}