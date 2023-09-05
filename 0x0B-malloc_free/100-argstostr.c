#include "main.h"
#include <string.h>

/**
 * argstostr - this function write the word with new line
 *
 * @ac: the number of elemnts
 * @av: array
 *
 * Return: it depands on the output of the function
 */

char *argstostr(int ac, char **av)
{
int i, len, size = 0, new = 0;
char *newarray;

if (ac == 0 || av == NULL)
	return (NULL);

for (i = 0; i < ac; i++)
	size += strlen(av[i]) + 1;

newarray = (char *)malloc(sizeof(char) * size + 1);
if (newarray == NULL)
	return (NULL);

for (i = 0; i < ac; i++)
{
	for (len = 0; av[i][len] != '\0'; len++)
	{
	newarray[new] = av[i][len];
	new++;
	}
newarray[new] = '\n';
new++;
}

newarray[new] = '\0';

if (newarray == NULL)
	return (NULL);

return (newarray);
}
