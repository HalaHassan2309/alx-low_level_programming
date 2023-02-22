#include <stdlib.h>
#include <stdio.h>

/**
 * positive_or_negative - Prints the last
 *        and whether it is greater than 5, less than 6, or 0.
 *
 */
void positive_or_negative(int n)
{
	if (n < 0)
	{
		printf("%d is negative\n", n);
	} else if (n > 0)
	{
		printf("%d is positive\n", n);
	} else
	{
		printf("%d is zero\n", n);
	}
}
