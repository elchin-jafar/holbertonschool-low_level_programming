#include "main.h"

/**
 * find_length - finds length of given string
 * @s: given string
 * Return: length of given string
 */

int find_length(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + find_length(s + 1));
}

/**
 * find_palindrome - recursive logic of finding palindrome
 * @s: given string to check
 * @length: length of s come from upper func
 * @index: index of string
 * Return: 1 if palindrome, 0 otherwise
 */

int find_palindrome(char *s, int length, int index)
{
	if (index == length / 2)
		return (1);

	if (s[index] == s[length - index - 1])
		return (find_palindrome(s, length, index + 1));

	return (0);
}

/**
 * is_palindrome - checks if given string is palindrome
 * @s: given string
 * Return: 1 if s is palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int i = 0, n = find_length(s), res;

	if (n == 0)
		return (1);

	res = find_palindrome(s, n, i);

	return (res);
}
