/*  소스: 04integer.c */
#include <stdio.h>

int main() {
    short sVar = 32000;    //-32767부터 32767까지
    int iVar = -2140000000;    //약 21억 정도까지 저장 가능
    printf("정수 값: %d %d\n", sVar, iVar);

    //C99 이후 추가된 자료형: 64비트의 정수형 사용
    long long dist1 = 2720000000000;    //지구와 천왕성 사이 거리(km) 27억 2천
    __INT64_TYPE__ dist2 = 450000000000;        //지구와 태양간 사이 거리(km) 45억
    printf("지구와 천왕성 사이 거리(km): %lld\n", dist1);
    printf("지구와 태양간 사이 거리(km): %lld\n", dist2);
    
    return 0;
} // 출력 값: 32000 -2140000000