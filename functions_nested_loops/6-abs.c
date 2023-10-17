#include "main.h"

/**
 * _abs - prints abs of given num
 * @c: num can be positive or negative
 *
 * Return: abs of input
 */

int _abs(int c)
{
	if (c < 0)
	{
		return (c * -1);
	}
	else
	{
		return (c);
	}
}
