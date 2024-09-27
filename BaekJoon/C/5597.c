#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main() {
	int totalNum[30];
	for (int i = 0; i < 30; i++) {
		totalNum[i] = i + 1;
	}

	int currentNum[28];
	for (int i = 0; i < 28; i++) {
		scanf("%d", &currentNum[i]);
	}

	int arr[2];
	int index = -1;
	for (int i = 0; i < 30; i++) {
		bool isHere = false;
		for (int j = 0; j < 28; j++) {
			if (totalNum[i] == currentNum[j]) {
				isHere = true;
			}
		}
		if (!isHere) {
			index++;
			arr[index] = totalNum[i];
		}
	}

	printf("%d\n", arr[0]);
	printf("%d\n", arr[1]);
}