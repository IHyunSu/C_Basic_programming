#include <stdio.h>

int main () {
    int td[2][3] = { {1, 2, 3}, {4, 5, 6}};

    // 배열 및 행 크기 출력
    printf("%u\n", (unsigned int)sizeof(td));
    printf("%u\n", (unsigned int)sizeof(td[0]));

    //값 수정
    *(*td + 4) = 20;    // td[1][1] = 20
    *(*(td + 1) + 2) = 30; // td[1][2] = 30

    // 수정된 값 출력
    printf("%u\n", td[0][0]); // td[0][0]
    printf("%u\n", td[1][1]); // td[1][1]
    printf("%u\n", td[1][2]); // td[1][2]
}