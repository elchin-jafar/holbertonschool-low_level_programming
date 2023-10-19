#include "main.h"

/**
 * _isupper - checks if input uppercase or not
 * @c: given input to check if it is uppercase or not
 * Return: 1 if uppercase 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
