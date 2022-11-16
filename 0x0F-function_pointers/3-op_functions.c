#include "3-calc.h"

/**
 * op_add - addition of two integers
 * @a: the first number
 * @b: the second number
 *
 * Return: the addition of the numbers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subbtraction of integers
 * @a: first number
 * @b: second number
 *
 * Return: the difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multipliction of integers
 * @a: first number
 * @b: second number
 *
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two integers
 * @a: first number
 * @b: second number
 *
 * Return: the division of thr integers
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - module of two integers
 * @a: first number
 * @b: second number
 *
 * Return: remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
