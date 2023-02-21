#include "main.h"

/**
 * _islower - return 1 if c is lowercase
 *
 * Return: Always 0 (Succes)
 */
int _islower(int c)
{
	if (c >= 'a' || c <= 'z')
	{
		return (1);
	} else
	{
		return (0);
	}
}
