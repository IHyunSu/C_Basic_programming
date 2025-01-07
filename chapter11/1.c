#include <stdio.h>
#include <stdlib.h>

int main () {
    FILE* file;

    if ((file = fopen("basic.txt", "w")) == NULL) {
        printf("can not open file\n");
        exit(1);
    }

    char name[30] = "손혜진";
    int point = 99;

    fprintf(file, "이름 %s 학생의 성적은 %d 입니다.\n", name, point);
    fclose(file);
    
    return 0;
}