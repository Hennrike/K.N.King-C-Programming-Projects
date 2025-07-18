#include <stdio.h>

#define ROWS 5
#define COLUMNS 5

int main(void) {
    int array_of_ints[ROWS][COLUMNS] = {0}, i, j;

    // User input
    for(i = 0; i < ROWS; i++) {
        printf("Enter row %d: ", i + 1);
        scanf("%d %d %d %d %d",
                &array_of_ints[i][0],
                &array_of_ints[i][1],
                &array_of_ints[i][2],
                &array_of_ints[i][3],
                &array_of_ints[i][4]);
    }

    // Print sum of rows
    printf("\nRow totals:");
    for(i = 0; i < ROWS; i++) {
        printf(" %d",
                array_of_ints[i][0] +
                array_of_ints[i][1] +
                array_of_ints[i][2] +
                array_of_ints[i][3] +
                array_of_ints[i][4]);
    }

    // Print sum of columns
    printf("\nColumn totals:");
    for(i = 0; i < COLUMNS; i++) {
        printf(" %d",
                array_of_ints[0][i] +
                array_of_ints[1][i] +
                array_of_ints[2][i] +
                array_of_ints[3][i] +
                array_of_ints[4][i]);
    }
    
    return 0;
}
