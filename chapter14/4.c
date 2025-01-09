#include <stdio.h>
#include <string.h>
#define MAX_LEN 101

int main () {
    char line[MAX_LEN];

    printf("\nEnter text (Ctrl) + Z to end):\n");
    while (fgets(line, MAX_LEN, stdin) != NULL) {
        line[strlen(line) - 1] = '\0';
        printf("%s\n", line);
    }
    printf("\nEnd of input.\n");

    return 0;
}