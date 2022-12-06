#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: content to write in file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int i = 0, fd_open, fd_write;

	if (filename == NULL)
		return (-1);
	if (text != NULL)
	{
		while (text_content[i] != '\0')
			i++;
	}

	fd_open = open("filename", O_CREAT | O_RDWR | O_TRUNC, 600);
	fd_write = write(fd_open, text_content, i);

	if (fd_open == -1 || fd_write == -1)
		return (-1);

	close(fd_open);

	return (1);
}
