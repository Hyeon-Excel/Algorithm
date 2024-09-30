#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int costTime = 0;
	char dial[16];

	scanf("%s", &dial);
	for (int i = 0; i < strlen(dial); i++) {
		for (int j = 0; j < 25; j++) {
			if (dial[i] == 'A' || dial[i] == 'B' || dial[i] == 'C') {
				costTime += 3;
				break;
			}
			else if(dial[i] == 'D' || dial[i] == 'E' || dial[i] == 'F') {
				costTime += 4;
				break;
			}
			else if (dial[i] == 'G' || dial[i] == 'H' || dial[i] == 'I') {
				costTime += 5;
				break;
			}
			else if (dial[i] == 'J' || dial[i] == 'K' || dial[i] == 'L') {
				costTime += 6;
				break;
			}
			else if (dial[i] == 'M' || dial[i] == 'N' || dial[i] == 'O') {
				costTime += 7;
				break;
			}
			else if (dial[i] == 'P' || dial[i] == 'Q' || dial[i] == 'R' || dial[i] == 'S') {
				costTime += 8;
				break;
			}
			else if (dial[i] == 'T' || dial[i] == 'U' || dial[i] == 'V') {
				costTime += 9;
				break;
			}
			else if (dial[i] == 'W' || dial[i] == 'X' || dial[i] == 'Y' || dial[i] == 'Z') {
				costTime += 10;
				break;
			}
		}
	}

	printf("%d", costTime);
}