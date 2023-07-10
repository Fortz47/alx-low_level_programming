#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

/**
 * main - Entry point
 * @argc: cmd line argument count
 * @argv: array of cmd line arguments
 *
 * Return: 0
 *
 * Decription: this function copies the content of a file
 * to another file. Usage: cp file_from file_to
 */
int main(int argc, char *argv[])
{
	char buffer[BUFFER_SIZE];
	int fd_from, fd_to;
	ssize_t read_from;

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT, 0664);
	if (fd_to == -1)
	{
		fd_to = open(argv[2], O_WRONLY | O_TRUNC);
		if (fd_to == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			if (close(fd_from) == -1)
			{
				dprintf(2, "Error: Can't close fd %d\n", fd_from);
				exit(100);
			}
			exit(99);
		}
	}
	while ((read_from = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		if (write(fd_to, buffer, read_from) == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			if (close(fd_from) == -1)
			{
				dprintf(2, "Error: Can't close fd %d\n", fd_from);
				exit(100);
			}
			if (close(fd_to) == -1)
			{
				dprintf(2, "Error: Can't close fd %d\n", fd_to);
				exit(100);
			}
			exit(99);
		}
	}
	if (read_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		if (close(fd_from) == -1)
		{
			dprintf(2, "Error: Can't close fd %d\n", fd_from);
			exit(100);
		}
		if (close(fd_to) == -1)
		{
			dprintf(2, "Error: Can't close fd %d\n", fd_to);
			exit(100);
		}
		exit(98);
	}

	if (close(fd_from) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
