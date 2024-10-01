#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
	char str[100];
	scanf("%s", &str);

	int start = 0;
	int end = strlen(str) - 1;
	bool condition = true;
	while (start < end) {
		if (str[start] != str[end]) {
			condition = false;
		}
		start++;
		end--;
	}

	printf("%d", condition);
}