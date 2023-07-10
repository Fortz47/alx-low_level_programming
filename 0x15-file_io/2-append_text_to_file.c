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
 * append_text_to_file - appends text at the end of a file.
 * @filename: filename
 * @text_content: text content
 *
 * Return: 1 for success or -1 if failed
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	FILE *file;
	ssize_t write_fd;

	if (!filename)
		return (-1);
	fd = open(filename,	O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	file = fdopen(fd, "w");
	if (!file)
	{
		close(fd);
		return (-1);
	}
	if (text_content)
	{
		write_fd = write(fileno(file), text_content, _strlen(text_content));
		if (write_fd == -1)
		{
			fclose(file);
			return (-1);
		}
	}
	fclose(file);
	return (1);
}
