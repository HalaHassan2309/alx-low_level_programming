/*
 * File: 1-last_digit.c
 * Auth: Brennan D Baraban
 */
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Prints the last digit of a randomly generated number
 *        and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n, i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	i = n % 10;
	if (i > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, i);
	} else if (i == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, i);
	} else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, i);
	}
	return (0);
}
