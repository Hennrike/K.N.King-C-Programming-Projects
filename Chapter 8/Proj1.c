#include <stdbool.h>
#include <stdio.h>

int main(void) {
    bool digit_seen[10] = {false};
    bool digit_repeated[10] = {false};
    bool repeated;
    int digit;
    unsigned long n;

    printf("Enter a number (Must be 9 digits long): ");
    scanf("%ld", &n);

    while(n > 0) {
        digit = n % 10;
        if(digit_seen[digit]) {
            digit_repeated[digit] = true;
            repeated = true;
        } else
            digit_seen[digit] = true;
        n /= 10;
    }

    if(repeated) {
        printf("Repeated digit(s):");
        for(digit = 0; digit < 10; digit++)
            if(digit_repeated[digit])
                printf(" %d", digit);
    } else
        printf("No repeated digit\n");
    
    return 0;
}
