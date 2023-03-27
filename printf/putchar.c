#include <unistd.h>

/**
 * _putchar -write a char
 * @c: char to be written
 * 
 * Return char c
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}