#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int arr[10];
    int mod[42] = { 0 };
    int count = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        mod[arr[i] % 42] = 1;
    }

    for (int i = 0; i < 42; i++) {
        if (mod[i] == 1) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
