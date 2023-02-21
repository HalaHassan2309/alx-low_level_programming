#include "main.h"

/**
 * print_alphabetx10 - a function that prints the alphabet ten times, in lowercase
 *
 * Return: Always 0 (Succes)
 */
void print_alphabet_x10(void)
{
	int n, n1;

	for (n1 = 1; n1 <= 9; n1++)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
