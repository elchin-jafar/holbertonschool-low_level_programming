#ifndef _HEADER_
#define _HEADER_
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);

typedef struct format_types
{
	char *identifier;
	void (*f)(char *separator, va_list args);
} f_dt;

#endif
