#include "main.h"

/**
 * _isalpha - return 1 char 'c' is letter
 *
 * Return: Always 0 (Succes)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
