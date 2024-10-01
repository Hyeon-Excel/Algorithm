#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int matrix[9][9];

	int max = 0;
	int x, y;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			int num;
			scanf("%d", &num);

			matrix[i][j] = num;
			if (max <= num) {
				max = num;
				x = i + 1;
				y = j + 1;
			}
		}
	}
	printf("%d\n", max);
	printf("%d %d\n", x, y);
}