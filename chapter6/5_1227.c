// else if를 적절히 조합하여 나이에 따른 선택

#define _CRT_SECURE_NO_WARNIGS
#include <stdio.h>

int main () {
    int age = 0;

    printf("당신의 나이는? ");
    scanf("%d", &age);

    if (age >= 20)
    {
        if (age >= 65)
            printf("당신은 어르신입니다.\n");
        else
            printf("당신은 성인입니다.\n");
    } else {
        printf("당신은 미성년자입니다.\n");
    }

    return 0;
}