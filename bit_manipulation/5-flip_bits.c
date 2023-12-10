#include "main.h"

/**
 * flip_bits - counts number of bits which need to flip
 * @n: number
 * @m: number to flip n to
 *
 * Return: gets from n to m bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsidgned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
