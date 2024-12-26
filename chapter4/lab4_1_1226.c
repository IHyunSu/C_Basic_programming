#include <stdio.h>
#pragma warning (disable:6274)

int main() {
    int age = 20;
    double gpa = 3.88;
    char gender = 'M';
    float weight = 62.489F;
    
    printf("성별: %c\n", gender);
    printf("이름: %c\n", "홍 길동");    // 오류: 문자열을 %c로 출력 시도
    printf("나이: %d\n", age);
    printf("체중값: %.2f\n", weight);
    printf("평균학점(GPA): %.3f", gpa);
    
    return 0;
}