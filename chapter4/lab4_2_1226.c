#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main () {
    int oct;
    printf("8진수 정수 입력 >> ");
    scanf("%o", &oct);

    printf("%o %d %x\n", oct, oct, oct);
    printf("%#o %i %#X\n", oct, oct, oct);

    return 0;
}