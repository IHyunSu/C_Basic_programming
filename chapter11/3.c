#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    FILE* file = fopen("numbers.txt", "w");

    if (file == NULL) {
        printf("can not open file");
        exit(1);
    }

    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        fprintf(file, "%d\n", rand() % 100);
    }

    fclose(file);
}