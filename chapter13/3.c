#include <stdio.h>

int main () {
    int a[3] = {5, 10, 15};
    int *p = &a[2];

    printf("%d ", *p--); // 15
    printf("%d\n", (*p)--); // 10 -> 9
    printf("%d %d %d\n", *(p - 1), *p, *(p + 1)); // 5 9 15
    printf("%d %d %d\n", p[-1], p[0], p[1]); // 5 9 15
}