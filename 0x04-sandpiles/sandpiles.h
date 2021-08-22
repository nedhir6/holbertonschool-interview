#ifndef _SAND_PILES_H_
#define _SAND_PILES_H_
#include <stddef.h>


void sandpiles_sum(int grid1[3][3], int grid2[3][3]);
int not_stable(int grid[3][3]);
void stabilize(int grid[3][3]);
static void print_grid(int grid[3][3]);

#endif /* _SAND_PILES_H_ */
