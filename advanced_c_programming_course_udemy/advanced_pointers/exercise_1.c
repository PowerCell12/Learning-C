#include <stdio.h>

int main() {
    // Create assign and accesses some double pointer. Creat a normal integer value and assign it a random value. Create a single pointer variable. Create a double integer pointer variable.
    // Assign the address of the normal integer variable to the single pointer. Assign the address of the single pointer to the double pointer variable
    // Then display all the information you can  

    int integer_value = 15;

    int *p1;
    int **p2;

    p1 = &integer_value;
    p2 = &p1;

    printf("Find value of the normal integer: ");
    printf("%d; %d; %d\n", integer_value, *p1, **p2);

    printf("Find address of the normal integer: ");
    printf("%p; %p; %p\n", &integer_value, p1, *p2);

    printf("Find the value of the single pointer variable: ");
    printf("%p; %p\n", p1, *p2);

    printf("Find the address of the single pointer variable: ");
    printf("%p; %p\n", &p1, p2);

    printf("Find the double pointer value and address: ");
    printf("%p; %p\n", p2, &p2);
    
    return 0; 
}
