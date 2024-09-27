#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int N, M;

	scanf("%d %d", &N, &M);

	int* arr = (int*)malloc(sizeof(int) * N);
	for (int i = 0; i < N; i++)
		arr[i] = 0;

	int x, y, num;
	for (int i = 0; i < M; i++) {
		scanf("%d %d %d", &x, &y, &num);
		for (int j = x - 1; j < y; j++) {
			arr[j] = num;
		}
	}

	for (int i = 0; i < N; i++)
		printf("%d ", arr[i]);

	free(arr);
	return 0;
}