#include <stdio.h>

int main() {
    int ch = '#';
    printf("#의 아스키 코드 값: %d\n", ch);    // 정수 코드 값 출력
    printf("  # 의 문자 출력: %c\n\n", ch);    // 문자 출력
    
    int pop1 = 51800000;    // 대한민국 인구 약 5100만
    long long pop2 = 77166000000;    //전 세계 인구 약 77억
    printf("대한민국 인구: %d \n 전 세계 인구: %lld\n", pop1, pop2);
    
    return 0;
}