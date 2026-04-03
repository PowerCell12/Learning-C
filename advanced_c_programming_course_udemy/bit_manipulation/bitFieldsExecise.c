#include <stdio.h>

typedef struct {
    unsigned short boxIsTransparent:1;
    unsigned short fillColor:3;
    unsigned short :4;
    unsigned short borderIsShown:1;
    unsigned short borderColor:3;
    unsigned short borderLineStyle:2;
    unsigned short :2;
} onScreenBox;

int main() {
    onScreenBox onScreenBox = { true, 6, true, 2, 2};

    printf("%u %u", onScreenBox.boxIsTransparent, onScreenBox.fillColor);

    onScreenBox.boxIsTransparent = false;
    onScreenBox.fillColor = 7;
    onScreenBox.borderIsShown = true;
    onScreenBox.borderColor = 5;
    onScreenBox.borderLineStyle = 0;

    printf("%u %u \n", onScreenBox.boxIsTransparent, onScreenBox.fillColor);

    // with bitwise operators
    unsigned short onScreenBoxWithBitwise = 0; 

    onScreenBoxWithBitwise |= 0b0010010100001101; 
   
    printf("%u %u", onScreenBoxWithBitwise & 0b1, (onScreenBoxWithBitwise >> 1) & 0b111);

    onScreenBoxWithBitwise &= ~(0b111 << 9); 
        
    onScreenBoxWithBitwise &= ~0b1;
    onScreenBoxWithBitwise |= 0b111 << 1;
    onScreenBoxWithBitwise |= 0b101 << 9;
    onScreenBoxWithBitwise &= ~(0b11 << 12);
    
    printf("%u %u", onScreenBoxWithBitwise & 0b1, (onScreenBoxWithBitwise >> 1) & 0b111);
    
	return 0;
}
