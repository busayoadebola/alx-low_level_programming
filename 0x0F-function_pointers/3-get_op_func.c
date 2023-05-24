#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - to get the operand needed by
 * the user
 * @s: the operand
 * Return: the operand and its function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int a = 0;

	while (ops[a].op != NULL && *(ops[a].op) != *s)
		a++;

	return (ops[a].f);
}
