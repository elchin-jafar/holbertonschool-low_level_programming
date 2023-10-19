#include "main.h"
#include <stdio.h>

int main(void)
{
	int res;

	res = _isupper('U');

	printf("%d\n", res);

	res = _isupper('n');

	printf("%d\n", res);

	return (0);
}
