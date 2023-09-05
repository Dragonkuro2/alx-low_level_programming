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
else
{
s = (int **)malloc(sizeof(int *) * width);
if (s == NULL)
	return (NULL);

for (i = 0; i < width; i++)
{
	s[i] = (int *)malloc(sizeof(int) * height);
		if (s[i] == NULL)
			return (NULL);
}
for (i = 0; i < width; i++)
	for (j = 0; j < height; j++)
		s[i][j] = 0;

}
return (s);
free(s);
}
