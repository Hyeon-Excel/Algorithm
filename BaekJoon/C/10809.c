#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
	char S[100];
	bool yes_or_no = false;

	scanf("%s", &S);

	for (int i = 97; i <= 122; i++) {
		int location = 0;
		for (int j = 0; j < strlen(S); j++) {
			if ((char) i  == S[j]) {
				location = j;
				yes_or_no = true;
				break;
			}
			else yes_or_no = false;
		}
		if (yes_or_no)
			printf("%d ", location);
		else printf("%d ", -1);
	}
}