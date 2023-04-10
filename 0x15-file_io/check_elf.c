/**
 * check_elf - Checks if a file is an ELF file.
 * @elf_ident: A pointer to an array of the ELF magic numbers.
 *
 * Description: If the file is not an ELF file - exit code 98.
 */
void check_elf(unsigned char *elf_ident)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (elf_ident[i] != 127 &&
		    elf_ident[i] != 'E' &&
		    elf_ident[i] != 'L' &&
		    elf_ident[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}
