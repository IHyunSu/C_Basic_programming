#include <stdio.h>
#include <string.h>
#include <ctype.h>

char* strlwr(char* str) {
    char* p = str;
    while (*p) {
        *p = tolower(*p);
        p++;
    }
    return str;
}

char* strupr(char* str) {
    char* p = str;
    while (*p) {
        *p = toupper(*p);
        p++;
    }
    return str;
}

int main () {
    char str[] = "JAVA 2022 Python C";
    printf("%zu\n", strlen("python"));
    printf("%s, ", strlwr(str));
    printf("%s\n", strupr(str));

    printf("%s, ", strstr(str, "VA"));
    printf("%s\n", strchr(str, 'A'));

    return 0;
}