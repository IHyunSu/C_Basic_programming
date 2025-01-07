#include <stdio.h>
#include <stdlib.h>

int main () {
    FILE *file;
    if (fopen_s(&file, "05flist.c", "r") != 0 ) {
        printf("can not open file\n");
        exit(1);
    }


    int ch, cnt = 0;
    printf("%4d: ", ++cnt);
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
        if (ch == '\n')
            printf("%4d: ", ++cnt);
    }
    printf("\n");
    fclose(file);

    return 0;
}