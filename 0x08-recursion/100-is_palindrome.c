#include "main.h"

/**
 * is_palindrome - to check iof a string is a
 * palindrome
 * @s: the string to check
 *
 * Return: 1 if true
 */

int is_palindrome(char *s)
{
	int n = _strlen_recursion(s);

	if (n == 0)
		return (1);
	return (palin(s, 0, n - 1));
}

/**
 * palin - to check a palindrome
 * @s: string to check
 * @str: start of a string
 * @e: end of string
 *
 * Return: 1 if true
 */

int palin(char *s, int str, int e)
{
	if (str == e)
		return (1);
	if (s[str] != s[e])
		return (0);
	if (str < e + 1)
		return (palin(s, str + 1, e - 1));
	return (1);
}
