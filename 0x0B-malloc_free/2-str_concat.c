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
char *s3;
size_t len1, len2;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";

len1 = strlen(s1);
len2 = strlen(s2);

s3 = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
if (s3 == NULL)
	return (NULL);
strcpy(s3, s1);
strcat(s3, s2);

return (s3);
free(s3);

}
