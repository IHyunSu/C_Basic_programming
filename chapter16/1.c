#include <stdio.h>

void modify2DArray(int arr[][3], int rows);
void print2DArray(int arr[][3], int rows);

int main () {
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Original array:\n");
    print2DArray(arr, 3);

    modify2DArray(arr, 3);

    printf("Modified array:\n");
    print2DArray(arr, 3);

    return 0;
}

void modify2DArray(int arr[][3], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            arr[i][j] *= 2;
        }
    }
}

void print2DArray(int arr[][3], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }
}