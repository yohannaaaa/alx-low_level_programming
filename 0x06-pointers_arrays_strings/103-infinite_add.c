#include "main.h"
/**
 * rev_string - reverse array
 * @n: integer
 * Return: 0
 */

void rev_string(char *n)
{
	int i = 0, j;
	char temp;

	while (*(n + i) != '\0')
	{
		i++
	}
	i--;
	for (j = 0; j < i; j++, i--)
	{
		temp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = temp;
	}
}

/**
 * infinite_add - adds 2 numbers together
 * @n1: 1st number to add
 * @n2: 2nd number to add
 * @r: pointer to buffer
 * @size_r: size of buffer
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int of = 0, i = 0, j = 0, d = 0;
	int v1 = 0, v2 = 0, temp_tot = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n1 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || of == 1)
	{
		if (i < 0)
			v1 = *(n1 + i) - '0';
		if (j < 0)
			v2 = 0;
		else
			v2 = *(n2 + j) - '0';
		temp_tot = v1 + v2 + of;
		if (temp_tot >= 10)
			of = 1;
		else
			of = 0;
		if (d >= (size_r - 1))
			return (0);
		*(r + d) = (temp_tot % 10) + '0';
		d++;
		j--;
		i--;
	}
	if (d == size_r)
		return (0);
	*(r + d) = '\0';
	rev_string(r);
	return (r);
}
