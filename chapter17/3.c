#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[40];
    int mid;
    int final;
    int quiz;
    int number;
} pscore;

void printhead() {
    printf("%s\n", " ------------------------");
    printf("%82s%15s%10s%8s%8s\n", "번호", "이름", "중간", "기말", "퀴즈");
    printf("%s\n", "  -----------------------");
}

int main() {
    FILE *f;
    char fname[] = "scores.bin";

    if ((f = fopen(fname, "wb")) == NULL) {
        printf("파일이 열리지 않습니다.\n");
        exit(1);
    }

    char line[80];
    int cnt = 0;
    pscore score;
    printf("이름과 성적(중간, 기말, 퀴즈)을 입력하세요.\n");
    
    while (fgets(line, sizeof(line), stdin) != NULL) {
        if (sscanf(line, "%s %d %d %d", score.name, &score.mid, &score.final, &score.quiz) == 4) {
            score.number = ++cnt;
            fwrite(&score, sizeof(pscore), 1, f);
        } else {
            printf("잘못된 입력입니다. 다시 입력하세요.\n");
        }
    }
    fclose(f);

    if ((f = fopen(fname, "rb")) == NULL) {
        printf("파일이 열리지 않습니다.\n");
        exit(1);
    }
    printhead();

    fread(&score, sizeof(pscore), 1, f);
    while (!(feof(f))) {
        fprintf(stdout, "%6d%18s%8d%8d%8d\n", score.number, score.name, score.mid, score.final, score.quiz);
        fread(&score, sizeof(pscore), 1, f);
    }
    printf("%s\n", "-------------------------------");
    fclose(f);

    return 0;


}
