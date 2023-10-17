#include "main.h"

/**
 * _islower - finds if output lower case or uppercase
 * @c: First member
 *
 * Return: 1 if input lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	return (0);
}
