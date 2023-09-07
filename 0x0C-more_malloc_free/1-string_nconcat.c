#include "main.h"

/**
 * string_nconcat - this function do the dynamic allocation of new text
 *
 * @s1: the first string
 * @s2: the second string
 * @n: the number of biyts that we wanna copy
 *
 * Return: the new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s3;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";

if (n >= strlen(s2))
	s3 = (char *)malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
else
	s3 = (char *)malloc(sizeof(char) * (strlen(s1) + n + 1));
if (s3 == NULL)
	return (NULL);

strcpy(s3, s1);
strncat(s3, s2, n);

return (s3);

}
