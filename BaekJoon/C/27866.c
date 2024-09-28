#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i;
	char word[1000];

	scanf("%s", &word);
	scanf("%d", &i);

	printf("%c", word[i - 1]);
}