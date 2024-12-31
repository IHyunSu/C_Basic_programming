#include <stdio.h>

int add(int a, int b); // int add(int, int)도 가능

int main () {
    int a = 3, b = 5;
    //int add(int a, int b) // 이 위치도 가능

    int sum = add(a, b);
    printf("합: %d\n", sum);

    return 0;
}

// 함수 add의 함수 구현 또는 함수 정의 부분
int add(int a, int b) {
    int sum = a + b;

    return (sum); // 괄호는 생량 가능
}

//위 main() 함수에서 호출이 없으므로 이 함수 구현은 실행되지 않음
int findMin(int x, int y) {
    int min = x < y ? x : y;

    return (min);
}