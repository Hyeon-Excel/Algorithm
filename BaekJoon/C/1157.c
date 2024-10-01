#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
	char str[1000001];
	int alphaArr[26] = { 0 };

	scanf("%s", &str);

	int start = 0;
	int index = 0;
	int length = strlen(str);
	while (start < length) {
		if ((int)str[index] < 97) {
			str[index] += 32;
		}
		alphaArr[(int)str[index] - 97] += 1;
		start++;
		index++;
	}

	bool same = true;
	int benchmark = 0;
	for (int i = 0; i < 26; i++) {
		if (alphaArr[i] > benchmark) { benchmark = alphaArr[i]; same = true; }

		else if (alphaArr[i] == benchmark && alphaArr[i] != 0) same = false;
	}
	if (same) {
		int max = 0;
		int alpha = 0;
		for (int i = 0; i < 26; i++) {
			if (max < alphaArr[i]) {
				max = alphaArr[i];
				alpha = i + 65;
			}
		}
		printf("%c", alpha);
		return 0;
	}
	else {
		printf("?\n");
		return 0;
	}
}