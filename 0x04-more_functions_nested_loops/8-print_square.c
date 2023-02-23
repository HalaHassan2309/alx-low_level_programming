#include "main.h"

/**
 * print_square -  a function that draws a diagonal line on the terminal
 * @n: input number of times '\' should be printed
 * Return: a diagonal
 */
void print_square(int n)
{
	int co, sp;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (co = 1; co <= n; co++)
		{
			_putchar('#');
			for (sp = 1; sp < n; sp++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
