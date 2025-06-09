#include <stdio.h>

int main(void) {
    int num;
    int day, month, year;
    float price;

    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter unit price: ");
    scanf("%f", &price);
    printf("Enter purchase date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    printf("Item\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");
    printf("%-10d\t$%7.2f\t%.2d/%.2d/%d\n", num, price, day, month, year);

    return 0;
}