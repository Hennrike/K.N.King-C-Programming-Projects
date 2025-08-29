#include <stdio.h>

int main(void) {
    float loan, rate, payment;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    printf("\n");

    loan -= payment + loan * rate / 100.0 / 12.0;
    printf("Balance remaining after first payment: $%.2f\n", loan);
    loan -= payment + loan * rate / 100.0 / 12.0;
    printf("Balance remaining after second payment: $%.2f\n", loan);
    loan -= payment + loan * rate / 100.0 / 12.0;
    printf("Balance remaining after third payment: $%.2f\n", loan);

    return 0;
}
