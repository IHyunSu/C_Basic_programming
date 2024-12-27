// 비트 이동 연산자 (shift연산자)

#include <stdio.h>

int main () {
    int x = 0xffff; // 정수 65535

    printf("%6d %08x\n", x, x);
    printf("%6d %08x\n", x >> 1, x >> 1);
    printf("%6d %08x\n", x >> 2, x >> 2);
    printf("%6d %08x\n", x >> 3, x >> 3);

    printf("%06d %08x\n", x << 1, x <<1);
    printf("%06d %08x\n", x << 2, x << 2);

    return 0;
}