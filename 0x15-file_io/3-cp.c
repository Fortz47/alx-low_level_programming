#include "main.h"

/**
 * main - this program copies the content of a file to another file.
 * @ac: argument count
 * @av: second parameter
 *
 * Return: 0 or 97, 98, 99, 100
 */

int main(int ac, char **av)
{
	int o_1, o_2, w_2, r_1, c_1, c_2;
	char *buffer;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}

	if (av[1] == NULL)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	o_1 = open(av[1], O_RDONLY);
	o_2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC);

	buffer = malloc(sizeof(char) * 1024);
	r_1 = read(o_1, buffer, 1024);
	if (r_1 == -1)
	{
		dprintf(2, "Can't read from file %s\n", av[1]);
		exit(98);
	}
	while (r_1 >= 1)
	{
		w_2 = write(o_2, buffer, r_1);
		if (w_2 == -1 || w_2 != r_1)
		{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			free(buffer);
			exit(99);
		}
		free(buffer);
		r_1 = read(o_1, buffer, 1024);
	}
	c_1 = close(o_1);
	if (c_1 == -1)
	{
		dprintf(2, "Error: Can't close fd %i\n", o_1);
		exit(100);
	}

	c_2 = close(o_2);
	if (c_2 == -1)
	{
		dprintf(2, "Error: Can't close fd %i\n", o_2);
		exit(100);
	}
	return (0);
}
