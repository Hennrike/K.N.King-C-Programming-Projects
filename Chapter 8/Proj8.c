#include <stdio.h>

#define ROWS 5
#define COLUMNS 5

int main(void) {
    int array_of_ints[ROWS][COLUMNS] = {0};
    int i, j, total;

    // User input
    for(i = 0; i < ROWS; i++) {
        printf("Enter student %d grades: ", i + 1);
        scanf("%d %d %d %d %d",
                &array_of_ints[i][0],
                &array_of_ints[i][1],
                &array_of_ints[i][2],
                &array_of_ints[i][3],
                &array_of_ints[i][4]);
    }

    // Print total and average grades
    printf("----------------------------------\n");
    printf("\t\tTotal\tAverage");
    for(i = 0; i < ROWS; i++) {
        for(j = 0; j < COLUMNS; j++)
            total += array_of_ints[i][j];

        printf("\nStudent %d\t%d\t%d", i + 1, total, total/COLUMNS);
        total = 0;
    }
    
    return 0;
}
