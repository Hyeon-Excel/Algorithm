#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x, y;
	int a, b, c;

	scanf("%d", &x);
	scanf("%d", &y);

	c = y % 10;
	b = (y % 100 - c) / 10;
	a = y / 100;

	printf("%d\n", x * c);
	printf("%d\n", x * b);
	printf("%d\n", x * a);
	printf("%d\n", x * y);
}