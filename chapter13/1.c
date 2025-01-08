#include <stdio.h>

int main () {
    int i = 100;
    int *pi = &i;
    int **dpi = &pi;
    int ***sdpi = &dpi;

    printf("%p %p %p %p\n", &i, &pi, &dpi, &sdpi);

    *pi = i + 30;
    printf("%d %d %d %d\n", i, *pi, **dpi, ***sdpi);

    **dpi = *pi + 30;
    printf("%d %d %d %d\n", i, *pi, **dpi, ***sdpi);

    return 0;
}