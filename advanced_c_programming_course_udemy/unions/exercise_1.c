#include <stdio.h>

union student { 
    char letterGrade;
    int roundedGrade;
    double exactGrade;
} variable1, variable2;


int main() {
    // Define a union and then use to assign and access its members. Named student and it has letterGrade, roundedGrade, exactGrade.
    // Should make two union variables in main. Assign and display each value for each member of this union (var1).
    // With variable2 assign a value to letterGrade and display, then do the same for RoundedGrade and exatcGrade 

    variable1.letterGrade = 'f';
    variable1.roundedGrade = 100;
    variable1.exactGrade = 99.510;

    printf("variable1 has these values: %c / %d / %f\n", variable1.letterGrade, variable1.roundedGrade, variable1.exactGrade);

    variable2.letterGrade = 'G';
    printf("The char for variable2 = %c\n", variable2.letterGrade);

    variable2.roundedGrade = 50;
    printf("The rounded for variable2 = %d\n", variable2.roundedGrade);

    variable2.exactGrade = 49.20;
    printf("The exact for variable2 = %f\n", variable2.exactGrade);

    return 0;
}
