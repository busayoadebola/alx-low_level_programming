#include "shell.h"
#include <stdbool.h>

/**
 * isStandardInputTerminal - returns true if shell is in interactive mode
 * @info: struct address
 *
 * Return: 1 if in interactive, 0 otherwise
 */
int isStandardInputTerminal(info_t *info)
{
    int isTerminal = isatty(STDIN_FILENO);
    int isStandardDescriptor = (info->readfd <= 2);
    
    return (isTerminal && isStandardDescriptor);
}

/**
 * is_delim - checks if character is a delimeter
 * @c: the char to check
 * @delim: the delimeter string
 * Return: 1 if true, 0 if false
 */
int is_delim(char c, char *delim)
{
	while (*delim)
		if (*delim++ == c)
			return (1);
	return (0);
}

/**
 * _isalpha - checks for alphabetic character
 * @c: The character to input
 * Return: 1 if c is alphabetic, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/**
 * _atoi - converts a string to an integer
 * @s: the string to be converted
 * Return: 0 if no numbers in string, converted number otherwise
 */

int _atoi(const char* s) {
    int str_sign = 1;
    unsigned int result = 0;
    int i = 0;

    while (s[i] == ' ')
        i++;

    if (s[i] == '-') {
        str_sign = -1;
        i++;
    } else if (s[i] == '+') {
        i++;
    }

    while (s[i] >= '0' && s[i] <= '9') {
        result = result * 10 + (s[i] - '0');
        i++;
    }

    return str_sign * result;
}

