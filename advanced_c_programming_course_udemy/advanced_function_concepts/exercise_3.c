#include <stdio.h>

#define min(a, b) ((a) < (b) ? (a) : (b))

int findGCD(int num1, int num2, int lowest) {

    if (lowest == 0) return lowest;

    if (num1 % lowest == 0 && num2 % lowest == 0) {
        return lowest;
    } else {
        return findGCD(num1, num2, lowest - 1);
    }
}

int main() {
    // That will find GCD (greates common denomiator) of two numbers using recursion
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    int lowest = min(num1, num2);

    int result = findGCD(num1, num2, lowest);

    printf("%d", result);

    return 0;
}
