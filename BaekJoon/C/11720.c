#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int N;

	scanf("%d", &N);

	char* nArr = (char*)malloc(sizeof(char) * (N + 1));
	scanf("%s", nArr);

	int sum = 0;
	for (int i = 0; i < N; i++) {
		sum += (nArr[i] - '0');
	}

	printf("%d", sum);

	free(nArr);
	return 0;
}
