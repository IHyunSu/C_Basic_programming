// 논리 연산자

#include <stdio.h>

int main () {
    double grade = 4.21;

    printf("%d ", (4.0 < grade) && (grade <= 5));
    printf("%d ", 0.0 || (4.0 > grade));
    printf("%d\n", (4.2 < grade) || !0.0);
    printf("%d ", 'a' && 3.5);
    printf("%d ", '\0' || "C");
    printf("5d\n", "java" && '\0');

    return 0;
}