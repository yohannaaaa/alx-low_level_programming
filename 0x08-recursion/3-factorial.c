#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: number to return factorial from
 * Return: factorial of n
 */

int factorial(int n)
{
	int i;
	int res = 1;

	if (n == 0 || n == 1)
	{
		return (1);
	}
	for (i = 2; i <= n; i++)
	{
		res *= i;
	}
	return (res);
}
