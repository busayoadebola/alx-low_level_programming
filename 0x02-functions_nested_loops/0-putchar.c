#include <stdio.h>
#include <unistd.h>

/**
 * main - A program to print putchar
 *
 * Return: 0 (correct)
 */

int main(void)
{
	write(1, "_putchar\n", 11);
	return (0);
}
