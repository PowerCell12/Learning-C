#include <stdio.h>
#include <malloc.h>

void allocateMemory(int **p) {
    *p = malloc(sizeof(int));
}

int main() {
    int *p = NULL;

    allocateMemory(&p);

    *p = 10;
    printf("%d", *p);

    free(p);

    return 0;
}
