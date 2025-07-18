#include <stdbool.h>
#include <stdio.h>

int main(void) {
    bool digit_seen[10] = {false};
    int digit;
    long n;

    while(true) {

        // User input
        printf("Enter a number (Must be 9 digits long). [Type 0 to exit]: ");
        scanf("%ld", &n);
        if(n <= 0)
            break;

        // Using remainder operator to get the last digit and marking it as seen
        while(n > 0) {
            digit = n % 10;
            if(digit_seen[digit])
                break;
            digit_seen[digit] = true;
            n /= 10;
        }

        // Check if any digit is repeated
        if (n > 0)
            printf("Repeated digit\n");
        else
            printf("No repeated digit\n");

        // Clear array of seen digits
        for(digit = 0; digit < sizeof(digit_seen); digit++) {
            digit_seen[digit] = false;
        }
    }

    return 0;
}
