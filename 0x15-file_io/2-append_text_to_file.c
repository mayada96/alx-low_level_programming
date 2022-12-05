#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 if the file exists and -1 if the file does not exist
 * or if you do not have the required permissions to write the file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, l;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (l = 0; text_content[l] != '\0'; )
			l++;
	}
	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, l);
	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}
