#include <stdio.h>

int main(int argc, char *argv[]) {
    // Count the number of words and characters in a file Or from standard input. 
  
    if (argc != 2) {
        printf("You need to pass the file name.");

        return 1;
    }
    
    FILE *fp;

    fp = fopen(argv[1], "r");

    if (fp == NULL) {
        printf("Error: Could not create file\n");
        return 1;
    }

    int charactersCount = 0;
    int wordsCount = 0;

    char character;
    while ((character = fgetc(fp)) != EOF) {
        if (character == ' ' || character == '\n') {
            wordsCount++;
        }
        else {
            charactersCount++;
        }
    }

    printf("Character = %d; Words = %d", charactersCount, wordsCount);

    fclose(fp);

    return 0;
}
