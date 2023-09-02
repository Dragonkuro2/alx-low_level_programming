#include "main.h"

/**
 * is_palindrome - Check if a string is a palindrome
 * @s: Pointer to the input string
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */

int is_palindrome(char *s);

/**
 * check - Recursive function to check if a substring is a palindrome
 * @s: Pointer to the input string
 * @start: Starting index of the substring
 * @end: Ending index of the substring
 * @mod: Modulo value to handle strings with odd or even lengths
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise
 */

int check(char *s, int start, int end, int mod);

/**
 * last_index - Calculate the last index of a string
 * @s: Pointer to the input string
 *
 * Return: The last index of the string
 */

int last_index(char *s)
{
int n = 0;

if (*s > '\0')
n = n + last_index(s + 1) + 1;

return (n);
}

/**
 * is_palindrome - Check if a string is a palindrome
 * @s: Pointer to the input string
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
int end = last_index(s);
return (check(s, 0, end - 1, end % 2));
}

/**
 * check - Recursive function to check if a substring is a palindrome
 * @s: Pointer to the input string
 * @start: Starting index of the substring
 * @end: Ending index of the substring
 * @mod: Modulo value to handle strings with odd or even lengths
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise
 */

int check(char *s, int start, int end, int mod)
{
if ((start == end && mod != 0) || (start == end + 1 && mod == 0))
return (1);
else if (s[start] != s[end])
return (0);
else
return (check(s, start + 1, end - 1, mod));
}
