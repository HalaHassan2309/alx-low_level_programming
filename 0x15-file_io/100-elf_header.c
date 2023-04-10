#include "main.h"
#include "elf.h"
/**
 * File: 100-elf_header.c
 * Auth: Hala Hassan
 */

void print_data(unsigned char *elf_ident);
void print_magic(unsigned char *elf_ident);
void print_class(unsigned char *elf_ident);
void print_abi(unsigned char *elf_ident);

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
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int fd, s;

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(fd);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	s = read(fd, header, sizeof(Elf64_Ehdr));
	if (s == -1)
	{
		free(header);
		close_elf(fd);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	check_elf(header->elf_ident);
	printf("ELF Header:\n");
	print_magic(header->elf_ident);
	print_class(header->elf_ident);
	print_data(header->elf_ident);
	print_version(header->elf_ident);
	print_osabi(header->elf_ident);
	print_abi(header->elf_ident);
	print_type(header->e_type, header->elf_ident);
	print_entry(header->e_entry, header->elf_ident);

	free(header);
	close_elf(fd);
	return (0);
}

/**
 * print_magic - Prints the magic numbers of an ELF header.
 * @elf_ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: Magic numbers are separated by spaces.
 */
void print_magic(unsigned char *elf_ident)
{
	int x;

	printf("  Magic:   ");

	for (x = 0; x < EI_NIDENT; x++)
	{
		printf("%02x", elf_ident[x]);

		if (x == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_class - Prints the class of an ELF header.
 * @elf_ident: A pointer to an array containing the ELF class.
 */
void print_class(unsigned char *elf_ident)
{
	printf("  Class:                             ");

	switch (elf_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", elf_ident[EI_CLASS]);
	}
}

/**
 * print_data - Prints the data of an ELF header.
 * @elf_ident: A pointer to an array containing the ELF class.
 */
void print_data(unsigned char *elf_ident)
{
	printf("  Data:                              ");

	switch (elf_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", elf_ident[EI_CLASS]);
	}
}

/**
 * print_abi - Prints the ABI version of an ELF header.
 * @elf_ident: A pointer to an array containing the ELF ABI version.
 */
void print_abi(unsigned char *elf_ident)
{
	printf("  ABI Version:                       %d\n",
	       elf_ident[EI_ABIVERSION]); }
