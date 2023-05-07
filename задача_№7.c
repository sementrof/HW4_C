#include <stdio.h>
int main() {
    int j, num, zero = 0, posit = 0, negativ = 0;
    scanf("%d", &j);
    // циклам for введем числа и if узнаем какое число, а также при совпадении прибаляем 1 к переменной
    for (int i = 0; i < j; i++) {
        scanf("%d", &num);
        if (num == 0) {
            zero++;
        } 
        else if (num > 0) {
            posit++;
        } 
        else {
            negativ++;
        }
    }
    printf("%d\n", zero);
    printf("%d\n", posit);
    printf("%d\n", negativ);
    return 0;
}
