#include <stdio.h>
#include <stdlib.h>

void printArr(int *arr, int n, int *sum, double *avg);

int main () {
    int n, num, sum = 0;
    double avg = 0;
    printf("입력할 점수의 개수를 입력 >> ");
    scanf("%d", &n);

    int *arr;
    if ((arr = (int*)malloc(sizeof(int) * 5)) == NULL) {
        printf("메모리 할당에 문제가 있습니다.");
        exit(1);
    }

    printf("5개의 정수 입력 >> ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printArr(arr, n, &sum, &avg);
    free(arr);

    printf("\n합: %d 평균: %.2f", sum, avg);
    printf("\n");

    return 0;
}

void printArr(int *arr, int n, int *sum, double *avg) {
    printf("입력 점수 : ");
    for (int i = 0; i < 5; i++) {
        printf("%d", *(arr + i));
        if (i != 5 - 1) printf(" ");
        (*sum) += *(arr + i);
    }
    (*avg) = (double)(*sum) / n;
}
