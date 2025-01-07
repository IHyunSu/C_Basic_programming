#include <stdio.h>

int main () {
    FILE *file = fopen("grade.txt", "w");
    int grade1, grade2, count = 0;
    char name[50];

    printf("이름과 성적(중간, 기말)을 입력하세요.\n");
    scanf("%s %d %d", name, &grade1, &grade2);
    count++;

    if (file == NULL) {
        printf("can not open file");
    }

    fprintf(file, "%d %s %d %d\n", count, name, grade1, grade2);

    fclose(file);

    printf("번호    이름    중간    기말\n");
    printf("%d    %s     %d      %d\n", count, name, grade1, grade2);

    return 0;
}