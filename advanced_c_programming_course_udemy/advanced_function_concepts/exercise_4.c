#include <stdio.h>
#include <string.h>

int printAWordInReverse(char *word, char *finalChar) {

    printf("%c", *finalChar);

    if (word != finalChar) {
        printAWordInReverse(word, finalChar - 1);
    } else {
        return 0;
    }
}

int main() {
    // reverse a string with recursion
    char word[25];

    scanf("%s", &word);

    char *finalChar = word + strlen(word);

    int result = printAWordInReverse(word, finalChar);

    return 0;
}
