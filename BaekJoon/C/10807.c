#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int N;

	scanf("%d", &N);

	int* arr = (int *)malloc(sizeof(int) * N + 1);

	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}

	int V, count = 0;
	scanf("%d", &V);

	for (int i = 0; i < N; i++) {
		if (V == arr[i]) count++;
	}

	printf("%d", count);

	free(arr);
	return 0;
}