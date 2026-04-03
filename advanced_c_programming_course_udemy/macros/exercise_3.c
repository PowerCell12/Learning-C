#include <stdio.h>

#define SQUARE(x) ((x) * (x))
#define CUBE(x) ((x) * (x) * (x))

int main() {
   // Find the square and the cube of a number using macros

    int num1;

    scanf("%d", &num1);

    printf("The square = %d, The cube = %d", SQUARE(num1), CUBE(num1));

    return 0;
}
