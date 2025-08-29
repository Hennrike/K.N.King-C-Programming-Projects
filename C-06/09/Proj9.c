#include <stdio.h>

int main(void) {
    int month_days, week_day, i;

    printf("Enter number of days in month: ");
    scanf("%d", &month_days);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &week_day);

    for(i = 1; i < week_day; i++) {
        printf("\t");
    }

    for(i = 1; i <= month_days; i++) {
        if((i + week_day - 1) % 7 == 0) {
            printf("%2d\n", i);
        } else {
            printf("%2d\t", i);
        }
    }

    return 0;
}
