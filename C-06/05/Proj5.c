#include <stdio.h>

int main(void) {
    int num, rev;

    printf("Enter a number: ");
    scanf("%d", &num);
    
    do {
        rev += num % 10;
        if(num > 10)
            rev *= 10;
        num /= 10;

    } while(num > 0);

    printf("The reversal is: %d", rev);

    return 0;
}
