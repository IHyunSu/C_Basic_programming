/**
 * 소스: 02variables.c
 * 버전: V 1.0
 **/

#include <stdio.h>

int main() {
    int year = 2022;    // 변수를 선언과 동시에 초기화
    int credits;
    credits = 15;       // 변수를 선언후 초기화
    
    printf("%d년도\n", year);
    printf("이수학점: %d학점\n", credits);
    
    return 0;
}