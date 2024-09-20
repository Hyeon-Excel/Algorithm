#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int A, B;

	scanf("%d %d", &A, &B);
	printf("%.9f", (double)A / B);
}