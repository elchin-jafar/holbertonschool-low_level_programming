#include "main.h"

/**
 * _isalpha - checks if given character is in alphabet
 *
 * @c: First member
 * Return: 1 if alphabet, 0 if not
 */

int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	return (0);
}
