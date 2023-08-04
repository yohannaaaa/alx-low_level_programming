#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check - string there are digit
 * @str: array string
 *
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{
	/*Declaring variables*/
	unsigned int c;

	c = 0;
	while (c < strlen(str)) /*count string*/

	{
		if (!isdigit(str[c])) /*checks str there are digit*/
		{
			return (0);
		}

		c++;
	}
	return (1);
}

/**
 * main - prints the number of arguments passed into it.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0 (Success)
 */

int main(int argc, char *argv[])
{
	/*variable declaration*/
	int c, str_to_int;
	int sum = 0;

	c = 1;
	while (c < argc) /*scans the whole array*/
	{
		if (check_num(argv[c]))

		{
			str_to_int = atoi(argv[c]); /*ATOI --> convert string to int*/
			sum += str_to_int;
		}

		/*other condition if the number contains symbols that are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}

		c++;
	}

	printf("%d\n", sum); /*prints sum*/

	return (0);
}
