#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int A = 0, B = 0, T = 0;

	scanf("%d", &T);

	int* arr = (int*)malloc(sizeof(int) * T);

	for (int i = 0; i < T; i++) {
		scanf("%d %d", &A, &B);
		arr[i] = A + B;
	}
	for (int i = 1; i <= T; i++) {
		printf("Case #%d: %d\n", i, arr[i - 1]);
	}
	free(arr);
	return 0;
}