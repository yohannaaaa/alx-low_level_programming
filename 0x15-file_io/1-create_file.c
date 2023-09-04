#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 * Return: 1 on success, -1 if it fails
 */

int create_file(const char *filename, char *text_content)
{
	int w1 = 0, w2, fp;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fp < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[w1])
			w1++;

		w2 = write(fp, text_content, w1);
		if (w2 != w1)
			return (-1);
	}

close(fp);
return (1);
}
