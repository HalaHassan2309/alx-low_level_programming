#include "main.h"

/**
 * print_sign - return 1 char 'c' is letter
 * @n : the input
 * Return: Always 0 (Succes)
 */
int print_sign(int n)
{
        if (n > 0)
        {
                _putchar('+');
		return (1);
        } else if (n < 0)
	{
		_putchar('-');
                return (-1);
	}
	_putchar('0');
        return (0);
}
