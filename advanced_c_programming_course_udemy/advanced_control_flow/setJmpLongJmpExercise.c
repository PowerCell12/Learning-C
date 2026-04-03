#include <stdio.h>
#include <setjmp.h>

jmp_buf buf;


void error_recovery() {
    printf("There was an error in the system. Try again!\n");

    longjmp(buf, 99);
}

int main() {
   // a function called error_recovery that prints out an error and then uses longjmp to transfer control back to the main function loop.
   // The main function should include a forever loop, that uses setjmp at the top of the loop before processing.
   // can add dummy code to simulate an error. Call the error_recovery when the setjmp is 0
   
   while (true) {
     int code = setjmp(buf);

     if (code == 0) {
        error_recovery();
     } else {
        printf("back in main\n");
        break;
     }
   } 

    return 0;
}
