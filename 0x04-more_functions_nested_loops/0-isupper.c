#include "main.h"
#include <stdio.h>

/**
 * _isupper - print 0 or 1.
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
	    return (1);
    } else {
	    return (0);
    }
}
