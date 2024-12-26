/* 소스: 07sizeflow.c */
#include <stdio.h>
#pragma warning (disable:6328)

int main() {
    printf("        자료형 : 크기(바이트)\n");
    printf("           char : %d\n", sizeof(char));
    printf("            int : %d %d\n", sizeof(int), sizeof(200));
    printf("            int : %d %d\n", sizeof(long long), sizeof(900LL));
    printf("            int : %d %d\n", sizeof(float), sizeof(3.14F));
    printf("            int : %d %d\n", sizeof(long double), sizeof(3.24L));
    printf("\n");
    
    short s = 32767;
    printf("%d\n", s);
    s = s + 1;
    printf("%d\n", s); // overflow 발생
    
    return 0;
}