#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int A, B, size = 0;

	while (1) {
		scanf("%d %d", &A, &B);
		if (A == 0 && B == 0) {
			break;
		}
		printf("%d\n", A + B);
	}
}