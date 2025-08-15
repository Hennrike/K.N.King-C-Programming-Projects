#include <stdio.h>

#define ROWS 5
#define COLS 5

int main(void) {
    int grades[ROWS][COLS];
    int i, j, total, high, low;

    for(i = 0; i < ROWS; i++) {
        printf("Enter quiz grades for student %d: ", i + 1);
        scanf("%d %d %d %d %d",
                &grades[i][0],
                &grades[i][1],
                &grades[i][2],
                &grades[i][3],
                &grades[i][4]);
    }

    printf("\n");

    printf("\t\tTotal\tAverage");
    for(i = 0; i < ROWS; i++) {
        total = 0;

        for(j = 0; j < COLS; j++) {
            total += grades[i][j];
        }

        printf("\nStudent %d\t%d\t%.1f", i + 1, total, (float) total/COLS);
    }

    printf("\n");

    printf("\n\t\tAverage\tLow\tHigh");
    for(i = 0; i < ROWS; i++) {
        total = 0;
        high = low = grades[0][i];

        for(j = 0; j < COLS; j++) {
            total += grades[j][i];
            if(grades[j][i] > high) {high = grades[j][i];}
            if(grades[j][i] < low) {low = grades[j][i];}
        }

        printf("\nQuiz %d\t\t%.1f\t%d\t%d", i + 1, (float) total/ROWS, low, high);
    }
    
    return 0;
}
