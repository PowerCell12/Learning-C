#include <stdio.h>
#include <stdarg.h>

int add(int argCount, ...);

int main() {
    // creat a variadic function that will allow a programmer to add any amount of numbers (integers) that they would like to be added together
    // use the first argument as the number of arguments
    int first = add(4, 10, 15, 21, 9);

    int second = add(2, 15, 30);

    printf("%d and %d", first, second);

    return 0; 
}

int add(int argCount, ...) {
    int sum = 0;

    va_list parg; 

    va_start(parg, argCount);

    for (int i = 0; i < argCount; i++) {
        int num = va_arg(parg, int);

        sum += num;
    }

    va_end(parg);

    return sum;
}
