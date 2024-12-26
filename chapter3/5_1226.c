/* 소스: 05floatDouble.c */
#include <stdio.h>

int main() {
    float x = 3.14F;        // float x = 3.14; 와 같이, 경고 발생
    double y = -3.141592;   // double 저장공간 크기는 float의 2배
    long double z = 29.74;  // double과 long double은 시스템에서 모두 64비트
    
    printf("부동 소수 값: %f %f %f\n", x, y, z);
    return 0;
}