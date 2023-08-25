#include <stdio.h>
/**
 * firstfunc - before the main function is executed it prints
 * Return: Always 0
 */
void firstfunc(void) __attribute__ ((constructor));
void firstfunc(void)
{
	char *m;

	m = "You're beat! and yet, you must allow,\nI bore my house upon my back!\n";
	printf("%s", m);
}
