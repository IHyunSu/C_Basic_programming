/* 소스: 11enum.c */
#include <stdio.h>

int main() {
    // 키워드 enum으로 요일별 상수 값을 선언
    enum DAY { SUN, MON, TUE, WED, THU, FRI, SAT };
    printf("%d %d\n", SUN, THU);

    // 상수 목록에서 특정값 지정 가능
    enum SHAPE { POINT, LINE, TRI = 3, RECT, OCTA = 8, CIRCLE };
    printf("LINE : %d, RECT : %d, CIRCLE : %d\n", LINE, RECT, CIRCLE);

    enum pl { c = 1972, cpp = 1983, java = 1995, csharp = 2000 };
    printf("c : %d, cpp : %d, java : %d\n", c, cpp, java);
    
    return 0;
}