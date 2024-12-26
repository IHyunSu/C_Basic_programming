/* 소스: 08charliteral.c */
#include <stdio.h>

int main() {
    printf("%cava", 'J');
    char sq = '\'';    // 작은 따옴표
    printf("%c\7\n", '\a');    // 알람 문자를 2번 출력하고 줄바꿈
    printf("%c자바 끝'\n", sq);    // 문자열 내부에서는 '(작은 따옴표) 그대로 출력 가능
    // 문자열 내부에서는 "(큰 따옴표) 반드시 \" 로 표현
    printf("\"C언어\" 공부 재미있다!\n");
    
    return 0;
}