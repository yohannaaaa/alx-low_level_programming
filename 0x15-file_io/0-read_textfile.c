#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: A pointer to the name of the file.
 * @letters: number of letters the function reads and prints
 * Return: the number of letters printed, or 0 if it fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int r, w;
	int fp;

	if (filename == NULL)
		return (0);

	fp = open(filename, O_RDONLY);
	if (fp < 0)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	r = read(fp, buffer, letters);
	if (r < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[r] = '\0';
	close(fp);

	w = write(STDOUT_FILENO, buffer, r);
	free(buffer);

	if (w < 0)
		return (0);

return (w);
}
