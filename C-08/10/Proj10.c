#include <stdio.h>

int main(void) {
    int i, min, hour, minute, total_minutes;
    int departures[8] = {
        480, // 8:00 a.m
        583, // 9:43 a.m
        679, // 11:19 a.m
        767, // 12:47 p.m
        840, // 2:00 p.m
        945, // 3:45 p.m
        1140, // 7:00 p.m
        1305 // 9:45 p.m
    };
    int arrivals[8] = {
        616, // 10:16 a.m
        712, // 11:52 a.m
        811, // 1:31 p.m
        900, // 3:00 p.m
        968, // 4:08 p.m
        1075, // 5:55 p.m
        1280, // 9:20 p.m
        1438 // 11:58 p.m
    };

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    total_minutes = (hour * 60) + minute;

    printf("Closest departure time is ");

    for(i = 0; i < 6; i++) {
        if(total_minutes <= (departures[i] + departures[i+1]) / 2) {
            printf("%d:%.2d %s, arriving at %d:%.2d %s.\n", 
                departures[i] < 780 ? departures[i] / 60 : departures[i] / 60 - 12, departures[i] % 60, departures[i] < 720 ? "a.m" : "p.m",
                arrivals[i] < 780 ? arrivals[i] / 60 : arrivals[i] / 60 - 12, arrivals[i] % 60, arrivals[i] < 720 ? "a.m" : "p.m");

            return 0;
        }
    }

    printf("%d:%.2d %s, arriving at %d:%.2d %s.\n", 
        departures[7] < 780 ? departures[7] / 60 : departures[7] / 60 - 12, departures[7] % 60, departures[7] < 720 ? "a.m" : "p.m",
        arrivals[7] < 780 ? arrivals[7] / 60 : arrivals[7] / 60 - 12, arrivals[7] % 60, arrivals[7] < 720 ? "a.m" : "p.m");

    return 0;
}
