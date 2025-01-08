#include <stdio.h>
#define COLS 3

void doubleElements(int **ptr);

int main () {
    int arr[2][COLS] = {{1,2,3}, {4,5,6}};
    doubleElements(arr);
    printf("Array after doubling elements:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void doubleElements(int **ptr) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < COLS; j++) {
            ptr[i][j] *= 2;
        }
    }
}