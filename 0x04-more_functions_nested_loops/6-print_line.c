#include "main.h"

/**
 * print_line - a function that prints the numbers, from 0 to 9
 *
 * Return: 0-9 followed by newline
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
