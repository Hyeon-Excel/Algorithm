#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N;

	scanf("%d", &N);
	
	for (int i = 0; i < N / 4; i++) {
		printf("long ");
	}
	printf("int\n");
}