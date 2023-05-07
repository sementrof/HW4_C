#include <stdio.h>

int main() {
    int num, sum=0, count=0;
    float middle;

     while (1) {
        scanf("%d", &num);
        if (num == 0) {
            break;
        }
        sum += num;
        count++;
    }

    if (count > 0) {
        middle = sum / count;
        printf("%.2f\n", middle);
    }
    return 0;
}
