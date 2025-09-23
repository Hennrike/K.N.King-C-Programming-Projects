#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main(void) {
    int num, denom;

    printf("Enter a fraction: ");
    scanf("%d/%d", &num, &denom);

    reduce(num, denom, &num, &denom);

    printf("in lowest terms: %d/%d\n", num, denom);

    return 0;
}


void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator) {
    int remainder;

    while(numerator != 0) {
        remainder = denominator % numerator;
        denominator = numerator;
        numerator = remainder;
    }

    *reduced_numerator /= denominator;
    *reduced_denominator /= denominator;
}
