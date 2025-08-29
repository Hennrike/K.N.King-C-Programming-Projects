#include <stdio.h>

int main(void) {
    int month1, day1, year1,
        month2, day2, year2;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month1, &day1, &year1);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month2, &day2, &year2);

    if((year2 > year1 || year1 > 25) && (month2 > month1) && (day2 > day1))
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", month1, day1, year1, month2, day2, year2);
    else
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", month2, day2, year2, month1, day1, year1);

    return 0;
}
