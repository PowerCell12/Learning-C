#include <stdio.h>

#define IS_IN_ALPHABET(character) (((int)character >= 97 && (int)character <= 122) || ((int)character >= 65 && (int)character <= 90))

#define IS_LOWER(character) ((int)character >= 97 && (int)character <= 122)
#define IS_UPPER(character) ((int)character >= 65 && (int)character <= 90)

int main() {
    // whether a character is uppercase or lowercase using macros. Two macros IS_UPPER and IS_LOWER and accept character return a boolean  

    char first, second;

    scanf("%c %c", &first, &second);

    if (!IS_IN_ALPHABET(first) || !IS_IN_ALPHABET(second)) {
        printf("Entered character is not in the alphabet");
    }
    else {
        printf("If the first is lower = %d. If the second is upper = %d", IS_LOWER(first), IS_UPPER(second));
    }

    return 0;
}
