#include "main.h"

/**
 * _strlen - cal lenght of a string
 * @str: string
 *
 * Return: lenght of string
 *
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

/**
 * create_file - creates a file.
 * @filename: filename
 * @text_content: text content
 *
 * Return: 1 if success of -1 if error occured
 */
int create_file(const char *filename, char *text_content)
{
	FILE *file;
	int fd;
	ssize_t write_fd;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT, 0600);
	if (fd == -1)
	{
		fd = open(filename, O_WRONLY | O_TRUNC);
		if (fd == -1)
			return (-1);
	}
	file = fdopen(fd, "w");
	write_fd = write(fileno(file), text_content, _strlen(text_content));
	if (write_fd == -1)
	{
		close(fd);
		return (-1);
	}
	return (1);
}
