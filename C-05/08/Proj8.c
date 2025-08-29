#include <stdio.h>

int main(void) {
    int hour,
        minute,
        total_minutes,
        d1 = 480, // 8:00 a.m
        d2 = 583, // 9:43 a.m
        d3 = 679, // 11:19 a.m
        d4 = 767, // 12:47 p.m
        d5 = 840, // 2:00 p.m
        d6 = 945, // 3:45 p.m
        d7 = 1140, // 7:00 p.m
        d8 = 1305; // 9:45 p.m

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    total_minutes = (hour * 60) + minute;

    printf("Closest departure time is ");

    if(total_minutes <= d1 + (d2 - d1) / 2)
        printf("8:00 a.m, arriving at 10:16 a.m.\n");
    else if(total_minutes < d2 + (d3 - d2) / 2)
        printf("9:43 a.m, arriving at 11:52 a.m.\n");
    else if(total_minutes < d3 + (d4 - d3) / 2)
        printf("11:19 a.m, arriving at 1:31 p.m.\n");
    else if(total_minutes < d4 + (d5 - d4) / 2)
        printf("12:47 p.m, arriving at 3:00 p.m.\n");
    else if(total_minutes < d5 + (d6 - d5) / 2)
        printf("2:00 p.m, arriving at 4:08 p.m.\n");
    else if(total_minutes < d6 + (d7 - d6) / 2)
        printf("3:45 p.m, arriving at 5:55 p.m.\n");
    else if(total_minutes < d7 + (d8 - d7) / 2)
        printf("7:00 p.m, arriving at 9:20 p.m.\n");
    else
        printf("9:45 p.m, arriving at 11:58 p.m.\n");

    return 0;
}
