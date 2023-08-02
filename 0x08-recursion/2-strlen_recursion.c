#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: The string to be measured
 * Return: The lenth of the string
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
