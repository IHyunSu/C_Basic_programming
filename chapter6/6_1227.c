// switch를 사용하여 두 실수의 사칙연산 수행

#define _CRT_SECURE_NO_WARNIGS
#include <stdio.h>

int main () {
    double x, y, result;
    int op;

    printf("두 실수 입력: ");
    scanf("%lf %lf", &x, &y);
    printf("연산종류 번호 선택 1(+), 2(-), 3(*), 4(/): ");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        printf("%.2f + %.2f = %.2f\n", x, y, x + y);
        break;
    case 2:
        printf("%.2f - %.2f = %.2f\n", x, y, x - y);
        break;
    case 3:
        printf("%.2f * %.2f = %.2f\n", x, y, x * y);
        break;
    case 4:
        printf("%.2f / %.2f = %.2f\n", x, y, x / y);
        break;

    default:
        printf("번호를 잘못 선택하였습니다.\n");
    }

    return 0;
}