#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number to a decimal
 * @b: char string
 *
 * Return: converted decimal number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, power = 1;
	int len = 0;

	if (b == NULL)
		return (0);

	while (b[len])
	{
		if (b[len] == '1' || b[len] == '0')
			len++;
		else
			return (0);
	}

	len--;

	while (len >= 0)
	{
		if (b[len] == '1')
		{
			sum += power;
		}
		power *= 2;
		len--;
	}

	return (sum);
}
