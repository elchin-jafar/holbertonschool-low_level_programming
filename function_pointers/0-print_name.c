#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: name to print
 * @f: function pointer to print a name
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
