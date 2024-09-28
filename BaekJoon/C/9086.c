#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int T;
	char str [1000];

	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		scanf("%s", &str);

		int length = strlen(str);
		if (length <= 1) {
			printf("%c", str[0]);
			printf("%c", str[0]);
		}
		else {
			printf("%c", str[0]);
			printf("%c", str[length - 1]);
		}
		printf("\n");
	}
}