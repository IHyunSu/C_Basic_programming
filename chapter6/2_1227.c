// 조건 if else로 짝수와 홀수 판정
#include <stdio.h>

int main () {
    int n;
    printf("정수 입력: ");
    scanf("%d", &n);

    if (n % 2) {
        printf("홀수\n");
    } else {
        printf("짝수\n");
    }

    (n % 2) ? printf("홀수\n") : printf("짝수\n");

    return 0;
}