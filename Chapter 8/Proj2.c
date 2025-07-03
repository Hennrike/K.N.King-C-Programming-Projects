#include <stdbool.h>
#include <stdio.h>

int main(void) {
    int digit_seen[10] = {0};
    int digit;
    unsigned long n;

    printf("Enter a number (Must be 9 digits long): ");
    scanf("%ld", &n);

    while(n > 0) {
        digit = n % 10;
        digit_seen[digit] += 1;
        n /= 10;
    }

    printf("Digit:\t\t0 1 2 3 4 5 6 7 8 9\n");
    printf("Occurrences:\t");
    for(digit = 0; digit < 10; digit++) {
        printf("%d ", digit_seen[digit]);
    }
    printf("\n");
    
    return 0;
}
