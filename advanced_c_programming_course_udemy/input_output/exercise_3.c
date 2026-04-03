#include <stdio.h>
#include <malloc.h>
#include <string.h>

#define bufferLength 255

int main(int argc, char *argv[]) {
    // Takes two command line arguments - a character and a filename.  Should print only the lines in the file containing the given character. No line is more than 256 char long.
    // Lines in a file are identified by terminating '\n'.  Try to use first getline() then fgets() then use puts to display to the output. 

    if (argc != 3) {
        printf("You need to pass exactly two arguments");
        return 1;
    }

    FILE *fp;

    fp = fopen(argv[2], "r");

    char *buffer = NULL;
    size_t size = bufferLength; 

    while (getline(&buffer, &size, fp) != EOF) {
        char *line = strchr(buffer, argv[1][0]);

        if (line != NULL) {
            fputs(buffer, stdout);
        }
    }

    fclose(fp);

    return 0;
}
