/**
 * 소스: 03variables.c
 * 버전: V 1.0
 **/

#include <stdio.h>

int main() {
    int data1 = 20, data2 = 13;
    //같은 자료형의 왼쪽과 오른쪽에서의 변수를 의미 해석
    int diff = data1 - data2;
    int sum = data1 + data2;
    
    printf("data1: %d, data2: %d\n", data1, data2);
    printf("차: %d, 합: %d\n", diff, sum);
    
    return 0;
}