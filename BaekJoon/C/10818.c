#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int N, max, min;

	scanf("%d", &N);

	int* arr = (int*)malloc(sizeof(int) * N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}

	max = arr[0];
	min = arr[0];
	
	for (int i = 0; i < N; i++) {
		if (max < arr[i]) max = arr[i];
		if (min > arr[i]) min = arr[i];
	}

	printf("%d %d", min, max);
}