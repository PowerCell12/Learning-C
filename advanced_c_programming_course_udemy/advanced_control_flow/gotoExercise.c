#include <stdio.h>

int main() {
    // writing a triangle of asterisks. no looping only goto statement.
    int i = 0;
    int j = 0;
    int layers = 4;
    int currentLayer = 0;
    int finalAsterisksCount = 9;

    looping: 
        printf(" ");
        
        i++;
        
        if (i != layers) {
            goto looping;
        } else { 
            i = 0; 
        }

    if (layers != 0) {

        printf("*");
        
        drawingMiddleSpaces:
            if (j >= currentLayer) { 
                j = 0;
            } else {
                
                printf(" ");
                
                j++;
                
                goto drawingMiddleSpaces;
            }

        if (currentLayer != 0) {
            printf("*");
        }
        
        printf("\n\n");

        layers -= 1;
        
        if (currentLayer == 0) { 
            currentLayer += 1; 
        } else {
            currentLayer += 2; 
        }

        if (layers != 0) { 
            goto looping; 
        } 
    }

    printf(" ");

    finalRow:
        if (finalAsterisksCount != 0) {
            
            printf("*");
            
            finalAsterisksCount--;
            
            goto finalRow;
        }
        
    return 0;
}
