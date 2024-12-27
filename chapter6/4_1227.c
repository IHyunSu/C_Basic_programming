// 중첩된 if else 문으로 자동차 면허 합격 여부 판정

#define _CRT_SECURE_NO_WARNIGS
#include <stdio.h>

int main () {
    int type, point;

    printf("번호를 선택: 1(1종면허), 2(2종면허): ");
    scnaf("%d", &type);
    printf("필기시험 점수 입력: ");
    scanf("%d", &point);

    if (type == 1) {
        if (point >= 70)
            printf("1종 면허 합격\n");
        else
            printf("1종 면허 불합격\n");
    } else if (type == 2) {
        if (point >= 60)
            printf("2종 면허 합격\n");
        else
            printf("2종 면허 불합격\n");
    }

    return 0;
}