#include "main.h"

/**
 * create_file - creates a file.
 * @filename: the name of the file to be created
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int i, w, o;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; )
			i++;
	}
	else
		text_content = "";
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (text_content != NULL)
		w = write(o, text_content, i);
	else
		w = write(o, NULL, 0);
	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}
