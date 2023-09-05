#include "main.h"
#include <string.h>

/**
 * free_grid - this function free the array height
 *
 * @grid: the array
 * @height: the height of the array
 *
 */

void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
	free(grid[i]);
free(grid);

}
