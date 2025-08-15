#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

#define ROWS 10
#define COLS 10

int main(void) {
    char grid[ROWS][COLS], letter = 'A';
    int i, j, new_i, new_j, dir, blocked;
    int directions[4][2] = {
        {0, 1}, {0, -1}, {-1, 0}, {1, 0} // right, left, up, down
    };

    for(i = 0; i < ROWS; i++) {
        for(j = 0; j < COLS; j++) {
            grid[i][j] = '.';
        }
    }

    srand((unsigned)time(NULL));

    i = j = 0;
    grid[i][j] = 'A';
    while(letter < 'Z') {
        blocked = 1;
        for(dir = 0; dir < 4; dir++) {
            new_i = i + directions[dir][0];
            new_j = j + directions[dir][1];

            if((new_i >= 0 && new_i < 10) && (new_j >= 0 && new_j < 10) && (grid[new_i][new_j] == '.')) {
                blocked = 0;
                break;
            }
        } if(blocked) break;

        dir = rand() % 4;
        new_i = i + directions[dir][0];
        new_j = j + directions[dir][1];

        if((new_i >= 0 && new_i < 10) && (new_j >= 0 && new_j < 10) && (grid[new_i][new_j] == '.')) {
            grid[new_i][new_j] = ++letter;
            i = new_i;
            j = new_j;
        }
    }

    for(i = 0; i < ROWS; i++) {
        for(j = 0; j < COLS; j++) {
            printf("  %c", grid[i][j]);
        }
        printf("\n");
    }
    return 0;
}
