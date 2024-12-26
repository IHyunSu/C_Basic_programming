#include <stdio.h>

int main() {
    printf("%3o %3d %3x\n", 10, 10, 10);    // 10을 8, 10, 16진수로 출력 표현
    printf("%#3o %3d %#3x\n", 12, 12, 12);
    printf("%3o %3i %3x\n", 14, 14, 14);
    return 0;
}