#include <stdio.h>

void giveDecimalVals() {
    printf("The value of 077 is: %d\n", 077);
    printf("The value of 0x77 is: %d\n", 0x77);
    printf("The value of 0xABC is: %d\n", 0xABC);
}

int main(void) {
    giveDecimalVals();
    
    return 0;
}