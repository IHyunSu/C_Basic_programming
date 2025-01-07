#include <stdio.h>
#include <stdlib.h>

int main () {
    FILE *file = fopen("grade.txt", "w");

    char name[50];
    int cnt = 0;

    printf("이름과 성적(중간, 기말)을 입력하세요.\n");

    fgets(name, 51, stdin);

    while (!feof(stdin)) {
        fprintf(file, "%d ", ++cnt);
        fputs(name, file);
        fgets(name, 51, stdin);
    }


    fclose(file);

    return 0;
}