#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char str[100];

	scanf("%s", &str);
	int size = strlen(str);
	printf("%d", size);
}