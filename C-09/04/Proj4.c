#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

#define ROWS 10
#define COLS 10

void generate_random_walk(char walk[ROWS][COLS]);
void print_array(char walk[ROWS][COLS]);


int main(void) {
    char grid[ROWS][COLS];

    generate_random_walk(grid);
    print_array(grid);
    
    return 0;
}


void generate_random_walk(char walk[ROWS][COLS]){
    char letter = 'A';
    int i, j, new_i, new_j, dir, blocked;
    int directions[4][2] = {
        {0, 1}, {0, -1}, {-1, 0}, {1, 0} // right, left, up, down
    };

    for(i = 0; i < ROWS; i++) {
        for(j = 0; j < COLS; j++) {
            walk[i][j] = '.';
        }
    }

    srand((unsigned)time(NULL));

    i = j = 0;
    walk[i][j] = 'A';
    while(letter < 'Z') {
        blocked = 1;
        for(dir = 0; dir < 4; dir++) {
            new_i = i + directions[dir][0];
            new_j = j + directions[dir][1];

            if((new_i >= 0 && new_i < 10) && (new_j >= 0 && new_j < 10) && (walk[new_i][new_j] == '.')) {
                blocked = 0;
                break;
            }
        } if(blocked) break;

        dir = rand() % 4;
        new_i = i + directions[dir][0];
        new_j = j + directions[dir][1];

        if((new_i >= 0 && new_i < 10) && (new_j >= 0 && new_j < 10) && (walk[new_i][new_j] == '.')) {
            walk[new_i][new_j] = ++letter;
            i = new_i;
            j = new_j;
        }
    }
}


void print_array(char walk[ROWS][COLS]) {
    int i, j;

    for(i = 0; i < ROWS; i++) {
        for(j = 0; j < COLS; j++) {
            printf("  %c", walk[i][j]);
        }
        printf("\n");
    }
}
