#include <stdlib.h>
#include <stdio.h>

#include "sandpiles.h"

/**
 * sandpiles_sum -  Computes the sum of two sandpiles
 * @grid1: Left 3x3 grid
 * @grid2: Right 3x3 grid
 * Return: void
 */
void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
int i, j;

for (i = 0; i < 3; i++)
for (j = 0; j < 3; j++)
grid1[i][j] += grid2[i][j];
while (not_stable(grid1))
{
printf("=\n");
print_grid(grid1);
stabilize(grid1);
}
}

/**
 * not_stable -  checks stability of a sandpile
 * @grid: 3x3 grid
 * Return: 1 if grid is not stable
 */
int not_stable(int grid[3][3])
{
int i, j;

for (i = 0; i < 3; i++)
for (j = 0; j < 3; j++)
if (grid[i][j] > 3)
return (1);
return (0);
}

/**
 * stabilize -  stabilizes a sandpile
 * @grid: 3x3 grid to stabilize
 *
 */
void stabilize(int grid[3][3])
{
int i, j;
int grid_tmp[3][3];

for (i = 0; i < 3; i++)
for (j = 0; j < 3; j++)
grid_tmp[i][j] = grid[i][j];
for (i = 0; i < 3; i++)
for (j = 0; j < 3; j++)
if (grid_tmp[i][j] > 3)
{
grid[i][j] -= 4;
if (j < 2)
grid[i][j + 1] += 1;
if (i < 2)
grid[i + 1][j] += 1;
if (j > 0)
grid[i][j - 1] += 1;
if (i > 0)
grid[i - 1][j] += 1;
}
}

/**
 * print_grid - Print 3x3 grid
 * @grid: 3x3 grid
 *
 */
void print_grid(int grid[3][3])
{
int i, j;

for (i = 0; i < 3; i++)
{
for (j = 0; j < 3; j++)
{
if (j)
printf(" ");
printf("%d", grid[i][j]);
}
printf("\n");
}
}
