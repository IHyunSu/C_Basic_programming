#include <stdio.h>

int main () {
    int value = 0x44434241; // 41은 문자 'A'

    char *pc = (char*)&value;

    for (int i = 0; i <= 3; i++) {
        char ch = *(pc + i);
        printf("%3c\n", ch);
    }
}