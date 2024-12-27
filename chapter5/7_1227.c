// 논리연산자 &&와 ||

#define _CRE_SECURE_NO_WARNIGS
#include <stdio.h>

int main () {
    int amount = 0;
    int coupons = 10;

    printf("총 금액 >> ");
    scnaf("%d", &amount);

    int sale = (amount >= 10000) && ((coupons++) >= 10);
    printf("할인: %d, 쿠폰 수: %d\n", sale, coupons);

    return 0;
}