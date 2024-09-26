#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int N, X, index = 0;

	scanf("%d %d", &N, &X);
	int* A = (int*)malloc(sizeof(int) * N);
	int* aArr= (int*)malloc(sizeof(int) * N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &A[i]);
		if (A[i] < X) {
			aArr[index] = A[i];
			index++;
		}
	}

	for (int i = 0; i < index; i++) {
		printf("%d ", aArr[i]);
	}

	free(A);
	free(aArr);
	return 0;
}