#include <stdio.h>

#define BufferLength 200

bool is_prime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    // Only check odd divisors up to sqrt(n)
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int main() {
    // Takes as input, a set of numbers froma  file and write even, odd and prime numbers to standard output. Either fscanf or (fgets and sscanf). 
    char buffer[BufferLength];

    FILE *fp;

    fp = fopen("numbers.txt", "r");

    int numArr[5]; 
    while (fgets(buffer, BufferLength, fp) != NULL) {
       sscanf(buffer, "%d %d %d %d %d", &numArr[0], &numArr[1], &numArr[2], &numArr[3], &numArr[4]);

       for (int i = 0; i < 5; i++) {
            int num = numArr[i];

            if (is_prime(num)) {
                printf("Prime number found: %d\n", num);
            } else if (num % 2 == 0) {
                printf("Even number found: %d\n", num);
            } else {
                printf("Odd number found: %d\n", num);
            }
       }
    }

    fclose(fp);

    return 0;
}
