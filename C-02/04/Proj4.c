#include <stdio.h>

int main(void) {
    float amount;

    printf("Enter an amount: ");
    scanf("%f", &amount);

    amount += amount * 0.05;

    printf("\nWith tax added: $%.2f\n", amount);

    return 0;
}
