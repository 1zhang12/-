#include <stdio.h>

int gcd(int c, int x) {
    int r;
    while (x != 0) {
        r = c % x;
        c = x;
        x = r;
    }
    return c;
}

int main() {
    int num;
    printf("请输入一个数：");
    scanf_s("%d", &num);
    int result = gcd(num, 0);
    printf("最大公因数为：%d\n", result);
    return 0;
}