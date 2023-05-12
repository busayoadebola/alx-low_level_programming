#include <unistd.h>

/**
 * _putchar - to print out the value to stdout
 * @c: what to print
 *
 * Return: 0 on success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
