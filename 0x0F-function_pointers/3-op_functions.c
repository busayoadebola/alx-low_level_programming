#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - to add 2 numbers
 * @a: the first number
 * @b: the second number
 * Return: the sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - to subtract 2 numbers
* @a: the first number
* @b: the second number
* Return: the balance
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - to multiply 2 numbers
* @a: the first number
* @b: the second number
* Return: the amount
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - to divide 2 numbers
* @a: the first number
* @b: the second number
* Return: the amount
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
* op_mod - to divide 2 numbers and return the remainder
* @a: the first number
* @b: the second number
* Return: the amount
*/

int op_mod(int a, int b)
{
	return (a % b);
}
