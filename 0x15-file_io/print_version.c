/**
 * print_version - Prints the version of an ELF header.
 * @elf_ident: A pointer to an array containing the ELF version.
 */
void print_version(unsigned char *elf_ident)
{
	printf("  Version:                           %d",
	       elf_ident[EI_VERSION]);

	switch (elf_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}