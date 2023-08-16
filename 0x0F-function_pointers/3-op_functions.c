#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns sum
 * @a: number
 * @b: number
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns difference
 * @a: number
 * @b: number
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns product
 * @a: number
 * @b: number
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns division
 * @a: number
 * @b: number
 * Return: quotient of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns remainder
 * @a: number
 * @b: number
 * Return: remainder of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
