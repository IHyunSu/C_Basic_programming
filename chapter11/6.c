#include <stdio.h>
#include <stdlib.h>

int main () {
    char names[80];
    int cnt = 0;
    FILE *file;

    file = fopen("grade.txt", "w");
    if (file == NULL) {
        printf("파일이 열리지 않습니다.\n");
        exit(1);
    }

    printf("이름과 성적(중간, 기말)을 입력하세요.\n");

    while (fgets(names, sizeof(names), stdin) != NULL && names[0] != '\n') {
        fprintf(file, "%d ", ++cnt);
        fputs(names, file);
    }

    fclose(file);
}