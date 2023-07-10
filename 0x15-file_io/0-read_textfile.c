#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output.
 * @filename: filename
 * @letters: number of characters to read
 *
 * Return: the actual number of letters it could read and print
 * or 0 if an error occured
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t read_fd, write_fd;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(letters + 1);
	if (!buf)
	{
		close(fd);
		return (0);
	}
	read_fd = read(fd, buf, letters);
	if (read_fd == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	write_fd = write(fileno(stdout), buf, read_fd);
	if (write_fd == -1 || write_fd != read_fd)
	{
		free(buf);
		close(fd);
		return (0);
	}
	close(fd);
	free(buf);
	return (write_fd);
}
