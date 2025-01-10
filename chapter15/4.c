#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
    char id[15];
} Student;

int main () {
    Student s1 = { "Alice", 20, "20231001" };
    Student s2 = { "Alice", 20, "20231002" };

    if (memcmp(&s1, &s2, sizeof(Student)) == 0) {
        printf("The Student are equal.");
    } else {
        printf("The Student are not equal.");
    }
}