#include <stdio.h>

#define SUM(x, y) ((x) + (y))

int main() {
    // a macro that accepts two parameters and returns the sum of the given numbers
    // the user should input the numbers 
  
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    printf("%d", SUM(num1, num2));
    
    return 0;
}
