#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main () {
    FILE *file;

    if ((file = fopen("convertchar.c", "w")) == NULL) {
        printf("cannot open this file\n");
        exit(1);
    }

    char a;
    while ((a = getc(stdin)) != EOF) {
        if (isalpha(a)) {
            if (islower(a)) {
                a = toupper(a);
            }
            else if (isupper(a)) {
                a = tolower(a);
            }
        } 
        fputc(a, file);
    }

    fclose(file);

    printf("FILE convertchar.c is created!!!\n");
}