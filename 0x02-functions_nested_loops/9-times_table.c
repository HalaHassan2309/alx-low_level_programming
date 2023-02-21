#include "main.h"
/**
 * times_table - function that prints every minute of the day, 24 hour clock
 * h = hour, m = minutes
 * / 10 allows second digit to rotate
 * for loop breaks before passing 24:00
 * Return: times table line by line
 */
void times_table(void)
{
	int h, m;

	for (h = 0; h < 10; h++)
	{
		for (m = 0; m < 10; m++)
		{
			_putchar((h * m) + '0');
			_putchar(',');
			_putchar((' ');
			_putchar((h * m) + '0');
		}
		_putchar('\n');
	}
}
