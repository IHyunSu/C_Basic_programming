#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include <stdlib.h>
#include <time.h>

#define MAX 100

int guess;

int main () {
    int input;

    srand((long)time(NULL));
    guess = rand() % MAX + 1;

    printf("1에서 %d 사이에서 한 정수가 결정되었습니다.\n", MAX);
    printf("이 정수는 무엇일까요? 입력해 보세요. : ");
    
    while (scanf("%d", &input)) {
        switch (testNum(input)) {
            case 0:
                puts("정답입니다.");
                break;
            case -1:
                printf("입력한 수보다 작습니다. 다시 입력하세요. : ");
                break;
            case 1:
                printf("입력한 수보다 큽니다. 다시 입력하세요. : ");
                break;
        }
    }

    return 0;
}

int testNum(int input) {
    extern guess;

    int result = 0;
    if (input > guess)
        result = -1;
    else if (input < guess)
        result = 1;
    else
        result = 0;
    
    return result;
}