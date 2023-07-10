#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <string.h>
#include <errno.h>


/**
 * print_error - prints error msg
 * @message: error message
 */
void print_error(const char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(98);
}

/**
 * print_elf_header - information contained in the ELF header at
 * the start of an ELF file.
 * @elf_header: elf header
 */
void print_elf_header(const Elf64_Ehdr *elf_header)
{
	int i;

	printf("Magic: ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", elf_header->e_ident[i]);
	}
	printf("\n");

	printf("Class: %d-bit\n", elf_header->e_ident[EI_CLASS] == ELFCLASS32 ? 32 : 64);

	printf("Data: ");
	switch (elf_header->e_ident[EI_DATA])
	{
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("Unknown data format\n");
			break;
	}

	printf("Version: %d\n", elf_header->e_ident[EI_VERSION]);

	printf("OS/ABI: ");
	switch (elf_header->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("FreeBSD\n");
			break;
		case ELFOSABI_OPENBSD:
			printf("OpenBSD\n");
			break;
		default:
			printf("Unknown OS/ABI\n");
			break;
	}

	printf("ABI Version: %d\n", elf_header->e_ident[EI_ABIVERSION]);

	printf("Type: ");
	switch (elf_header->e_type)
	{
		case ET_NONE:
			printf("None (Unknown type)\n");
			break;
		case ET_REL:
			printf("Relocatable\n");
			break;
		case ET_EXEC:
			printf("Executable\n");
			break;
		case ET_DYN:
			printf("Shared object\n");
			break;
		case ET_CORE:
			printf("Core dump\n");
			break;
		default:
			printf("Unknown type\n");
			break;
	}

	printf("Entry point address: 0x%lx\n", elf_header->e_entry);
}

/**
 * main - Entry point
 * @argc: arg count
 * @argv: array of args
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	const char *filename;
	int fd;
	ssize_t bytes_read;
	Elf64_Ehdr elf_header;

	if (argc != 2)
	{
		print_error("Usage: elf_header elf_filename");
	}

	filename = argv[1];
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		print_error(strerror(errno));
	}

	bytes_read = read(fd, &elf_header, sizeof(elf_header));
	if (bytes_read == -1)
	{
		print_error(strerror(errno));
	}

	if ((long unsigned int)bytes_read < sizeof(elf_header))
	{
		print_error("Invalid ELF file");
	}

	if (memcmp(elf_header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		print_error("Not an ELF file");
	}

	print_elf_header(&elf_header);

	close(fd);
	return (0);
}
