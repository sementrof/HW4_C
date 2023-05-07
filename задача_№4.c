#include <stdio.h>

int main() {
    int Num, binNum, x = 1;
    scanf("%d", &Num);
    // изменим на положительное число 
    if(Num < 0){
        Num = -Num;  
    }
    // переведм число в двоичную систему, используя деление с остатком
    while(Num > 0){
        binNum += (Num % 2) * x;
        Num /= 2;
        x *= 10;
    }

    printf("%d\n", binNum);
    return 0;
}