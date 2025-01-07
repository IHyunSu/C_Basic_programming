#include <stdio.h>

int main () {
    char input;

    printf("문자 입력: ");
    scanf("%c", &input);

    printf("입력 값: %c\n", input);
    printf("주소 값: %lu\n", &input);

    printf("주소값 크기: %lu\n", sizeof(&input));

    return 0;
}