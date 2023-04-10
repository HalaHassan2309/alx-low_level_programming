#ifndef ELF_H
#define ELF_H

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <elf.h>

void close_elf(int elf);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void check_elf(unsigned char *e_ident);
void print_version(unsigned char *e_ident);

#endif /* ELF_H */