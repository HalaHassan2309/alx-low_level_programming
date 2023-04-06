#include "main.h"
#include <stdio.h>

/**
 * get_endianness - check for endianess
 *
 * Return: 1 or 0
 */

int get_endianness()
{
  unsigned int x = 1;
  char *c = (char*) &x;
  
  return (int)*c;
}
