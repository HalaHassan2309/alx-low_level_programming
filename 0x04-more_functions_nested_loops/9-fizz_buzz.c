#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that prints the numbers, from 0 to 9
 *
 * Return: 0
 */
int main ()
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 15) == 0)
			printf("FizzBuzz ");
		else if ((i % 3) == 0)
			printf("Fizz ");
		else if ((i % 5) == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
