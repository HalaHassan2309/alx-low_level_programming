#include "main.h"

/**
 * print_more_numbers - a function that prints the numbers, from 0 to 9
 *
 * Return: 0-9 followed by newline
 */
void print_more_numbers(void)
{
	int i, j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 14; i++)
			_putchar(i + '0');
		_putchar('\n');
	}
}
