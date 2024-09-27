#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int N, M, i, j;

	scanf("%d %d", &N, &M);
	int* arr = (int*)malloc(sizeof(int) * N);

	for (int x = 0; x < N; x++) {
		arr[x] = x + 1;
	}

	for (int x = 0; x < M; x++) {
		scanf("%d %d", &i, &j);
		int start = i - 1;
		int end = j - 1;

		while (end > start) {
			int temp = arr[start];
			arr[start] = arr[end];
			arr[end] = temp;
			start++;
			end--;
		}
	}
	
	for (int x = 0; x < N; x++) {
		printf("%d ", arr[x]);
	}

	free(arr);
	return 0;
}