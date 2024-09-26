#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int max;
	int arr[10];

	for (int i = 0; i < 9; i++) {
		scanf("%d", &arr[i]);
	}

	int index = 0;
	max = arr[index];
	for (int i = 0; i < 9; i++) {
		if (max < arr[i]) {
			max = arr[i];
			index = i;
		}
	}

	index++;
	printf("%d\n", max);
	printf("%d\n", index);
}