#include "main.h"
/**
 * puts_half - function that prints half of a string
 * @str: input string
 */
void puts_half(char *str)
{
	int f_s = 0, h_s;

	while (str[f_s] != '\0')
		f_s++;

	h_s = f_s / 2;

	if (f_s % 2 == 1)
		h_s++;

	while (h_s < f_s)
	{
		_putchar(str[h_s]);
		h_s++;
	}
	_putchar('\n');
}
