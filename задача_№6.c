#include <stdio.h>

int main() {
    int s, i, count=0;
    scanf("%d", &s);
    // циклам for вписываем числа и проверяем на их положительность
    for(i = 0; i < s; i++) {
        int num;
        scanf("%d", &num);
        if(num > 0) {
            count++;
        }
    }
    // выводим количество положительных чисел
    printf("%d\n", count);
    return 0;
}
