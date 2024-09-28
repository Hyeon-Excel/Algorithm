#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int N;

	scanf("%d", &N);
	float* arr = (float*)malloc(sizeof(float) * N);

	float max = 0;
	for (int i = 0; i < N; i++) {
		scanf("%f", &arr[i]);
		if (max < arr[i]) {
			max = arr[i];
		}
	}

	float total = 0;
	for (int i = 0; i < N; i++) {
		arr[i] = arr[i] / max * 100;
		total += arr[i];
	}

	printf("%f", total / N);
	free(arr);
	return 0;
}