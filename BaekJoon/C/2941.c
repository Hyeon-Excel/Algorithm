#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    scanf("%s", str);

    int length = strlen(str);
    int index = 0;
    int alpha = 0;

    while (index < length) {
        if (str[index] == 'c' && (str[index + 1] == '=' || str[index + 1] == '-')) {
            index += 2;
        }
        else if (str[index] == 'd') {
            if (str[index + 1] == 'z' && str[index + 2] == '=') {
                index += 3;
            }
            else if (str[index + 1] == '-') {
                index += 2;
            }
            else {
                index++;
            }
        }
        else if ((str[index] == 'l' || str[index] == 'n') && str[index + 1] == 'j') {
            index += 2;
        }
        else if ((str[index] == 's' || str[index] == 'z') && str[index + 1] == '=') {
            index += 2;
        }
        else {
            index++;
        }
        alpha++;
    }

    printf("%d\n", alpha);
    return 0;
}
