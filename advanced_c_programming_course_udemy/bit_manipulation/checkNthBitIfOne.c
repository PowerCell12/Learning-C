//
// Created by ivan on 16.12.25 г..
//


#include <stdio.h>

int checkNthBitIfOne(int number, int bitToSet) {

    int number2 = (number >> bitToSet) & 1;

    if (number2 == 1) {
        printf("The bit on position %d is 1. The number is the same", bitToSet);
        return number;
    }

    printf("The bit on place %d is not 1. Changing the number...\nThe number is: ", bitToSet);

    number |= 1 << bitToSet;

    return number;
}


int main() {
    int number;
    int bitToSet;

    scanf("%d %d", &number, &bitToSet);

   if (bitToSet < 0 || bitToSet > 31) {
       printf("The number should be between 0 and 31");
       return 1;
   } 

    int finalNumber = checkNthBitIfOne(number, bitToSet);

    printf("%d", finalNumber);
    return 0;
}
