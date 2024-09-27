#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int N, M;

	scanf("%d %d", &N, &M);
	int* arr = (int*)malloc(sizeof(int) * N);

	for (int i = 0; i < N; i++) {
		arr[i] = i + 1;
	}

	int x, y;
	for (int i = 0; i < M; i++) {
		scanf("%d %d", &x, &y);

		int temp = arr[x - 1];
		arr[x - 1] = arr[y - 1];
		arr[y - 1] = temp;
	}

	for (int i = 0; i < N; i++) {
		printf("%d ", arr[i]);
	}

	free(arr);
	return 0;
}