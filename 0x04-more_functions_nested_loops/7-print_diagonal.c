#include "main.h"

/**
 * print_diagonal - a function that draws diagonal in the terminal
 * @n: input number of times to print '_'
 * Return: a straight line
 */
void print_diagonal(int n)
{
	int co;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (co = 0; co < n; co++)
		{
			_putchar(co * ' ');
			_putchar('\\');
		}
		_putchar('\n');
	}
}
