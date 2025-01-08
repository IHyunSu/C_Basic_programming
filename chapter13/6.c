#include <stdio.h>

void printDays(char *ptr[], int n);

int main () {
    const char *days[7] = {
        "Monday", "Tuesday", "Wednesday",
        "Thursday", "Friday", "Saturday", "Sunday"
    };

    printDays(days, 7);

    return 0;
}

void printDays(char *ptr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s\n", ptr[i]);
    }
}