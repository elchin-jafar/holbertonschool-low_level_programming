#include "main.h"

/**
 * _atoi - convert string to an integer
 * @s: string to convert
 * Return: converted integer
 */

int _atoi(char *s)
{
	int sign = 1, is_digits_started = 0;
	unsigned int res = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
		{
			is_digits_started = 1;
			res = (res * 10) + (*s - '0');
		}
		else if (is_digits_started)
			break;
	}

	return (res * sign);
}
