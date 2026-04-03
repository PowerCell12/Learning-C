//
// Created by ivan on 4.12.25 г..
//

#include <math.h>
#include <stdio.h>
#include <string.h>

int convertBinaryToDecimal(const char *bin) {
    // no handling for negative numbers

    int increment = strlen(bin) - 1;
    int decimal = 0;

    while (*bin != '\0') {
        decimal += (*bin - '0') * pow(2, increment);

        ++bin;

        increment -= 1;
    }

    return decimal;
}

int countDigits(int num) {
    if (num == 0) return 1;
    int count = 0;
    while (num != 0) {
        count++;
        num /= 10;
    }
    return count;
}


long long convertDecimalToBinary(int n) {
    long long binary = 0;
    int countZeroes = 0;
    int count = 0;
    long long remained = 0;

    while (n != 0) {
        remained = n % 2;
        n /= 2;
        count++;

        if (remained == 1) {

            if (countZeroes != 0) {
                binary += pow(10, countDigits(binary) + countZeroes);
                countZeroes = 0;
            }
            else {
                if (count == 1) {
                    binary = 1;
                }
                else {
                    binary += pow(10, countDigits(binary));
                }
            }

        }
        else if (remained == 0 && (countDigits(binary) != 1 || count != 1)) {
            countZeroes++;
        }
    }

    return binary;
}

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

int main() {
    int decimal = 1023;

    long long binary = convertDecimalToBinaryOptimized(decimal);

    printf("%lld", binary);

    return 0;
}
