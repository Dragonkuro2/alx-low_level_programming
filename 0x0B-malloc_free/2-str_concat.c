#include "main.h"
#include <string.h>

/**
 * str_concat - this function prints s1 + s2
 *
 * @s1: the first text
 * @s2: the second text
 *
 * Return: depands on the output of the function
 */

char *str_concat(char *s1, char *s2)
{
size_t i, j = 0;

char *s3 = (char *)malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 2));
if (s3 == NULL)
        return (NULL);
for (i = 0; i <= strlen(s1); i++)
{
	*(s3 + i) = *(s1 + i);
if (*(s3 + i) == '\0')
	*(s3 + i) = ' ';
}
for (; i < (strlen(s1) + strlen(s2) + 2); i++, j++)
	*(s3 + i) = *(s2 + j);
return (s3);
}
