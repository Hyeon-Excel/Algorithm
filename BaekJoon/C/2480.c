#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b, c, prize;

    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c) {
        prize = 10000 + a * 1000;
    }
    else if (a == b || b == c || a == c) {
        if (a == b || a == c) {
            prize = 1000 + a * 100;
        }
        else {
            prize = 1000 + b * 100;
        }
    }
    else {
        int max = a;
        if (b > max) max = b;
        if (c > max) max = c;
        prize = max * 100;
    }

    printf("%d", prize);
    return 0;
}
