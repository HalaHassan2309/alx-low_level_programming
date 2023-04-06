#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representation of a number
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp = n;
	int num = 0;

	if (n == 0)
	{
		printf("0");
		return;
	}

	while ((temp >>= 1) > 0)
	{
		num++;
	}

	while (num >= 0)
	{
		if( (n >> num) & 1)
			printf("1");
		else
			printf("0");
		num--;
	}
}
