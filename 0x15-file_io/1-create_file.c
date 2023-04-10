#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: pointer to the name of the file to create.
 * @text_content: pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int d, z, lenght = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenght = 0; text_content[lenght];)
			lenght++;
	}

	d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	z = write(d, text_content, lenght);

	if (d == -1 || z == -1)
		return (-1);

	close(d);

	return (1);
}
