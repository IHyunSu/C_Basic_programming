// 조건문 if

#define _CRT_SECURE_NO_WARNIGS
#include <stdio.h>

int main () {
    double temprature;

    printf("현재 온도 입력: ");
    scanf("%lf", &temprature);

    if (temprature >= 30.0) {
        printf("폭엽 주의보를 발령합니다.\n");
        printf("건강에 유의하세요.\n");
    }
    printf("현재 온도는 섭씨 %.2f 입니다.\n", temprature);

    return 0;
}