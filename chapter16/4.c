#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct book {
    char title[50];
    char author[50];
    int ISBN;
} book;

book* input();
void print(book* b);

int main () {
    book python = { "파이썬으로 배우는 누구나 코딩", "강환수", 979117 };
    book *comintro;
    comintro = input();
    print(comintro);
    printf(&python);

    return 0;
}

book* input() {
    book *b;
    b = (book*)malloc(sizeof(book));
    strcpy(b->title, "소프트웨어 중심사회의 컴퓨터개론");
    strcpy(b->author, "강환수");
    b->ISBN = 437894;
    return b;
}
void print(book* b) {
    printf("제목: %s, ", b->title);
    printf("저자: %s, ", b->author);
    printf("ISBN: %d\n", b->ISBN);
}