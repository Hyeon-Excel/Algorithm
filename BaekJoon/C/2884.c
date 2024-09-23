#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int H, M;

	scanf("%d %d", &H, &M);
	int gap = M - 45;
	if (gap >= 0) {
		M = gap;
		printf("%d %d\n", H, M);
	}
	else if (gap < 0) {
		H--;
		M = 60 + gap;
		if (H < 0)
			H = 23;
		printf("%d %d\n", H, M);
	}
}