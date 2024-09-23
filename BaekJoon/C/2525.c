#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int H, M, costTime;

	scanf("%d %d", &H, &M);
	scanf("%d", &costTime);

	int gap = M + costTime;
	int addHour = gap / 60;
	int addMin = gap % 60;

	if (addHour == 0) {
		M = gap;
	}
	else if (addHour != 0) {
		H += addHour;
		M = addMin;
		if (H / 24 >= 1) {
			H %= 24;
		}
	}
	printf("%d %d\n", H, M);
}