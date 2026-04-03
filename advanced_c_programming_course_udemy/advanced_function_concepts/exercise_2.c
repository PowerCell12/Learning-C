#include <stdio.h> 

int sumRecursively(int recursTo, int sum){

    if (1 == recursTo) {
        return sum += recursTo;
    }

    return sumRecursively(recursTo - 1, sum += recursTo);
}

int main() {
    // Using recursion calculate the sum from 1 to n
    int recursTo;

    scanf("%d", &recursTo);

    int sum = sumRecursively(recursTo, 0);

    printf("%d", sum);

    return 0;
}
