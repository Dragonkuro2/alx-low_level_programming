#include "main.h"
#include <string.h>

/**
 * alloc_grid - this function allocate dynamically an array with 2D
 *
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: it depandts on the output of the function
 */

int **alloc_grid(int width, int height)
{
int i, j;
int **s;

if (width <= 0 || height <= 0)
	return (NULL);

s = (int **)malloc(sizeof(int *) * height);
if (s == NULL)
	return (NULL);

for (i = 0; i < height; i++)
{
	s[i] = (int *)malloc(sizeof(int) * width);
		if (s[i] == NULL)
		{
			free(s[i]);
			free(s);
			return (NULL);
		}
}
for (i = 0; i < height; i++)
	for (j = 0; j < width; j++)
		s[i][j] = 0;

return (s);
}
