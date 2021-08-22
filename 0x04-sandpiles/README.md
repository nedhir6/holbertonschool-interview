## snadpiles
function that computes the sum of two sandpiles:
* Prototype: void sandpiles_sum(int grid1[3][3], int grid2[3][3]);
* Both grid1 and grid2 are individually stable
* A sandpile is considered stable when none of its cells contains more than 3 grains
* When the function is done, grid1 must be stable
* grid1 must be printed before each toppling round, only if it is unstable.