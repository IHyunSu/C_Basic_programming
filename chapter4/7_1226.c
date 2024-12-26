#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int year, month, day;
    printf("오늘은 몇년몇월며칠? ");
    scanf("%d - %d - %d", &year, &month, &day);
    printf("오늘날짜: %d %d %d\n", year, month, day);
    return 0;
}