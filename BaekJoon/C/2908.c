#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	char A[4], B[4];
	char reversedA[4] = { ' ', ' ', ' ', '\0' }, reversedB[4] = { ' ', ' ', ' ', '\0' };

	scanf("%s %s", &A, &B);

	for (int i = 0; i < 3; i++) {
		reversedA[i] = A[2 - i];
		reversedB[i] = B[2 - i];
	}

	int changedA, changedB;
	changedA = atoi(reversedA);
	changedB = atoi(reversedB);

	if (changedA > changedB) printf("%d", changedA);
	if (changedA < changedB) printf("%d", changedB);
}