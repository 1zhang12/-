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
    printf("������һ������");
    scanf_s("%d", &num);
    int result = gcd(num, 0);
    printf("�������Ϊ��%d\n", result);
    return 0;
}