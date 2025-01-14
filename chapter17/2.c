#include <stdio.h>
#include <stdlib.h>

int main () {
    FILE* fp;
    int nums[5];
    if ((fp = fopen("example.bin", "rb")) == NULL) {
        printf("Cannot open file\n");
        exit(1);
    }

    fread(nums, sizeof(int), 5, fp);
    fclose(fp);

    for (int i = 0; i < 5; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");


    return 0;
}