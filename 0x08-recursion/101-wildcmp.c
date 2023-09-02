#include "main.h"

#include "main.h"

/**
 * move_past_star - Move past asterisk ('*') characters in a string
 *
 * @s2: Pointer to the input string
 *
 * This function takes a pointer to a string and recursively moves past
 * asterisk characters ('*') in the string until it reaches the first
 * character that is not an asterisk.
 *
 * Return: A pointer to the first character that is not an asterisk ('*').
 */
char *move_past_star(char *s2)
{
if (*s2 == '*')
return (move_past_star(s2 + 1));
else
return (s2);
}

int wildcmp(char *s1, char *s2);

/**
 * inception - Check if two strings match, considering wildcards
 *
 * @s1: Pointer to the first input string
 * @s2: Pointer to the second input string with wildcards
 *
 * This function recursively compares two strings, @s1 and @s2, with
 * support for wildcard character '*'. It returns 1 if the strings match
 * with wildcards, and 0 otherwise.
 *
 * Return: 1 if the strings match with wildcards, 0 otherwise.
 */
int inception(char *s1, char *s2)
{
int ret = 0;

if (*s1 == 0)
return (0);
if (*s1 == *s2)
ret += wildcmp(s1 + 1, s2 + 1);
ret += inception(s1 + 1, s2);
return (ret);
}

/**
 * wildcmp - Compare two strings, considering wildcards
 *
 * @s1: Pointer to the first input string
 * @s2: Pointer to the second input string with wildcards
 *
 * This function recursively compares two strings, @s1 and @s2, with
 * support for wildcard character '*'. It returns 1 if the strings match
 * with wildcards, and 0 otherwise.
 *
 * Return: 1 if the strings match with wildcards, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
int ret = 0;

if (!*s1 && *s2 == '*' && !*move_past_star(s2))
return (1);
if (*s1 == *s2)
{
if (!*s1)
return (1);
return (wildcmp(s1 + 1, (*s2 == '*') ? s2 : s2 + 1));
}
if (!*s1 || !s2)
return (0);
if (*s2 == '*')
{
s2 = move_past_star(s2);
if (!*s2)
return (1);
if (*s1 == *s2)
ret += wildcmp(s1 + 1, s2 + 1);
ret += inception(s1, s2);
return (!!ret);
}
return (0);
}
