#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 * starting with the first character
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int a = 0;
	int b = 0;
	char *y = str;
	int c;

	while (*y != '\0')
	{
		y++;
		a++;
	}
	b = a - 1;
	for (c = 0; o <= b; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[c];
		}
	}
	_putchar('\n');
}
