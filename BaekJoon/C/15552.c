#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int T;
	scanf("%d", &T);

	int* arr = (int*)malloc(sizeof(int) * T);

	for (int i = 0; i < T; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		arr[i] = a + b;
	}
	for (int i = 0; i < T; i++) {
		printf("%d\n", arr[i]);
	}
	free(arr);
	return 0;
}