#include "main.h"

/**
* print_error - print file close error.
* @file_des: file descriptor
*
* Return: None.
*/

void print_error(int file_des)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_des);
	exit(100);
}

/**
* main - copies the content of a file to another file.
* @argc: The number of arguments supplied to the program.
* @argv: An array of pointers to the arguments.
* Return: Always success.
*/
int main(int argc, char *argv[])
{
	int from, to, wc;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); }
	from = open(argv[1], O_RDONLY);
	if (argv[1] == NULL || from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98); }

	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(from);
		exit(99); }
	while ((wc = read(from, buffer, 1024)) > 0)
	{
		if (wc != write(to, buffer, wc))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(from);
			close(to);
			exit(99);
	}}
	if (wc < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98); }
	if (close(from) < 0)
		print_error(from);
	if (close(to) < 0)
		print_error(to);
return (0);
}
