#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int A = 0, B = 0, T = 0;

	scanf("%d", &T);

	int* aArr = (int*)malloc(sizeof(int) * T);
	int* bArr = (int*)malloc(sizeof(int) * T);

	for (int i = 0; i < T; i++) {
		scanf("%d %d", &A, &B);
		aArr[i] = A;
		bArr[i] = B;
	}
	for (int i = 1; i <= T; i++) {
		int sum = aArr[i - 1] + bArr[i - 1];
		printf("Case #%d: %d + %d = %d\n", i, aArr[i - 1], bArr[i - 1], sum);
	}
	free(aArr);
	free(bArr);
	return 0;
}