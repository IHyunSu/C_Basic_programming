#include <stdio.h>
#include <string.h>

#define MAX_LEN 50

typedef struct {
    char name[MAX_LEN];
    int age;
    char id[15];
} Student;

int main () {
    Student s;

    gets(s.name);
    scanf("%d", &s.age);
    getchar();
    gets(s.id);

    printf("%s\n", s.name);
    printf("%d\n", s.age);
    printf("%s\n", s.id);
}