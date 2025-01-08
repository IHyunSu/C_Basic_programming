#include <stdio.h>
#include <stdlib.h>

int main () {
    int **arr = NULL;

    int row = 3, cols = 3;

    arr = (int**)malloc(sizeof(int*) * row);

    for (int i = 0; i < row; i++) {
        arr[i] = (int*)malloc(sizeof(int) * cols);
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = i * j;
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < row; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}