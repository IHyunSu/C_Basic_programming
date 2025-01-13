#include <stdio.h>
#include <stdlib.h>

int* create_array(int size);

int main () {
    int size = 10;
    int *arr;
    arr = create_array(size);

    if (arr = NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }
    
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}

int* create_array(int size) {
    int* array = (int*)malloc(size * sizeof(int));
    if (array == NULL) {
        return NULL;
    }
    for (int i = 0; i < size; i++) {
        array[i] = i*i;
    }
    return array;
}