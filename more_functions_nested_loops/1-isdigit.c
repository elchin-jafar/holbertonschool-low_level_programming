#include "main.h"

/**
 * _isdigit - checks if given input digit or not
 * @c: given input to check its diginity
 * Return: 1 if c is digit 0 if not
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	return (0);
}
