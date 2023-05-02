#include "main.h"

/**
 * rev_string - to reverse a string
 * @s: the string to reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int a = 0, b = 0;

	while (s[a] != '\0')
		a++;
	while (b < a)
	{
		a--;
		rev = s[b];
		s[b] = s[a];
		s[a] = rev;
		b++;
	}
}
