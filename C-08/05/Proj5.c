#include <stdio.h>

#define NUM_RATES ((int) (sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00

int main(void) {
    int i, low_rate, month, num_years, year;
    double value[5];

    // User input
    printf("Enter interest rate: ");
    scanf("%d", &low_rate);
    printf("Enter number of years: ");
    scanf("%d", &num_years);

    printf("\nYears");

    // Print interest rates
    for (i = 0; i < NUM_RATES; i++) {
        printf("%6d%%", low_rate + i);
        value[i] = INITIAL_BALANCE;
    }
    printf("\n");

    // Print table of compound interest
    for (year = 1; year <= num_years; year++) {
        printf("%3d ", year);
        for (i = 0; i < NUM_RATES; i++) {

            // Calculation of annual balance with monthly compounded interest
            for(month = 1; month <= 12; month++) {
                value[i] += ((double) (low_rate + i) / 12) / 100.0 * value[i];
            }
            printf("%7.2f", value[i]);
        }
        printf("\n");
    }

    return 0;
}
