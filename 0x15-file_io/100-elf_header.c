#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *magic);
void print(unsigned char *magic);
void print_type(unsigned int type, unsigned char *magic);
void print_entry(unsigned long int entry, unsigned char *magic);
void close_file(int file);

/**
 * main - Displays the information contained in the
 *        ELF header at the start of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the file is not an ELF File or
 *              the function fails - exit code 98.
 */

int main(int argc, char **argv)
{
	int file;
	unsigned char magic[EI_NIDENT];

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s <elf_filename>\n", argv[0]);
		exit(98);
	}

	file = open(argv[1], O_RDONLY);

	if (file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot read file %s\n", argv[1]);
		exit(98);
	}

	if (read(file, magic, EI_NIDENT) != EI_NIDENT)
	{
		dprintf(STDERR_FILENO, "Error: Cannot read file %s\n", argv[1]);
		exit(98);
	}

	check_elf(magic);
	print(magic);
	print_type(*(unsigned int *)(magic + EI_TYPE), magic);
	print_entry(*(unsigned long int *)(magic + EI_ENTRY), magic);

	close_file(file);

	return (0);
}

/**
 * check_elf - Checks if a file is an ELF file.
 *
 *
 * @magic: If the file is not an ELF file - exit code 98.
 */

void check_elf(unsigned char *magic)
{
	if (magic[EI_MAG0] != ELFMAG0 ||
	magic[EI_MAG1] != ELFMAG1 ||
	magic[EI_MAG2] != ELFMAG2 ||
	magic[EI_MAG3] != ELFMAG3)
	{
		dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
		exit(98);
	}
}

/**
 * print_magic - Prints the magic numbers of an ELF header.
 *
 *
 * @magic:numbers are separated by spaces.
 */

void print(unsigned char *magic)
{
	printf("ELF Header:\n");

	printf("  Magic:   ");

	for (int i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", magic[i]);
		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
	print_type(*(unsigned int *)(magic + EI_TYPE), magic);
	print_entry(*(unsigned long int *)(magic + EI_ENTRY), magic);
}
