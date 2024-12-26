/* 소스: 10const.c */
#include <stdio.h>

int main() {
    //키워드 const로 상수 선언
    double const e = 2.718281; // 오일러 수
    // e = 2.71828;    // 오류 발생
    printf("오일러 수 %f\n", e);
    
    return 0;
}