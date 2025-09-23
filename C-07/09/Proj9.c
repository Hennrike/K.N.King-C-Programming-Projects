#include <stdio.h>
#include <ctype.h>

int main(void) {
    int hour, minute, time24;
    char meridiem;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &hour, &minute, &meridiem);

    hour = (hour == 12 ? 0 : hour);
    time24 = (((toupper(meridiem) == 'P' ? 12 : 0) + hour) * 60) + minute;

    printf("Equivalent 24-hour time: %d:%.2d\n", time24/60, time24 % 60);

    return 0;
}
