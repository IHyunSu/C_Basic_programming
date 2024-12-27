// 연산자의 결합성에 따른 계산 순서 확인

#include <stdio.h>

int main () {
    int m = 5, n = 10;
    printf("%d\n", m += n /= 3);
    printf("%d %d\n", m, n);

    printf("%d ", 3 > 4 ? 3 - 4 : 3 > 4 ? 3 + 4 : 3 * 4);
    printf("%d\n", 3 > 4 ? 3 - 4 : (3 > 4 ? 3 + 4 : 3 * 4));

    printf("%d ", 10 * 3 / 2);
    printf("%d\n", 10 * (3 / 2));

    return 0;
}