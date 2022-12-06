#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output.
 * @filename: name of file
 * @letters: number of byte to read
 *
 * Return: actual no of byte read or zero if failed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, res_read, res_write;
	char *buf;

	if (!filename)
		return (0);

	fd = open("filename", O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	res_read = read(fd, buf, letters);
	if (res_read == -1)
	{
		free(buf);
		return (0);
	}

	res_write = write(STDOUT_FILENO, buf, res_read);
	if ((res_write == -1) || (res_write != res_read))
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fd);
	return (res_write);
}
