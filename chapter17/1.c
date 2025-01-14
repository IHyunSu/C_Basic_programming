#include <stdio.h>
#include <stdlib.h>

int main () {
    FILE* fp;
    int nums[] = {1,2,3,4,5};
    if ((fp = fopen("example.bin", "wb")) == NULL) {
        printf("Cannot open file\n");
        exit(1);
    }

    fwrite(nums, sizeof(int), sizeof(nums) / sizeof(int), fp);

    fclose(fp);

    return 0;
}