#include "main.h"

/**
 * cap_string - capitalising all words in given string
 * @str: given string
 * Return: given string after capitalising
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))
			i++;

		if (
				str[i - 1] == ' ' ||
				str[i - 1] == ',' ||
				str[i - 1] == ';' ||
				str[i - 1] == '.' ||
				str[i - 1] == '!' ||
				str[i - 1] == '?' ||
				str[i - 1] == '"' ||
				str[i - 1] == '(' ||
				str[i - 1] == ')' ||
				str[i - 1] == '{' ||
				str[i - 1] == '}' ||
				str[i - 1] == '\n' ||
				str[i - 1] == '\t'
		   )
			str[i] -= 32;
		 i++;
	}
	return (str);
}
