//
// Created by ivan on 12.12.25 г..
//

// 1. write a program that reads two integers, will print the result of applying all the operators. results as binary strings.

#include <stdio.h>

long long convertDecimalToBinaryOptimized(int n) {
    if (n == 0) return 0;

    long long binary = 0;
    long long multiplier = 1;

    while (n != 0) {
        binary += (n % 2) * multiplier;
        multiplier *= 10;
        n /= 2;
    }

    return binary;
}

void bitwise_operators(int num1, int num2) {
    // Logical
    printf("%lld\n", convertDecimalToBinaryOptimized(~num1));

    printf("%lld\n", convertDecimalToBinaryOptimized(num1^num2));

    printf("%lld\n", convertDecimalToBinaryOptimized(num1|num2));

    printf("%lld\n", convertDecimalToBinaryOptimized(num1&num2));

    // Shifting
    printf("%lld\n", convertDecimalToBinaryOptimized(num1<<2));

    printf("%lld\n", convertDecimalToBinaryOptimized(num2>>2));
}

int main() {
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    bitwise_operators(num1, num2);

    return 1;
}
