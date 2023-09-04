#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int w1 = 0, w2, fp;

	if (!filename)
		return (-1);

	fp = open(filename, O_WRONLY | O_APPEND);
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
