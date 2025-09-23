#include <stdio.h>

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);

int d1 = 480, // 8:00 a.m
    d2 = 583, // 9:43 a.m
    d3 = 679, // 11:19 a.m
    d4 = 767, // 12:47 p.m
    d5 = 840, // 2:00 p.m
    d6 = 945, // 3:45 p.m
    d7 = 1140, // 7:00 p.m
    d8 = 1305; // 9:45 p.m

int main(void) {
    int hour,
        minute,
        total_minutes,
        departure,
        arrival;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    total_minutes = (hour * 60) + minute;

    find_closest_flight(total_minutes, &departure, &arrival);

    printf("Closest departure time is %d:%.2d %s, arriving at %d:%.2d %s",
            departure / 60, departure % 60, departure < 720 ? "a.m" : "p.m",
            arrival / 60, arrival % 60, arrival < 720 ? "a.m" : "p.m");

    return 0;
}


void find_closest_flight(int desired_time, int *departure_time, int *arrival_time) {
    
    if(desired_time <= d1 + (d2 - d1) / 2) {
        *departure_time = 480;
        *arrival_time = 616;
    }
    else if(desired_time < d2 + (d3 - d2) / 2) {
        *departure_time = 583;
        *arrival_time = 712;
    }
    else if(desired_time < d3 + (d4 - d3) / 2) {
        *departure_time = 679;
        *arrival_time = 811;
    }
    else if(desired_time < d4 + (d5 - d4) / 2) {
        *departure_time = 767;
        *arrival_time = 900;
    }
    else if(desired_time < d5 + (d6 - d5) / 2) {
        *departure_time = 840;
        *arrival_time = 968;
    }
    else if(desired_time < d6 + (d7 - d6) / 2) {
        *departure_time = 945;
        *arrival_time = 1175;
    }
    else if(desired_time < d7 + (d8 - d7) / 2) {
        *departure_time = 1140;
        *arrival_time = 1280;
    }
    else {
        *departure_time = 1305;
        *arrival_time = 1438;
    }
}
