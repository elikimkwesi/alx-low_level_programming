#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or the filename is NULL - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, z, lenght = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenght = 0; text_content[lenght];)
			lenght++;
	}

	i = open(filename, O_WRONLY | O_APPEND);
	z = write(i, text_content, lenght);

	if (i == -1 || z == -1)
		return (-1);

	close(i);

	return (1);
}
