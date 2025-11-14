#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int beda = abs(a - b);
    int a_awal = a, b_awal = b;
    
    while (a != b_awal || a_awal != b){
        printf("%d %d - ", a, b); 
        if(a_awal < b_awal){   
            a += 1;
            b -= 1;
        } else {
            a -= 1;
            b += 1;
        } 
    }
    printf("%d %d", a, b);
    return 0;
}