#include <stdio.h>
#include <stdlib.h>

int main () {
    int i = 0;
    int capacity = 10;
    int *arr = NULL, *temp = NULL;

    if ((arr = (int*)malloc(sizeof(int) * 10)) == NULL) {
        printf("Memory Allocation Error\n");
        exit(1);
    }

    while (1) {
        scanf("%d", (arr + i));
        printf("Input: ");
        if (*(arr + i) == -1) break;

        if (capacity == i - 1) {
            temp = realloc(arr, capacity * 2);
            arr = temp;
        }

        printf("%d\n", *(arr + i));
    }

    free(temp);
    free(arr);
}