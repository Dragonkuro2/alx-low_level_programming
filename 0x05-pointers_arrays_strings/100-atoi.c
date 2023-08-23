#include "main.h"

/**
  * _atoi - this function turn the charchters to integrs
  *
  * @s: this input carachter
  *
  * Return: it return the integrs
  */
int _atoi(char *s)
{
	int i = 0, sign = 1, res = 0;
while (s[i])
{
	if (s[i] == '-')
		sign *= -1;
i++;
}
i = 0;
while (s[i] != '\0')
{
	if (s[i] <= '9' && s[i] >= '0')
	{
		res = (res * 10) + (s[i] - '0');
	}
		i++;
}

return (res * sign);
}
