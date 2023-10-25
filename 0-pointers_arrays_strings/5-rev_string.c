#include "main.h"

/**
 * rev_string - reverses given string
 * @s: given string
 */

void rev_string(char *s)
{
	char d;
	int i = 0, k;

	while (*(s + i) != '\0')
		i++;

	for (k = i - 1; k >= i / 2; k--)
	{
		d = *(s + k);
		*(s + k) = *(s + i - k - 1);
		*(s + i - k - 1) = d;
	}
}
