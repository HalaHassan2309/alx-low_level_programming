#include "main.h"

/**
 * _islower - return 1 char 'c' is lowercase
 *
 * Return: Always 0 (Succes)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
