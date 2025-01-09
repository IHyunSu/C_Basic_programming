#include <stdio.h>

int main () {
    int i = 0;
    char *java = "j ava";
    printf("%s\n", java);

    while (java[i]) {
        printf("%c", java[i++]);
    }
    printf("\n");
}