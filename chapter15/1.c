#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct account{
    char name[12];
    int actnum;
    double balance;
};


int main () {
    // struct account mine = {"홍길동", 1001, 3000000};

    struct account mine;
    
    fgets(mine.name, 12, stdin);
    mine.name[strlen(mine.name) - 1] = '\0';
    scanf("%d", &mine.actnum);
    scanf("%lf", &mine.balance);

    struct account yours;
    
    fgets(yours.name, 12, stdin);
    yours.name[strlen(yours.name) - 1] = '\0';
    scanf("%d", &yours.actnum);
    scanf("%lf", &yours.balance);

    // strcpy(yours.name, "이동원");
    // yours.actnum = 1002;
    // yours.balance = 5000000;

    printf("구조체 크기: %zu\n", sizeof(mine));
    printf("%s %d %.2f\n", mine.name, mine.actnum, mine.balance);
    printf("%s %d %.2f\n", yours.name, yours.actnum, yours.balance);
}