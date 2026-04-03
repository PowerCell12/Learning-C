#include <stdio.h>

int main() {
    // Write a program to print the value of the __LINE__ __FILE__ __DATE__ __TIME__ __STDC__

    printf("__LINE__ = %d\n__FILE__ = %s\n__DATE__ = %s\n__TIME__ = %s\n__STDC__ = %d", __LINE__, __FILE__, __DATE__, __TIME__, __STDC__);

    return 0;
}
