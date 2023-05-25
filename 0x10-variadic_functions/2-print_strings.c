#include "variadic_functions.h"

/**
 * print_strings - to print all the strings
 * @separator: to seperate the strings
 * @n: the number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);
	i = 0;
	while (i < n)
	{
		str = va_arg(ap, char *);

		printf("%s", str);
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		if (str == NULL)
		{
			printf("(nil)");
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
