#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    int wordCount = 0;
    char str[1000001];

    scanf("%[^\n]s", str);

    int len = strlen(str);  

    if (len == 0 || (len == 1 && str[0] == ' ')) {
        printf("0\n");
        return 0;
    }

    for (int i = 0; i < len; i++) {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' ')) {
            wordCount++;
        }
    }

    printf("%d\n", wordCount);
    return 0;
}
