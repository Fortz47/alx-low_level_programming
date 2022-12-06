#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: filename
 * @text_content: content to append to file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;
	}

	o = open(filename, O_APPEND | O_RDWR);
	w = write(o, text_content, i);

	if (o == -1 || w == -1)
		return (-1);

	return (1);
}
