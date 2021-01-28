#include <stdio.h>
#include <math.h>

#define GRID_ROWS 20
#define GRID_COLS 20

char grid1[GRID_ROWS][GRID_COLS] = {{0}, {0}};
char grid2[GRID_ROWS][GRID_COLS] = {{0}, {0}};

char **current_generation = grid1;
char **next_generation = grid2;

#define CG (current_generation)
#define NG (next_generation)

void init()
{
    int i,j;

    for( i = 0; i < GRID_ROWS; ++i)
        for( j = 0; j < GRID_COLS; ++j)
            CG[i][j] = rand() > 0.5;
}

int main(int argc, char **argv)
{
    
}
