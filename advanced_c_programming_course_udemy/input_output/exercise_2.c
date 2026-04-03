#include <stdio.h>
#include <ctype.h>

int main() {
    // convert uppercase to lowercase and vice versa. ask the user for the name of the file. create a temporary file to store the result. rename it back to the original file.
    // use isupper and tolower, toupper.
    FILE *fp;
    FILE *fpTemporary;

    char fileName[255];

    printf("Give the filename:\n");

    scanf("%s", &fileName);

    fp = fopen(fileName, "r");
    fpTemporary = fopen("temporary.txt", "w");

    char currentChar;
    while ((currentChar = fgetc(fp)) != EOF) {

        if (currentChar == ' ' || currentChar == '\n') {
            fputc(currentChar, fpTemporary);
        } else {
            if (isupper(currentChar)) {
               fputc(tolower(currentChar), fpTemporary);
            } else {
                fputc(toupper(currentChar), fpTemporary);
            }
        }

    }

    int result = rename("temporary.txt", fileName);

    if (result == -1) {
        printf("There was an error when renaming the file!");
    }

    fclose(fp);
    fclose(fpTemporary);

    return 0;
}
