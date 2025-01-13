#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nmae[20];
    int age;
} Person;

int compareByname(const void *a, const void *b);

int main () {
    Person people[] = {
        {"Alice", 30},
        {"Bob", 25},
        {"Charlie", 35},
        {"David", 20}
    };
    size_t peopleSize = sizeof(people) / sizeof(people[0]);

    qsort(people, peopleSize, sizeof(Person), compareByname);

    for (size_t i = 0; i < peopleSize; i++) {
        printf("%s: %d\n", people[i].nmae, people[i].age);
    }
}

int compareByname(const void *a, const void *b) {
    Person* A = (Person*)a;
    Person* B = (Person*)b;

    return (A->nmae - B->nmae);
}